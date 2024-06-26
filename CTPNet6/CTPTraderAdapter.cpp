#include "pch.h"
#include "TraderSpi.h"
#include "CTPTraderAdapter.h"
using namespace System::Threading;

using namespace Native;

namespace CTP
{
	void CTPTraderAdapter::InitializeEnvironment()
	{
		inQuery = false;
		requestID = 0;
		requestID = orderRef = 0;
		isConnected  =false;
		isLogin = false;
	}

	CTPTraderAdapter::CTPTraderAdapter(void)
	{
		InitializeEnvironment();
		m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi();
		m_pSpi = new CTraderSpi(this);
		m_pApi->RegisterSpi((CThostFtdcTraderSpi*)m_pSpi);
	}

	CTPTraderAdapter::CTPTraderAdapter(String^ pszFlowPath)
	{
		InitializeEnvironment();
		CAutoStrPtr asp(pszFlowPath);
		m_pApi = CThostFtdcTraderApi::CreateFtdcTraderApi(asp.m_pChar);
		m_pSpi = new CTraderSpi(this);
		m_pApi->RegisterSpi(m_pSpi);
	}

	CTPTraderAdapter::~CTPTraderAdapter(void)
	{
		this->Release();
	}

	int CTPTraderAdapter::CreateRequestID()
	{
		return Interlocked::Increment(requestID);
	}

	int CTPTraderAdapter::CreateOrderRef()
	{
		return Interlocked::Increment(orderRef);
	}

	void CTPTraderAdapter::Release(void)
	{
		if(m_pApi)
		{
			m_pApi->RegisterSpi(nullptr);
			m_pApi->Release();
			m_pApi = nullptr;
		}
		if(m_pSpi)
		{
			delete m_pSpi;
			m_pSpi = nullptr;
		}
	}

	//注册前置机网络地址
	void CTPTraderAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}
	// 注册名字服务器网络地址
	void CTPTraderAdapter::RegisterNameServer(String^  pszNsAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszNsAddress);
		m_pApi->RegisterNameServer(asp.m_pChar);
	}

	///订阅私有流。
	void CTPTraderAdapter::SubscribePrivateTopic(EnumTeResumeType nResumeType)
	{
		m_pApi->SubscribePrivateTopic((THOST_TE_RESUME_TYPE)nResumeType);
	}
	///订阅公共流
	void CTPTraderAdapter::SubscribePublicTopic(EnumTeResumeType nResumeType)
	{
		m_pApi->SubscribePublicTopic((THOST_TE_RESUME_TYPE)nResumeType);
	}

	void CTPTraderAdapter::Init(void)
	{
		m_pApi->Init();
	}

	int CTPTraderAdapter::Join(void)
	{
		return m_pApi->Join();
	}

	String^ CTPTraderAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}

	///客户端认证请求
	int CTPTraderAdapter::ReqAuthenticate(ThostFtdcReqAuthenticateField^ pReqAuthenticateField){
		CThostFtdcReqAuthenticateField native;
		MNConv<ThostFtdcReqAuthenticateField^, CThostFtdcReqAuthenticateField>::M2N(pReqAuthenticateField, &native);
		return m_pApi->ReqAuthenticate(&native, CreateRequestID());
	}

	///用户登录请求
	int CTPTraderAdapter::ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField)
	{
		if(m_pApi==nullptr)
		{
			return 0;
		}

		CThostFtdcReqUserLoginField native;
		investorId = pReqUserLoginField->UserID;
		brokerId = pReqUserLoginField->BrokerID;
		MNConv<ThostFtdcReqUserLoginField^, CThostFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
		return m_pApi->ReqUserLogin(&native, CreateRequestID());
	}

	///登出请求
	int CTPTraderAdapter::ReqUserLogout()
	{
		if(m_pApi == nullptr)
		{
			return 0;
		}

		ThostFtdcUserLogoutField^ pUserLogout = gcnew ThostFtdcUserLogoutField();
		pUserLogout->BrokerID = brokerId;
		pUserLogout->UserID = investorId;

		CThostFtdcUserLogoutField native;
		MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::M2N(pUserLogout, &native);
		return m_pApi->ReqUserLogout(&native, CreateRequestID());
	}

	///用户口令更新请求
	int CTPTraderAdapter::ReqUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate)
	{
		CThostFtdcUserPasswordUpdateField native;
		MNConv<ThostFtdcUserPasswordUpdateField^, CThostFtdcUserPasswordUpdateField>::M2N(pUserPasswordUpdate, &native);
		return m_pApi->ReqUserPasswordUpdate(&native, CreateRequestID());
	}

	///资金账户口令更新请求
	int CTPTraderAdapter::ReqTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate)
	{
		CThostFtdcTradingAccountPasswordUpdateField native;
		MNConv<ThostFtdcTradingAccountPasswordUpdateField^, CThostFtdcTradingAccountPasswordUpdateField>::M2N(pTradingAccountPasswordUpdate, &native);
		return m_pApi->ReqTradingAccountPasswordUpdate(&native, CreateRequestID());
	}

	///请求更新密码
	int CTPTraderAdapter::ReqUpdatePassword(String^ oldPassword, String^ newPassword, bool accountAmountPassword)
	{
		if(accountAmountPassword)
		{
			ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate = gcnew ThostFtdcTradingAccountPasswordUpdateField();
			pTradingAccountPasswordUpdate->BrokerID = BrokerID;
			pTradingAccountPasswordUpdate->AccountID = InvestorID;
			pTradingAccountPasswordUpdate->OldPassword = oldPassword;
			pTradingAccountPasswordUpdate->NewPassword = newPassword;
			return ReqTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate);
		}
		else
		{
			ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate = gcnew ThostFtdcUserPasswordUpdateField();
			pUserPasswordUpdate->BrokerID = BrokerID;
			pUserPasswordUpdate->UserID = InvestorID;
			pUserPasswordUpdate->OldPassword = oldPassword;
			pUserPasswordUpdate->NewPassword = newPassword;
			return ReqUserPasswordUpdate(pUserPasswordUpdate);
		}
	}

	///报单录入请求
	int CTPTraderAdapter::ReqOrderInsert(ThostFtdcInputOrderField^ pInputOrder)
	{
		//		pInputOrder->OrderRef
		if(String::IsNullOrEmpty(pInputOrder->OrderRef))
			pInputOrder->OrderRef = CreateOrderRef().ToString();
		CThostFtdcInputOrderField native;
		MNConv<ThostFtdcInputOrderField^, CThostFtdcInputOrderField>::M2N(pInputOrder, &native);
		return m_pApi->ReqOrderInsert(&native, CreateRequestID());
	}

	///预埋单录入请求
	int CTPTraderAdapter::ReqParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder)
	{
		if(String::IsNullOrEmpty(pParkedOrder->OrderRef))
			pParkedOrder->OrderRef = CreateOrderRef().ToString();
		CThostFtdcParkedOrderField native;
		MNConv<ThostFtdcParkedOrderField^, CThostFtdcParkedOrderField>::M2N(pParkedOrder, &native);
		return m_pApi->ReqParkedOrderInsert(&native, CreateRequestID());
	}

	///预埋撤单录入请求
	int CTPTraderAdapter::ReqParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction)
	{
		CThostFtdcParkedOrderActionField native;
		MNConv<ThostFtdcParkedOrderActionField^, CThostFtdcParkedOrderActionField>::M2N(pParkedOrderAction, &native);
		return m_pApi->ReqParkedOrderAction(&native, CreateRequestID());
	}

	///报单操作请求
	int CTPTraderAdapter::ReqOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction)
	{
		CThostFtdcInputOrderActionField native;
		MNConv<ThostFtdcInputOrderActionField^, CThostFtdcInputOrderActionField>::M2N(pInputOrderAction, &native);
		return m_pApi->ReqOrderAction(&native, CreateRequestID());
	}

	///查询最大报单数量请求
	int CTPTraderAdapter::ReqQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume)
	{
		CThostFtdcQueryMaxOrderVolumeField native;
		MNConv<ThostFtdcQueryMaxOrderVolumeField^, CThostFtdcQueryMaxOrderVolumeField>::M2N(pQueryMaxOrderVolume, &native);
		return m_pApi->ReqQueryMaxOrderVolume(&native, CreateRequestID());
	}

	///投资者结算结果确认
	int CTPTraderAdapter::ReqSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm)
	{
		CThostFtdcSettlementInfoConfirmField native;
		MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::M2N(pSettlementInfoConfirm, &native);
		return m_pApi->ReqSettlementInfoConfirm(&native, CreateRequestID());
	}

	///投资者结算结果确认
	int CTPTraderAdapter::ReqSettlementInfoConfirm()
	{
		ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm = gcnew ThostFtdcSettlementInfoConfirmField();
		pSettlementInfoConfirm->BrokerID = BrokerID;
		pSettlementInfoConfirm->InvestorID = InvestorID;
		CThostFtdcSettlementInfoConfirmField native;
		MNConv<ThostFtdcSettlementInfoConfirmField^, CThostFtdcSettlementInfoConfirmField>::M2N(pSettlementInfoConfirm, &native);
		return m_pApi->ReqSettlementInfoConfirm(&native, CreateRequestID());
	}

	///请求删除预埋单
	int CTPTraderAdapter::ReqRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder)
	{
		CThostFtdcRemoveParkedOrderField native;
		MNConv<ThostFtdcRemoveParkedOrderField^, CThostFtdcRemoveParkedOrderField>::M2N(pRemoveParkedOrder, &native);
		return m_pApi->ReqRemoveParkedOrder(&native, CreateRequestID());
	}

	///请求删除预埋撤单
	int CTPTraderAdapter::ReqRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction)
	{
		CThostFtdcRemoveParkedOrderActionField native;
		MNConv<ThostFtdcRemoveParkedOrderActionField^, CThostFtdcRemoveParkedOrderActionField>::M2N(pRemoveParkedOrderAction, &native);
		return m_pApi->ReqRemoveParkedOrderAction(&native, CreateRequestID());
	}

	/// <summary>
	///请求查询报单
	/// </summary>
	int CTPTraderAdapter::ReqQryOrder(ThostFtdcQryOrderField^ pQryOrder)
	{
		if(m_pApi==nullptr)
		{
			return 0;
		}

		CThostFtdcQryOrderField native;
		MNConv<ThostFtdcQryOrderField^, CThostFtdcQryOrderField>::M2N(pQryOrder, &native);
		return m_pApi->ReqQryOrder(&native, CreateRequestID());
	}

	///请求查询报单
	int CTPTraderAdapter::ReqQryOrder()
	{
		if(m_pApi==nullptr)
		{
			return 0;
		}

		ThostFtdcQryOrderField^ pQryOrder = gcnew ThostFtdcQryOrderField();
		pQryOrder->BrokerID = BrokerID;
		pQryOrder->InvestorID = InvestorID;
		CThostFtdcQryOrderField native;
		MNConv<ThostFtdcQryOrderField^, CThostFtdcQryOrderField>::M2N(pQryOrder, &native);
		return m_pApi->ReqQryOrder(&native, CreateRequestID());
	}

	///请求查询成交
	int CTPTraderAdapter::ReqQryTrade(ThostFtdcQryTradeField^ pQryTrade)
	{
		CThostFtdcQryTradeField native;
		MNConv<ThostFtdcQryTradeField^, CThostFtdcQryTradeField>::M2N(pQryTrade, &native);
		return m_pApi->ReqQryTrade(&native, CreateRequestID());
	}

	///请求查询成交
	int CTPTraderAdapter::ReqQryTrade()
	{
		ThostFtdcQryTradeField^ pQryTrade = gcnew ThostFtdcQryTradeField();
		pQryTrade->BrokerID = BrokerID;
		pQryTrade->InvestorID = InvestorID;
		CThostFtdcQryTradeField native;
		MNConv<ThostFtdcQryTradeField^, CThostFtdcQryTradeField>::M2N(pQryTrade, &native);
		return m_pApi->ReqQryTrade(&native, CreateRequestID());
	}

	///根据合约代码查询成交情况
	int CTPTraderAdapter::ReqQryTrade(String^ instrumentID)
	{
		ThostFtdcQryTradeField^ pQryTrade = gcnew ThostFtdcQryTradeField();
		pQryTrade->InstrumentID = instrumentID;
		pQryTrade->InvestorID = InvestorID;
		pQryTrade->BrokerID = BrokerID;
		CThostFtdcQryTradeField native;
		MNConv<ThostFtdcQryTradeField^, CThostFtdcQryTradeField>::M2N(pQryTrade, &native);
		return m_pApi->ReqQryTrade(&native, CreateRequestID());
	}

	///请求查询投资者持仓
	int CTPTraderAdapter::ReqQryInvestorPosition(ThostFtdcQryInvestorPositionField^ pQryInvestorPosition)
	{
		CThostFtdcQryInvestorPositionField native;
		MNConv<ThostFtdcQryInvestorPositionField^, CThostFtdcQryInvestorPositionField>::M2N(pQryInvestorPosition, &native);
		return m_pApi->ReqQryInvestorPosition(&native, CreateRequestID());
	}

	///请求查询投资者持仓
	int CTPTraderAdapter::ReqQryInvestorPosition()
	{
		ThostFtdcQryInvestorPositionField^ pQryInvestorPosition = gcnew ThostFtdcQryInvestorPositionField();
		pQryInvestorPosition->BrokerID = BrokerID;
		pQryInvestorPosition->InvestorID = InvestorID;
		CThostFtdcQryInvestorPositionField native;
		MNConv<ThostFtdcQryInvestorPositionField^, CThostFtdcQryInvestorPositionField>::M2N(pQryInvestorPosition, &native);
		return m_pApi->ReqQryInvestorPosition(&native, CreateRequestID());
	}

	///请求查询资金账户
	int CTPTraderAdapter::ReqQryTradingAccount(ThostFtdcQryTradingAccountField^ pQryTradingAccount)
	{	
		CThostFtdcQryTradingAccountField native;
		MNConv<ThostFtdcQryTradingAccountField^, CThostFtdcQryTradingAccountField>::M2N(pQryTradingAccount, &native);
		return m_pApi->ReqQryTradingAccount(&native, CreateRequestID());
	}

	///请求查询资金账户
	int CTPTraderAdapter::ReqQryTradingAccount()
	{	
		ThostFtdcQryTradingAccountField^ pQryTradingAccount = gcnew ThostFtdcQryTradingAccountField();
		pQryTradingAccount->InvestorID = InvestorID;
		pQryTradingAccount->BrokerID = BrokerID;
		CThostFtdcQryTradingAccountField native;
		MNConv<ThostFtdcQryTradingAccountField^, CThostFtdcQryTradingAccountField>::M2N(pQryTradingAccount, &native);
		return m_pApi->ReqQryTradingAccount(&native, CreateRequestID());
	}

	///请求查询投资者
	int CTPTraderAdapter::ReqQryInvestor(ThostFtdcQryInvestorField^ pQryInvestor)
	{
		CThostFtdcQryInvestorField native;
		MNConv<ThostFtdcQryInvestorField^, CThostFtdcQryInvestorField>::M2N(pQryInvestor, &native);
		return m_pApi->ReqQryInvestor(&native, CreateRequestID());
	}

	///请求查询投资者
	int CTPTraderAdapter::ReqQryInvestor()
	{
		ThostFtdcQryInvestorField^ pQryInvestor = gcnew ThostFtdcQryInvestorField();
		pQryInvestor->BrokerID = BrokerID;
		pQryInvestor->InvestorID = InvestorID;
		CThostFtdcQryInvestorField native;
		MNConv<ThostFtdcQryInvestorField^, CThostFtdcQryInvestorField>::M2N(pQryInvestor, &native);
		return m_pApi->ReqQryInvestor(&native, CreateRequestID());
	}

	///请求查询交易编码
	int CTPTraderAdapter::ReqQryTradingCode(ThostFtdcQryTradingCodeField^ pQryTradingCode)
	{
		CThostFtdcQryTradingCodeField native;
		MNConv<ThostFtdcQryTradingCodeField^, CThostFtdcQryTradingCodeField>::M2N(pQryTradingCode, &native);
		return m_pApi->ReqQryTradingCode(&native, CreateRequestID());
	}

	///请求查询交易编码
	int CTPTraderAdapter::ReqQryTradingCode()
	{
		ThostFtdcQryTradingCodeField^ pQryTradingCode = gcnew ThostFtdcQryTradingCodeField();
		pQryTradingCode->BrokerID = BrokerID;
		pQryTradingCode->InvestorID = InvestorID;
		CThostFtdcQryTradingCodeField native;
		MNConv<ThostFtdcQryTradingCodeField^, CThostFtdcQryTradingCodeField>::M2N(pQryTradingCode, &native);
		return m_pApi->ReqQryTradingCode(&native, CreateRequestID());
	}

	///请求查询合约保证金率
	int CTPTraderAdapter::ReqQryInstrumentMarginRate(ThostFtdcQryInstrumentMarginRateField^ pQryInstrumentMarginRate)
	{
		CThostFtdcQryInstrumentMarginRateField native;
		MNConv<ThostFtdcQryInstrumentMarginRateField^, CThostFtdcQryInstrumentMarginRateField>::M2N(pQryInstrumentMarginRate, &native);
		return m_pApi->ReqQryInstrumentMarginRate(&native, CreateRequestID());
	}

	///请求根据合约代码查询合约保证金率
	int CTPTraderAdapter::ReqQryInstrumentMarginRate(String^ instrumentID)
	{
		ThostFtdcQryInstrumentMarginRateField^ pQryInstrumentMarginRate = gcnew ThostFtdcQryInstrumentMarginRateField();
		pQryInstrumentMarginRate->BrokerID = BrokerID;
		pQryInstrumentMarginRate->InvestorID = InvestorID;
		pQryInstrumentMarginRate->InstrumentID = instrumentID;
		CThostFtdcQryInstrumentMarginRateField native;
		MNConv<ThostFtdcQryInstrumentMarginRateField^, CThostFtdcQryInstrumentMarginRateField>::M2N(pQryInstrumentMarginRate, &native);
		return m_pApi->ReqQryInstrumentMarginRate(&native, CreateRequestID());
	}

	///请求查询合约手续费率
	int CTPTraderAdapter::ReqQryInstrumentCommissionRate(ThostFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate)
	{
		CThostFtdcQryInstrumentCommissionRateField native;
		MNConv<ThostFtdcQryInstrumentCommissionRateField^, CThostFtdcQryInstrumentCommissionRateField>::M2N(pQryInstrumentCommissionRate, &native);
		return m_pApi->ReqQryInstrumentCommissionRate(&native, CreateRequestID());
	}

	///请求查询合约手续费率
	int CTPTraderAdapter::ReqQryInstrumentCommissionRate(String^ instrumentID)
	{
		ThostFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate = gcnew ThostFtdcQryInstrumentCommissionRateField();
		pQryInstrumentCommissionRate->BrokerID = BrokerID;
		pQryInstrumentCommissionRate->InvestorID = InvestorID;
		pQryInstrumentCommissionRate->InstrumentID = instrumentID;
		CThostFtdcQryInstrumentCommissionRateField native;
		MNConv<ThostFtdcQryInstrumentCommissionRateField^, CThostFtdcQryInstrumentCommissionRateField>::M2N(pQryInstrumentCommissionRate, &native);
		return m_pApi->ReqQryInstrumentCommissionRate(&native, CreateRequestID());
	}

	///请求查询交易所
	int CTPTraderAdapter::ReqQryExchange(ThostFtdcQryExchangeField^ pQryExchange)
	{
		CThostFtdcQryExchangeField native;
		MNConv<ThostFtdcQryExchangeField^, CThostFtdcQryExchangeField>::M2N(pQryExchange, &native);
		return m_pApi->ReqQryExchange(&native, CreateRequestID());
	}

	///请求查询交易所
	int CTPTraderAdapter::ReqQryExchange(String^ exchangeID)
	{
		ThostFtdcQryExchangeField^ pQryExchange = gcnew ThostFtdcQryExchangeField();
		pQryExchange->ExchangeID = exchangeID;
		CThostFtdcQryExchangeField native;
		MNConv<ThostFtdcQryExchangeField^, CThostFtdcQryExchangeField>::M2N(pQryExchange, &native);
		return m_pApi->ReqQryExchange(&native, CreateRequestID());
	}

	///请求查询合约
	int CTPTraderAdapter::ReqQryInstrument(ThostFtdcQryInstrumentField^ pQryInstrument)
	{
		CThostFtdcQryInstrumentField native;
		MNConv<ThostFtdcQryInstrumentField^, CThostFtdcQryInstrumentField>::M2N(pQryInstrument, &native);
		return m_pApi->ReqQryInstrument(&native, CreateRequestID());
	}

	///请求查询合约
	int CTPTraderAdapter::ReqQryInstrument(String^ exchangeID, String^ instrumentID)
	{
		ThostFtdcQryInstrumentField^ pQryInstrument = gcnew ThostFtdcQryInstrumentField();
		pQryInstrument->ExchangeID = exchangeID;
		pQryInstrument->InstrumentID = instrumentID;

		CThostFtdcQryInstrumentField native;
		MNConv<ThostFtdcQryInstrumentField^, CThostFtdcQryInstrumentField>::M2N(pQryInstrument, &native);
		return m_pApi->ReqQryInstrument(&native, CreateRequestID());
	}
	/// 请求查询指定市场合约或指定合约
	int CTPTraderAdapter::ReqQryInstrument(String^ ID, bool isExchangeID)
	{
		if(isExchangeID)
			return ReqQryInstrument(ID, "");
		else
			return ReqQryInstrument("", ID);
	}

	/// 请求查询所有合约
	int CTPTraderAdapter::ReqQryInstrument()
	{
		return ReqQryInstrument("", "");
	}

	///请求查询行情
	int CTPTraderAdapter::ReqQryDepthMarketData(ThostFtdcQryDepthMarketDataField^ pQryDepthMarketData)
	{
		CThostFtdcQryDepthMarketDataField native;
		MNConv<ThostFtdcQryDepthMarketDataField^, CThostFtdcQryDepthMarketDataField>::M2N(pQryDepthMarketData, &native);
		return m_pApi->ReqQryDepthMarketData(&native, CreateRequestID());
	}

	///请求查询行情
	int CTPTraderAdapter::ReqQryDepthMarketData(String^ instrumentID)
	{
		ThostFtdcQryDepthMarketDataField^ pQryDepthMarketData = gcnew ThostFtdcQryDepthMarketDataField();
		pQryDepthMarketData->InstrumentID = instrumentID;
		CThostFtdcQryDepthMarketDataField native;
		MNConv<ThostFtdcQryDepthMarketDataField^, CThostFtdcQryDepthMarketDataField>::M2N(pQryDepthMarketData, &native);
		return m_pApi->ReqQryDepthMarketData(&native, CreateRequestID());
	}

	///请求查询投资者结算结果
	int CTPTraderAdapter::ReqQrySettlementInfo(ThostFtdcQrySettlementInfoField^ pQrySettlementInfo)
	{
		CThostFtdcQrySettlementInfoField native;
		MNConv<ThostFtdcQrySettlementInfoField^, CThostFtdcQrySettlementInfoField>::M2N(pQrySettlementInfo, &native);
		return m_pApi->ReqQrySettlementInfo(&native, CreateRequestID());
	}

	///请求查询投资者结算结果
	int CTPTraderAdapter::ReqQrySettlementInfo()
	{
		ThostFtdcQrySettlementInfoField^ pQrySettlementInfo = gcnew ThostFtdcQrySettlementInfoField();
		pQrySettlementInfo->BrokerID = BrokerID;
		pQrySettlementInfo->InvestorID = InvestorID;
		CThostFtdcQrySettlementInfoField native;
		MNConv<ThostFtdcQrySettlementInfoField^, CThostFtdcQrySettlementInfoField>::M2N(pQrySettlementInfo, &native);
		return m_pApi->ReqQrySettlementInfo(&native, CreateRequestID());
	}

	///请求查询转帐银行
	int CTPTraderAdapter::ReqQryTransferBank(ThostFtdcQryTransferBankField^ pQryTransferBank)
	{
		CThostFtdcQryTransferBankField native;
		MNConv<ThostFtdcQryTransferBankField^, CThostFtdcQryTransferBankField>::M2N(pQryTransferBank, &native);
		return m_pApi->ReqQryTransferBank(&native, CreateRequestID());
	}

	///请求查询投资者持仓明细
	int CTPTraderAdapter::ReqQryInvestorPositionDetail(ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail)
	{
		CThostFtdcQryInvestorPositionDetailField native;
		MNConv<ThostFtdcQryInvestorPositionDetailField^, CThostFtdcQryInvestorPositionDetailField>::M2N(pQryInvestorPositionDetail, &native);
		return m_pApi->ReqQryInvestorPositionDetail(&native, CreateRequestID());
	}

	///请求查询投资者持仓明细
	int CTPTraderAdapter::ReqQryInvestorPositionDetail()
	{
		ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail = gcnew ThostFtdcQryInvestorPositionDetailField();
		pQryInvestorPositionDetail->BrokerID = BrokerID;
		pQryInvestorPositionDetail->InvestorID = InvestorID;
		CThostFtdcQryInvestorPositionDetailField native;
		MNConv<ThostFtdcQryInvestorPositionDetailField^, CThostFtdcQryInvestorPositionDetailField>::M2N(pQryInvestorPositionDetail, &native);
		return m_pApi->ReqQryInvestorPositionDetail(&native, CreateRequestID());
	}

	///请求按合约代码查询投资者持仓明细
	int CTPTraderAdapter::ReqQryInvestorPositionDetail(String^ instrumentID)
	{
		ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail = gcnew ThostFtdcQryInvestorPositionDetailField();
		pQryInvestorPositionDetail->BrokerID = BrokerID;
		pQryInvestorPositionDetail->InvestorID = InvestorID;
		pQryInvestorPositionDetail->InstrumentID = instrumentID;
		CThostFtdcQryInvestorPositionDetailField native;
		MNConv<ThostFtdcQryInvestorPositionDetailField^, CThostFtdcQryInvestorPositionDetailField>::M2N(pQryInvestorPositionDetail, &native);
		return m_pApi->ReqQryInvestorPositionDetail(&native, CreateRequestID());
	}

	///请求查询客户通知
	int CTPTraderAdapter::ReqQryNotice(ThostFtdcQryNoticeField^ pQryNotice)
	{
		CThostFtdcQryNoticeField native;
		MNConv<ThostFtdcQryNoticeField^, CThostFtdcQryNoticeField>::M2N(pQryNotice, &native);
		return m_pApi->ReqQryNotice(&native, CreateRequestID());
	}

	///请求查询客户通知
	int CTPTraderAdapter::ReqQryNotice()
	{
		ThostFtdcQryNoticeField^ pQryNotice = gcnew ThostFtdcQryNoticeField();
		pQryNotice->BrokerID = BrokerID;
		CThostFtdcQryNoticeField native;
		MNConv<ThostFtdcQryNoticeField^, CThostFtdcQryNoticeField>::M2N(pQryNotice, &native);
		return m_pApi->ReqQryNotice(&native, CreateRequestID());
	}

	///请求查询结算信息确认
	int CTPTraderAdapter::ReqQrySettlementInfoConfirm(ThostFtdcQrySettlementInfoConfirmField^ pQrySettlementInfoConfirm)
	{
		CThostFtdcQrySettlementInfoConfirmField native;
		MNConv<ThostFtdcQrySettlementInfoConfirmField^, CThostFtdcQrySettlementInfoConfirmField>::M2N(pQrySettlementInfoConfirm, &native);
		return m_pApi->ReqQrySettlementInfoConfirm(&native, CreateRequestID());
	}

	///请求查询结算信息确认
	int CTPTraderAdapter::ReqQrySettlementInfoConfirm()
	{
		ThostFtdcQrySettlementInfoConfirmField^ pQrySettlementInfoConfirm = gcnew ThostFtdcQrySettlementInfoConfirmField();
		pQrySettlementInfoConfirm->BrokerID = BrokerID;
		pQrySettlementInfoConfirm->InvestorID = InvestorID;
		CThostFtdcQrySettlementInfoConfirmField native;
		MNConv<ThostFtdcQrySettlementInfoConfirmField^, CThostFtdcQrySettlementInfoConfirmField>::M2N(pQrySettlementInfoConfirm, &native);
		return m_pApi->ReqQrySettlementInfoConfirm(&native, CreateRequestID());
	}

	///请求查询投资者组合持仓明细
	int CTPTraderAdapter::ReqQryInvestorPositionCombineDetail(ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail)
	{
		CThostFtdcQryInvestorPositionCombineDetailField native;
		MNConv<ThostFtdcQryInvestorPositionCombineDetailField^, CThostFtdcQryInvestorPositionCombineDetailField>::M2N(pQryInvestorPositionCombineDetail, &native);
		return m_pApi->ReqQryInvestorPositionCombineDetail(&native, CreateRequestID());
	}

	///请求查询投资者组合持仓明细
	int CTPTraderAdapter::ReqQryInvestorPositionCombineDetail()
	{
		ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail = gcnew ThostFtdcQryInvestorPositionCombineDetailField();
		pQryInvestorPositionCombineDetail->BrokerID = BrokerID;
		pQryInvestorPositionCombineDetail->InvestorID = InvestorID;
		CThostFtdcQryInvestorPositionCombineDetailField native;
		MNConv<ThostFtdcQryInvestorPositionCombineDetailField^, CThostFtdcQryInvestorPositionCombineDetailField>::M2N(pQryInvestorPositionCombineDetail, &native);
		return m_pApi->ReqQryInvestorPositionCombineDetail(&native, CreateRequestID());
	}

	///请求查询保证金监管系统经纪公司资金账户密钥
	int CTPTraderAdapter::ReqQryCFMMCTradingAccountKey(ThostFtdcQryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey)
	{
		CThostFtdcQryCFMMCTradingAccountKeyField native;
		MNConv<ThostFtdcQryCFMMCTradingAccountKeyField^, CThostFtdcQryCFMMCTradingAccountKeyField>::M2N(pQryCFMMCTradingAccountKey, &native);
		return m_pApi->ReqQryCFMMCTradingAccountKey(&native, CreateRequestID());
	}

	///请求查询保证金监管系统经纪公司资金账户密钥
	int CTPTraderAdapter::ReqQryCFMMCTradingAccountKey()
	{
		ThostFtdcQryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey = gcnew ThostFtdcQryCFMMCTradingAccountKeyField();
		pQryCFMMCTradingAccountKey->BrokerID = BrokerID;
		pQryCFMMCTradingAccountKey->InvestorID = InvestorID;
		CThostFtdcQryCFMMCTradingAccountKeyField native;
		MNConv<ThostFtdcQryCFMMCTradingAccountKeyField^, CThostFtdcQryCFMMCTradingAccountKeyField>::M2N(pQryCFMMCTradingAccountKey, &native);
		return m_pApi->ReqQryCFMMCTradingAccountKey(&native, CreateRequestID());
	}

	///请求查询仓单折抵信息
	int CTPTraderAdapter::ReqQryEWarrantOffset(ThostFtdcQryEWarrantOffsetField^ pQryEWarrantOffset)
	{
		CThostFtdcQryEWarrantOffsetField native;
		MNConv<ThostFtdcQryEWarrantOffsetField^, CThostFtdcQryEWarrantOffsetField>::M2N(pQryEWarrantOffset, &native);
		return m_pApi->ReqQryEWarrantOffset(&native, CreateRequestID());
	}

	///请求查询转帐流水
	int CTPTraderAdapter::ReqQryTransferSerial(ThostFtdcQryTransferSerialField^ pQryTransferSerial)
	{
		CThostFtdcQryTransferSerialField native;
		MNConv<ThostFtdcQryTransferSerialField^, CThostFtdcQryTransferSerialField>::M2N(pQryTransferSerial, &native);
		return m_pApi->ReqQryTransferSerial(&native, CreateRequestID());
	}

	///请求查询转帐流水
	int CTPTraderAdapter::ReqQryTransferSerial()
	{
		ThostFtdcQryTransferSerialField^ pQryTransferSerial = gcnew ThostFtdcQryTransferSerialField();
		pQryTransferSerial->BrokerID = BrokerID;
		pQryTransferSerial->AccountID = InvestorID;
		CThostFtdcQryTransferSerialField native;
		MNConv<ThostFtdcQryTransferSerialField^, CThostFtdcQryTransferSerialField>::M2N(pQryTransferSerial, &native);
		return m_pApi->ReqQryTransferSerial(&native, CreateRequestID());
	}

	///请求查询银期签约关系
	int CTPTraderAdapter::ReqQryAccountregister(ThostFtdcQryAccountregisterField^ pQryAccountregister)
	{
		CThostFtdcQryAccountregisterField native;
		MNConv<ThostFtdcQryAccountregisterField^, CThostFtdcQryAccountregisterField>::M2N(pQryAccountregister, &native);
		return m_pApi->ReqQryAccountregister(&native, CreateRequestID());
	}

	///请求查询签约银行
	int CTPTraderAdapter::ReqQryContractBank(ThostFtdcQryContractBankField^ pQryContractBank)
	{
		CThostFtdcQryContractBankField native;
		MNConv<ThostFtdcQryContractBankField^, CThostFtdcQryContractBankField>::M2N(pQryContractBank, &native);
		return m_pApi->ReqQryContractBank(&native, CreateRequestID());
	}

	///请求查询签约银行
	int CTPTraderAdapter::ReqQryContractBank()
	{
		ThostFtdcQryContractBankField^ pQryContractBank = gcnew ThostFtdcQryContractBankField();
		pQryContractBank->BrokerID = BrokerID;
		CThostFtdcQryContractBankField native;
		MNConv<ThostFtdcQryContractBankField^, CThostFtdcQryContractBankField>::M2N(pQryContractBank, &native);
		return m_pApi->ReqQryContractBank(&native, CreateRequestID());
	}

	///请求查询预埋单
	int CTPTraderAdapter::ReqQryParkedOrder(ThostFtdcQryParkedOrderField^ pQryParkedOrder)
	{
		CThostFtdcQryParkedOrderField native;
		MNConv<ThostFtdcQryParkedOrderField^, CThostFtdcQryParkedOrderField>::M2N(pQryParkedOrder, &native);
		return m_pApi->ReqQryParkedOrder(&native, CreateRequestID());
	}

	///请求查询预埋单
	int CTPTraderAdapter::ReqQryParkedOrder()
	{
		ThostFtdcQryParkedOrderField^ pQryParkedOrder = gcnew ThostFtdcQryParkedOrderField();
		pQryParkedOrder->BrokerID = BrokerID;
		pQryParkedOrder->InvestorID = InvestorID;
		pQryParkedOrder->ExchangeID = "";
		pQryParkedOrder->InstrumentID = "";
		CThostFtdcQryParkedOrderField native;
		MNConv<ThostFtdcQryParkedOrderField^, CThostFtdcQryParkedOrderField>::M2N(pQryParkedOrder, &native);
		return m_pApi->ReqQryParkedOrder(&native, CreateRequestID());
	}

	///请求查询预埋撤单
	int CTPTraderAdapter::ReqQryParkedOrderAction()
	{
		ThostFtdcQryParkedOrderActionField^ pQryParkedOrderAction = gcnew ThostFtdcQryParkedOrderActionField();
		pQryParkedOrderAction->BrokerID = BrokerID;
		pQryParkedOrderAction->InvestorID = InvestorID;
		CThostFtdcQryParkedOrderActionField native;
		MNConv<ThostFtdcQryParkedOrderActionField^, CThostFtdcQryParkedOrderActionField>::M2N(pQryParkedOrderAction, &native);
		return m_pApi->ReqQryParkedOrderAction(&native, CreateRequestID());
	}

	///请求查询预埋撤单
	int CTPTraderAdapter::ReqQryParkedOrderAction(ThostFtdcQryParkedOrderActionField^ pQryParkedOrderAction)
	{
		CThostFtdcQryParkedOrderActionField native;
		MNConv<ThostFtdcQryParkedOrderActionField^, CThostFtdcQryParkedOrderActionField>::M2N(pQryParkedOrderAction, &native);
		return m_pApi->ReqQryParkedOrderAction(&native, CreateRequestID());
	}

	///请求查询交易通知
	int CTPTraderAdapter::ReqQryTradingNotice(ThostFtdcQryTradingNoticeField^ pQryTradingNotice)
	{
		CThostFtdcQryTradingNoticeField native;
		MNConv<ThostFtdcQryTradingNoticeField^, CThostFtdcQryTradingNoticeField>::M2N(pQryTradingNotice, &native);
		return m_pApi->ReqQryTradingNotice(&native, CreateRequestID());
	}

	///请求查询交易通知
	int CTPTraderAdapter::ReqQryTradingNotice()
	{
		ThostFtdcQryTradingNoticeField^ pQryTradingNotice = gcnew ThostFtdcQryTradingNoticeField();
		pQryTradingNotice->BrokerID = BrokerID;
		pQryTradingNotice->InvestorID = InvestorID;
		CThostFtdcQryTradingNoticeField native;
		MNConv<ThostFtdcQryTradingNoticeField^, CThostFtdcQryTradingNoticeField>::M2N(pQryTradingNotice, &native);
		return m_pApi->ReqQryTradingNotice(&native, CreateRequestID());
	}

	///请求查询经纪公司交易参数
	int CTPTraderAdapter::ReqQryBrokerTradingParams(ThostFtdcQryBrokerTradingParamsField^ pQryBrokerTradingParams)
	{
		CThostFtdcQryBrokerTradingParamsField native;
		MNConv<ThostFtdcQryBrokerTradingParamsField^, CThostFtdcQryBrokerTradingParamsField>::M2N(pQryBrokerTradingParams, &native);
		return m_pApi->ReqQryBrokerTradingParams(&native, CreateRequestID());
	}

	///请求查询经纪公司交易参数
	int CTPTraderAdapter::ReqQryBrokerTradingParams()
	{
		ThostFtdcQryBrokerTradingParamsField^ pQryBrokerTradingParams = gcnew ThostFtdcQryBrokerTradingParamsField();
		pQryBrokerTradingParams->BrokerID = BrokerID;
		pQryBrokerTradingParams->InvestorID = InvestorID;
		CThostFtdcQryBrokerTradingParamsField native;
		MNConv<ThostFtdcQryBrokerTradingParamsField^, CThostFtdcQryBrokerTradingParamsField>::M2N(pQryBrokerTradingParams, &native);
		return m_pApi->ReqQryBrokerTradingParams(&native, CreateRequestID());
	}

	///请求查询经纪公司交易算法
	int CTPTraderAdapter::ReqQryBrokerTradingAlgos(ThostFtdcQryBrokerTradingAlgosField^ pQryBrokerTradingAlgos)
	{
		CThostFtdcQryBrokerTradingAlgosField native;
		MNConv<ThostFtdcQryBrokerTradingAlgosField^, CThostFtdcQryBrokerTradingAlgosField>::M2N(pQryBrokerTradingAlgos, &native);
		return m_pApi->ReqQryBrokerTradingAlgos(&native, CreateRequestID());
	}
	///期货发起银行资金转期货请求
	int CTPTraderAdapter::ReqFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer)
	{
		CThostFtdcReqTransferField native;
		MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::M2N(pReqTransfer, &native);
		return m_pApi->ReqFromBankToFutureByFuture(&native, CreateRequestID());
	}
	///期货发起期货资金转银行请求
	int CTPTraderAdapter::ReqFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer)
	{
		CThostFtdcReqTransferField native;
		MNConv<ThostFtdcReqTransferField^, CThostFtdcReqTransferField>::M2N(pReqTransfer, &native);
		return m_pApi->ReqFromFutureToBankByFuture(&native, CreateRequestID());
	}
	///期货发起查询银行余额请求
	int CTPTraderAdapter::ReqQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount)
	{
		CThostFtdcReqQueryAccountField native;
		MNConv<ThostFtdcReqQueryAccountField^, CThostFtdcReqQueryAccountField>::M2N(pReqQueryAccount, &native);
		return m_pApi->ReqQueryBankAccountMoneyByFuture(&native, CreateRequestID());
	}
} 