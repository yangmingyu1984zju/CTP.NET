#pragma once
#include "Struct.h"
#include "Util.h"

using namespace System;

namespace CTP
{
	public interface class ICTPTrader 
	{
	public:
		/*
		/// <summary>
		/// 连接并登录到交易前置机
		/// <param name="frontAddress">前置机地址</param>
		/// <param name="userID">用户名</param>
		/// <param name="password">密码</param>
		/// <param name="brokerID">经纪商代码</param>
		/// <param name="restart">true: 从当天的第一条记录开始接收数据流 false: 接收本次登入以后的数据流</param>
		/// </summary>
		void Connect(String^ frontAddress, String^ userID, String^ password, String^ brokerID,  bool restart);
		*/
		/// <summary>
		///删除接口对象本身
		///@remark 不再使用本接口对象时,调用该函数删除接口对象
		/// </summary>
		void Release();

		/// <summary>
		///初始化
		///@remark 初始化运行环境,只有调用后,接口才开始工作
		/// </summary>
		void Init();

		/// <summary>
		///等待接口线程结束运行
		///@return 线程退出代码
		/// </summary>
		int Join();

		/// <summary>
		///获取当前交易日
		///@remark 只有登录成功后,才能得到正确的交易日
		/// </summary>
		/// <returns>获取到的交易日</returns>
		String^ GetTradingDay();

		/// <summary>
		///注册前置机网络地址
		///@param pszFrontAddress：前置机网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
		/// </summary>
		void RegisterFront(String^ pszFrontAddress);

		/// <summary>
		///注册名字服务器网络地址
		///@param pszNsAddress：名字服务器网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
		///@remark RegisterNameServer优先于RegisterFront
		/// </summary>
		void RegisterNameServer(String^ pszNsAddress);

		///注册回调接口
		///@param pSpi 派生自回调接口类的实例
		/// void RegisterSpi(ThostFtdcTraderSpi^ pSpi);

		/// <summary>
		///订阅私有流。
		///@param nResumeType 私有流重传方式  
		///        THOST_TERT_RESTART:从本交易日开始重传
		///        THOST_TERT_RESUME:从上次收到的续传
		///        THOST_TERT_QUICK:只传送登录后私有流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
		/// </summary>
		void SubscribePrivateTopic(EnumTeResumeType nResumeType);

		/// <summary>
		///订阅公共流。
		///@param nResumeType 公共流重传方式  
		///        THOST_TERT_RESTART:从本交易日开始重传
		///        THOST_TERT_RESUME:从上次收到的续传
		///        THOST_TERT_QUICK:只传送登录后公共流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
		/// </summary>
		void SubscribePublicTopic(EnumTeResumeType nResumeType);

		/// <summary>
		///客户端认证请求
		/// </summary>
		int ReqAuthenticate(ThostFtdcReqAuthenticateField^ pReqAuthenticateField);

		/// <summary>
		///用户登录请求
		/// </summary>
		int ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField);

		/// <summary>
		///登出请求
		/// </summary>
		int ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout);

		/// <summary>
		///用户口令更新请求
		/// </summary>
		int ReqUserPasswordUpdate(ThostFtdcUserPasswordUpdateField^ pUserPasswordUpdate);

		/// <summary>
		///资金账户口令更新请求
		/// </summary>
		int ReqTradingAccountPasswordUpdate(ThostFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate);

		/// <summary>
		/// 更新口令请求
		/// <param name="oldPassword">旧密码</param>
		/// <param name="newPassword">新密码</param>
		/// <param name="accountAmountPassword">true:更新资金帐户密码 false:更新用户密码</param>
		/// </summary>
		int ReqUpdatePassword(String^ oldPassword, String^ newPassword, bool accountAmountPassword);

		/// <summary>
		///报单录入请求
		/// </summary>
		int ReqOrderInsert(ThostFtdcInputOrderField^ pInputOrder);

		/// <summary>
		///预埋单录入请求
		/// </summary>
		int ReqParkedOrderInsert(ThostFtdcParkedOrderField^ pParkedOrder);

		/// <summary>
		///预埋撤单录入请求
		/// </summary>
		int ReqParkedOrderAction(ThostFtdcParkedOrderActionField^ pParkedOrderAction);

		/// <summary>
		///报单操作请求
		/// </summary>
		int ReqOrderAction(ThostFtdcInputOrderActionField^ pInputOrderAction);

		/// <summary>
		///查询最大报单数量请求
		/// </summary>
		int ReqQueryMaxOrderVolume(ThostFtdcQueryMaxOrderVolumeField^ pQueryMaxOrderVolume);

		/// <summary>
		///投资者结算结果确认
		/// </summary>
		int ReqSettlementInfoConfirm(ThostFtdcSettlementInfoConfirmField^ pSettlementInfoConfirm);

		/// <summary>
		///投资者结算结果确认
		/// </summary>
		int ReqSettlementInfoConfirm();

		/// <summary>
		///请求删除预埋单
		/// </summary>
		int ReqRemoveParkedOrder(ThostFtdcRemoveParkedOrderField^ pRemoveParkedOrder);

		/// <summary>
		///请求删除预埋撤单
		/// </summary>
		int ReqRemoveParkedOrderAction(ThostFtdcRemoveParkedOrderActionField^ pRemoveParkedOrderAction);

		/// <summary>
		///请求查询报单
		/// </summary>
		int ReqQryOrder(ThostFtdcQryOrderField^ pQryOrder);

		/// <summary>
		///请求查询报单
		/// </summary>
		int ReqQryOrder();

		/// <summary>
		///请求查询成交
		/// </summary>
		int ReqQryTrade(ThostFtdcQryTradeField^ pQryTrade);

		/// <summary>
		///请求查询成交
		/// </summary>
		int ReqQryTrade();

		/// <summary>
		/// 根据合约代码查询成交情况
		/// </summary>
		int ReqQryTrade(String^ instrumentID);

		/// <summary>
		///请求查询投资者持仓
		/// </summary>
		int ReqQryInvestorPosition(ThostFtdcQryInvestorPositionField^ pQryInvestorPosition);

		/// <summary>
		///请求查询投资者持仓
		/// </summary>
		int ReqQryInvestorPosition();

		/// <summary>
		///请求查询资金账户
		/// </summary>
		int ReqQryTradingAccount(ThostFtdcQryTradingAccountField^ pQryTradingAccount);

		/// <summary>
		///请求查询资金账户
		/// </summary>
		int ReqQryTradingAccount();

		/// <summary>
		///请求查询投资者
		/// </summary>
		int ReqQryInvestor(ThostFtdcQryInvestorField^ pQryInvestor);

		/// <summary>
		///请求查询投资者
		/// </summary>
		int ReqQryInvestor();

		/// <summary>
		///请求查询交易编码
		/// </summary>
		int ReqQryTradingCode(ThostFtdcQryTradingCodeField^ pQryTradingCode);

		/// <summary>
		///请求查询交易编码
		/// </summary>
		int ReqQryTradingCode();

		/// <summary>
		///请求查询合约保证金率
		/// </summary>
		int ReqQryInstrumentMarginRate(ThostFtdcQryInstrumentMarginRateField^ pQryInstrumentMarginRate);

		/// <summary>
		///请求根据合约代码查询合约保证金率
		/// </summary>
		int ReqQryInstrumentMarginRate(String^ instrumentID);

		/// <summary>
		///请求查询合约手续费率
		/// </summary>
		int ReqQryInstrumentCommissionRate(ThostFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate);

		/// <summary>
		/// 请求查询合约手续费率
		/// </summary>
		int ReqQryInstrumentCommissionRate(String^ instrumentID);

		/// <summary>
		///请求查询交易所
		/// </summary>
		int ReqQryExchange(ThostFtdcQryExchangeField^ pQryExchange);

		/// <summary>
		///请求查询交易所
		/// </summary>
		int ReqQryExchange(String^ exchangeID);

		/// <summary>
		///请求查询合约
		/// </summary>
		int ReqQryInstrument(ThostFtdcQryInstrumentField^ pQryInstrument);

		/// <summary>
		///请求查询合约
		/// </summary>
		int ReqQryInstrument(String^ exchangeID, String^ instrumentID);

		/// <summary>
		/// 请求查询指定市场合约
		/// </summary>
		int ReqQryInstrument(String^ ID, bool isExchangeID);

		/// <summary>
		/// 请求查询所有合约
		/// </summary>
		int ReqQryInstrument();

		/// <summary>
		///请求查询行情
		/// </summary>
		int ReqQryDepthMarketData(ThostFtdcQryDepthMarketDataField^ pQryDepthMarketData);

		/// <summary>
		///请求查询行情
		/// </summary>
		int ReqQryDepthMarketData(String^ instrumentID);

		/// <summary>
		///请求查询投资者结算结果
		/// </summary>
		int ReqQrySettlementInfo(ThostFtdcQrySettlementInfoField^ pQrySettlementInfo);

		/// <summary>
		///请求查询投资者结算结果
		/// </summary>
		int ReqQrySettlementInfo();

		/// <summary>
		///请求查询转帐银行
		/// </summary>
		int ReqQryTransferBank(ThostFtdcQryTransferBankField^ pQryTransferBank);

		/// <summary>
		///请求查询投资者持仓明细
		/// </summary>
		int ReqQryInvestorPositionDetail(ThostFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail);

		/// <summary>
		///请求查询投资者持仓明细
		/// </summary>
		int ReqQryInvestorPositionDetail();

		/// <summary>
		/// 请求按合约代码查询投资者持仓明细
		/// </summary>
		int ReqQryInvestorPositionDetail(String^ instrumentID);

		/// <summary>
		///请求查询客户通知
		/// </summary>
		int ReqQryNotice(ThostFtdcQryNoticeField^ pQryNotice);

		/// <summary>
		///请求查询客户通知
		/// </summary>
		int ReqQryNotice();

		/// <summary>
		///请求查询结算信息确认
		/// </summary>
		int ReqQrySettlementInfoConfirm(ThostFtdcQrySettlementInfoConfirmField^ pQrySettlementInfoConfirm);

		/// <summary>
		///请求查询结算信息确认
		/// </summary>
		int ReqQrySettlementInfoConfirm();

		/// <summary>
		///请求查询投资者组合持仓明细
		/// </summary>
		int ReqQryInvestorPositionCombineDetail(ThostFtdcQryInvestorPositionCombineDetailField^ pQryInvestorPositionCombineDetail);

		/// <summary>
		///请求查询投资者组合持仓明细
		/// </summary>
		int ReqQryInvestorPositionCombineDetail();

		/// <summary>
		///请求查询保证金监管系统经纪公司资金账户密钥
		/// </summary>
		int ReqQryCFMMCTradingAccountKey(ThostFtdcQryCFMMCTradingAccountKeyField^ pQryCFMMCTradingAccountKey);

		/// <summary>
		///请求查询保证金监管系统经纪公司资金账户密钥
		/// </summary>
		int ReqQryCFMMCTradingAccountKey();

		/// <summary>
		///请求查询仓单折抵信息
		/// </summary>
		int ReqQryEWarrantOffset(ThostFtdcQryEWarrantOffsetField^ pQryEWarrantOffset);

		/// <summary>
		///请求查询转帐流水
		/// </summary>
		int ReqQryTransferSerial(ThostFtdcQryTransferSerialField^ pQryTransferSerial);

		/// <summary>
		///请求查询转帐流水
		/// </summary>
		int ReqQryTransferSerial();

		/// <summary>
		///请求查询银期签约关系
		/// </summary>
		int ReqQryAccountregister(ThostFtdcQryAccountregisterField^ pQryAccountregister);

		/// <summary>
		///请求查询签约银行
		/// </summary>
		int ReqQryContractBank(ThostFtdcQryContractBankField^ pQryContractBank);

		/// <summary>
		///请求查询签约银行
		/// </summary>
		int ReqQryContractBank();

		/// <summary>
		///请求查询预埋单
		/// </summary>
		int ReqQryParkedOrder(ThostFtdcQryParkedOrderField^ pQryParkedOrder);

		/// <summary>
		///请求查询预埋单
		/// </summary>
		int ReqQryParkedOrder();

		/// <summary>
		///请求查询预埋撤单
		/// </summary>
		int ReqQryParkedOrderAction(ThostFtdcQryParkedOrderActionField^ pQryParkedOrderAction);

		/// <summary>
		///请求查询预埋撤单
		/// </summary>
		int ReqQryParkedOrderAction();

		/// <summary>
		///请求查询交易通知
		/// </summary>
		int ReqQryTradingNotice(ThostFtdcQryTradingNoticeField^ pQryTradingNotice);

		/// <summary>
		///请求查询交易通知
		/// </summary>
		int ReqQryTradingNotice();

		/// <summary>
		///请求查询经纪公司交易参数
		/// </summary>
		int ReqQryBrokerTradingParams(ThostFtdcQryBrokerTradingParamsField^ pQryBrokerTradingParams);

		/// <summary>
		///请求查询经纪公司交易参数
		/// </summary>
		int ReqQryBrokerTradingParams();

		/// <summary>
		///请求查询经纪公司交易算法
		/// </summary>
		int ReqQryBrokerTradingAlgos(ThostFtdcQryBrokerTradingAlgosField^ pQryBrokerTradingAlgos);

		/// <summary>
		///期货发起银行资金转期货请求
		/// </summary>
		int ReqFromBankToFutureByFuture(ThostFtdcReqTransferField^ pReqTransfer);

		/// <summary>
		///期货发起期货资金转银行请求
		/// </summary>
		int ReqFromFutureToBankByFuture(ThostFtdcReqTransferField^ pReqTransfer);

		/// <summary>
		///期货发起查询银行余额请求
		/// </summary>
		int ReqQueryBankAccountMoneyByFuture(ThostFtdcReqQueryAccountField^ pReqQueryAccount);

		event FrontConnected^ OnFrontConnected;

		event FrontDisconnected^ OnFrontDisconnected;

		event HeartBeatWarning^ OnHeartBeatWarning;

		event RspUserLogin^ OnRspUserLogin;

		event RspUserLogout^ OnRspUserLogout;

		event RspAuthenticate^ OnRspAuthenticate;

		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate;

		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate;

		event RspOrderInsert^ OnRspOrderInsert;

		event RspParkedOrderAction^ OnRspParkedOrderAction;

		event RspParkedOrderInsert^ OnRspParkedOrderInsert;

		event RspQueryMaxOrderVolume^ OnRspQueryMaxOrderVolume;

		event RspSettlementInfoConfirm^ OnRspSettlementInfoConfirm;

		event RspRemoveParkedOrder^ OnRspRemoveParkedOrder;

		event RspRemoveParkedOrderAction^ OnRspRemoveParkedOrderAction;

		event RspQryOrder^ OnRspQryOrder;

		event RspQryTrade^ OnRspQryTrade;

		event RspQryInvestorPosition^ OnRspQryInvestorPosition;

		event RspOrderAction^ OnRspOrderAction;

		event RspQryTradingAccount^ OnRspQryTradingAccount;

		event RspQryInvestor^ OnRspQryInvestor;

		event RspQryTradingCode^ OnRspQryTradingCode;

		event RspQryInstrumentMarginRate^ OnRspQryInstrumentMarginRate;

		event RspQryInstrumentCommissionRate^ OnRspQryInstrumentCommissionRate;

		event RspQryExchange^ OnRspQryExchange;

		event RspQryInstrument^ OnRspQryInstrument;

		event RspQryDepthMarketData^ OnRspQryDepthMarketData;

		event RspQrySettlementInfo^ OnRspQrySettlementInfo;

		event RspQryTransferBank^ OnRspQryTransferBank;

		event RspQryInvestorPositionDetail^ OnRspQryInvestorPositionDetail;

		event RspQryNotice^ OnRspQryNotice;

		event RspQrySettlementInfoConfirm^ OnRspQrySettlementInfoConfirm;

		event RspQryInvestorPositionCombineDetail^ OnRspQryInvestorPositionCombineDetail;

		event RspQryCFMMCTradingAccountKey^ OnRspQryCFMMCTradingAccountKey;

		event RspQryEWarrantOffset^ OnRspQryEWarrantOffset;

		event RspQryTransferSerial^ OnRspQryTransferSerial;

		event RspQryAccountregister^ OnRspQryAccountregister;

		event RspError^ OnRspError;

		event RtnOrder^ OnRtnOrder;

		event RtnTrade^ OnRtnTrade;

		event ErrRtnOrderInsert^ OnErrRtnOrderInsert;

		event ErrRtnOrderAction^ OnErrRtnOrderAction;

		event RtnInstrumentStatus^ OnRtnInstrumentStatus;

		event RtnTradingNotice^ OnRtnTradingNotice;

		event RtnErrorConditionalOrder^ OnRtnErrorConditionalOrder;

		event RspQryContractBank^ OnRspQryContractBank;

		event RspQryParkedOrder^ OnRspQryParkedOrder;

		event RspQryParkedOrderAction^ OnRspQryParkedOrderAction;

		event RspQryTradingNotice^ OnRspQryTradingNotice;

		event RspQryBrokerTradingParams^ OnRspQryBrokerTradingParams;

		event RspQryBrokerTradingAlgos^ OnRspQryBrokerTradingAlgos;

		event RtnFromBankToFutureByBank^ OnRtnFromBankToFutureByBank;

		event RtnFromFutureToBankByBank^ OnRtnFromFutureToBankByBank;

		event RtnRepealFromBankToFutureByBank^ OnRtnRepealFromBankToFutureByBank;

		event RtnRepealFromFutureToBankByBank^ OnRtnRepealFromFutureToBankByBank;

		event RtnFromBankToFutureByFuture^ OnRtnFromBankToFutureByFuture;

		event RtnFromFutureToBankByFuture^ OnRtnFromFutureToBankByFuture;

		event RtnRepealFromBankToFutureByFutureManual^ OnRtnRepealFromBankToFutureByFutureManual;

		event RtnRepealFromFutureToBankByFutureManual^ OnRtnRepealFromFutureToBankByFutureManual;

		event RtnQueryBankBalanceByFuture^ OnRtnQueryBankBalanceByFuture;

		event ErrRtnBankToFutureByFuture^ OnErrRtnBankToFutureByFuture;

		event ErrRtnFutureToBankByFuture^ OnErrRtnFutureToBankByFuture;

		event ErrRtnRepealBankToFutureByFutureManual^ OnErrRtnRepealBankToFutureByFutureManual;

		event ErrRtnRepealFutureToBankByFutureManual^ OnErrRtnRepealFutureToBankByFutureManual;

		event ErrRtnQueryBankBalanceByFuture^ OnErrRtnQueryBankBalanceByFuture;

		event RtnRepealFromBankToFutureByFuture^ OnRtnRepealFromBankToFutureByFuture;

		event RtnRepealFromFutureToBankByFuture^ OnRtnRepealFromFutureToBankByFuture;

		event RspFromBankToFutureByFuture^ OnRspFromBankToFutureByFuture;

		event RspFromFutureToBankByFuture^ OnRspFromFutureToBankByFuture;

		event RspQueryBankAccountMoneyByFuture^ OnRspQueryBankAccountMoneyByFuture;

		event RtnOpenAccountByBank^ OnRtnOpenAccountByBank;

		event RtnCancelAccountByBank^ OnRtnCancelAccountByBank;

		event RtnChangeAccountByBank^ OnRtnChangeAccountByBank;

	};
}