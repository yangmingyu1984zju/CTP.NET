#include "pch.h"
#include "MdSpi.h"
#include "CTPMDAdapter.h"
#include <memory.h>
using namespace System::Threading;

namespace CTP
{
	int CTPMDAdapter::CreateRequestID()
	{
		return Interlocked::Increment(requestID);
	}

	void CTPMDAdapter::InitializeEnvironment()
	{
		requestID = 0;
	}

	CTPMDAdapter::CTPMDAdapter(void)
	{
		InitializeEnvironment();

		m_pApi = CThostFtdcMdApi::CreateFtdcMdApi();
		m_pSpi = new CMdSpi(this);
		m_pApi->RegisterSpi(m_pSpi);
	}

	CTPMDAdapter::CTPMDAdapter(String^ pszFlowPath, bool bIsUsingUdp)
	{
		InitializeEnvironment();
		CAutoStrPtr asp(pszFlowPath);
		m_pApi = CThostFtdcMdApi::CreateFtdcMdApi(asp.m_pChar, bIsUsingUdp);
		m_pSpi = new CMdSpi(this);
		m_pApi->RegisterSpi(m_pSpi);
	}

	CTPMDAdapter::~CTPMDAdapter(void)
	{
		delete m_pSpi;
		m_pSpi = nullptr;
	}

	void CTPMDAdapter::Release(void)
	{
		if(m_pApi)
		{
			m_pApi = nullptr;
		}
	}

	void CTPMDAdapter::Connect(String^ frontAddress, String^ userID, String^ password, String^ broker)
	{
		RegisterFront(frontAddress);
		Init();
	}

	void CTPMDAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}

	void CTPMDAdapter::RegisterNameServer(String^  pszNsAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszNsAddress);
		m_pApi->RegisterNameServer(asp.m_pChar);
	}

	void CTPMDAdapter::Init(void)
	{
		m_pApi->Init();
	}

	void CTPMDAdapter::Join(void)
	{
		m_pApi->Join();
	}

	String^ CTPMDAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}

	int CTPMDAdapter::ReqUserLogin(ThostFtdcReqUserLoginField^ pReqUserLoginField)
	{
		investorId = pReqUserLoginField->UserID;
		brokerId = pReqUserLoginField->BrokerID;
		CThostFtdcReqUserLoginField native;
		MNConv<ThostFtdcReqUserLoginField^, CThostFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
		return m_pApi->ReqUserLogin(&native, CreateRequestID());
	}

	int CTPMDAdapter::ReqUserLogout(ThostFtdcUserLogoutField^ pUserLogout)
	{
		CThostFtdcUserLogoutField native;
		MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::M2N(pUserLogout, &native);
		return m_pApi->ReqUserLogout(&native, CreateRequestID());
	}

	int CTPMDAdapter::ReqUserLogout()
	{
		if (m_pApi) 
		{
			ThostFtdcUserLogoutField^ pUserLogout = gcnew ThostFtdcUserLogoutField();
			pUserLogout->BrokerID = brokerId;
			pUserLogout->UserID = investorId;
			CThostFtdcUserLogoutField native;
			MNConv<ThostFtdcUserLogoutField^, CThostFtdcUserLogoutField>::M2N(pUserLogout, &native);
			return m_pApi->ReqUserLogout(&native, CreateRequestID());
		}
		return -1;
	}

	int CTPMDAdapter::SubscribeMarketData(array<String^>^ ppInstrumentID)
	{
		int result = 0;
		try
		{
			if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
				return -1;

			int count = ppInstrumentID->Length;
			char** pp = new char*[count];
			CAutoStrPtr** asp = new CAutoStrPtr*[count];
			for(int i=0; i<count; i++)
			{
				CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
				asp[i] = ptr;
				pp[i] = ptr->m_pChar;
			}

			// 释放所有分配的字符串内存
			result = m_pApi->SubscribeMarketData(pp, count);
			for(int i=0; i<count; i++)
				delete asp[i];
			delete asp;
			delete pp;
		}
		catch(...)
		{
			result = 0xFFFF;
		}

		return result;
	}

	int CTPMDAdapter::UnSubscribeMarketData(array<String^>^ ppInstrumentID)
	{
		int result = 0;
		try
		{
			if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
				return -1;

			int count = ppInstrumentID->Length;
			char** pp = new char*[count];
			CAutoStrPtr** asp = new CAutoStrPtr*[count];
			for(int i=0; i<count; i++)
			{
				CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
				asp[i] = ptr;
				pp[i] = ptr->m_pChar;
			}

			result = m_pApi->UnSubscribeMarketData(pp, count);

			// 释放所分配的字符串内存
			for(int i=0; i<count; i++)
				delete asp[i];
			delete asp;
			delete pp;
		}
		catch(...)
		{
			result = 0xFFFF;
		}
		return result;
	}

	int CTPMDAdapter::SubscribeForQuoteRsp(array<String^>^ ppInstrumentID)
	{
		int result = 0;
		try
		{
			if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
				return -1;

			int count = ppInstrumentID->Length;
			char** pp = new char*[count];
			CAutoStrPtr** asp = new CAutoStrPtr*[count];
			for(int i=0; i<count; i++)
			{
				CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
				asp[i] = ptr;
				pp[i] = ptr->m_pChar;
			}

			// 释放所有分配的字符串内存
			result = m_pApi->SubscribeForQuoteRsp(pp, count);
			for(int i=0; i<count; i++)
				delete asp[i];
			delete asp;
			delete pp;
		}
		catch(...)
		{
			result = 0xFFFF;
		}

		return result;
	}

	int CTPMDAdapter::UnSubscribeForQuoteRsp(array<String^>^ ppInstrumentID)
	{
		int result = 0;
		try
		{
			if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
				return -1;

			int count = ppInstrumentID->Length;
			char** pp = new char*[count];
			CAutoStrPtr** asp = new CAutoStrPtr*[count];
			for(int i=0; i<count; i++)
			{
				CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
				asp[i] = ptr;
				pp[i] = ptr->m_pChar;
			}

			result = m_pApi->UnSubscribeForQuoteRsp(pp, count);

			// 释放所分配的字符串内存
			for(int i=0; i<count; i++)
				delete asp[i];
			delete asp;
			delete pp;
		}
		catch(...)
		{
			result = 0xFFFF;
		}
		return result;
	}
}