#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CTP
{
	/// <summary>
	/// �������ӵ�
	/// </summary>
	[Serializable]
	public enum struct EnumBoolType : int
	{
		/// <summary>
		/// 
		/// </summary>
		No = 0,
		/// <summary>
		/// 
		/// </summary>
		Yes = 1
	};


	[Serializable]
	public enum struct EnumTeResumeType : Byte	//THOST_TE_RESUME_TYPE
	{
		THOST_TERT_RESTART = 0,
		THOST_TERT_RESUME,
		THOST_TERT_QUICK
	};

	/// <summary>
	/// TFtdcExchangePropertyType��һ����������������
	/// </summary>
	[Serializable]
	public enum struct EnumExchangePropertyType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ���ݳɽ����ɱ���
		/// </summary>
		GenOrderByTrade = (Byte)'1'
	};


	/// <summary>
	/// TFtdcIdCardTypeType��һ��֤����������
	/// </summary>
	[Serializable]
	public enum struct EnumIdCardTypeType : Byte
	{
		/// <summary>
		/// ��֯��������
		/// </summary>
		EID = (Byte)'0',

		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'1',

		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// ����֤
		/// </summary>
		PoliceIDCard = (Byte)'3',

		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'4',

		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'6',

		/// <summary>
		/// ̨��֤
		/// </summary>
		TaiwanCompatriotIDCard = (Byte)'7',

		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'8',

		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'9',

		///˰��ǼǺ�/������˰ID
		TaxNo = (Byte)'A',

		///�۰ľ��������ڵ�ͨ��֤
		HMMainlandTravelPermit = (Byte)'B',

		///̨�����������½ͨ��֤
		TwMainlandTravelPermit = (Byte)'C',

		///����
		DrivingLicense = (Byte)'D',

		///�����籣ID
		SocialID = (Byte)'F',

		///�������֤
		LocalID = (Byte)'G',

		///��ҵ�Ǽ�֤
		BusinessRegistration = (Byte)'H',

		///�۰������Ծ������֤
		HKMCIDCard = (Byte)'I',

		///���п������֤
		AccountsPermits = (Byte)'J',

		///��������þ���֤
		FrgPrmtRdCard = (Byte)'K',

		///�ʹܲ�Ʒ������
		CptMngPrdLetter = (Byte)'L',


		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x'
	};


	/// <summary>
	/// TFtdcInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// Ͷ������
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};


	/// <summary>
	/// TFtdcDepartmentRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumDepartmentRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��֯�ܹ�
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};


	/// <summary>
	/// TFtdcDataSyncStatusType��һ������ͬ��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumDataSyncStatusType : Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Asynchronous = (Byte)'1',

		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2',

		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBrokerDataSyncStatusType��һ�����͹�˾����ͬ��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumBrokerDataSyncStatusType : Byte
	{
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'1',

		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2'
	};


	/// <summary>
	/// TFtdcExchangeConnectStatusType��һ������������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumExchangeConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NoConnection = (Byte)'1',

		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'2',

		/// <summary>
		/// �Ѿ���ȡ��Ϣ
		/// </summary>
		GotInformation = (Byte)'9'
	};


	/// <summary>
	/// TFtdcTraderConnectStatusType��һ������������Ա����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumTraderConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NotConnected = (Byte)'1',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'2',

		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'3',

		/// <summary>
		/// ����˽����
		/// </summary>
		SubPrivateFlow = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFunctionCodeType��һ�����ܴ�������
	/// </summary>
	[Serializable]
	public enum struct EnumFunctionCodeType : Byte
	{
		/// <summary>
		/// �����첽��
		/// </summary>
		DataAsync = (Byte)'1',

		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'2',

		/// <summary>
		/// ��������û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'3',

		/// <summary>
		/// ������͹�˾����
		/// </summary>
		BrokerPasswordUpdate = (Byte)'4',

		/// <summary>
		/// ���Ͷ���߿���
		/// </summary>
		InvestorPasswordUpdate = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'6',

		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'7',

		/// <summary>
		/// ͬ��ϵͳ����
		/// </summary>
		SyncSystemData = (Byte)'8',

		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'9',

		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData = (Byte)'A',

		/// <summary>
		/// ������ѯ
		/// </summary>
		SuperQuery = (Byte)'B',

		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderInsert = (Byte)'C',

		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderAction = (Byte)'D',

		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E',

		///ɾ��δ֪��
		DeleteOrder = (Byte)'F'
	};

	/// <summary>
	/// TFtdcBrokerFunctionCodeType��һ�����͹�˾���ܴ�������
	/// </summary>
	[Serializable]
	public enum struct EnumBrokerFunctionCodeType : Byte
	{
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'1',

		/// <summary>
		/// ����û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'2',

		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'3',

		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData = (Byte)'4',

		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'5',

		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'6',

		/// <summary>
		/// ȫ����ѯ
		/// </summary>
		AllQuery = (Byte)'7',

		/// <summary>
		/// ϵͳ���ܣ�����/�ǳ�/�޸������
		/// </summary>
		log = (Byte)'a',

		/// <summary>
		/// ������ѯ����ѯ�������ݣ����Լ���������ȳ���
		/// </summary>
		BaseQry = (Byte)'b',

		/// <summary>
		/// ���ײ�ѯ�����ɽ���ί��
		/// </summary>
		TradeQry = (Byte)'c',

		/// <summary>
		/// ���׹��ܣ�����������
		/// </summary>
		Trade = (Byte)'d',

		/// <summary>
		/// ����ת��
		/// </summary>
		Virement = (Byte)'e',

		/// <summary>
		/// ���ռ��
		/// </summary>
		Risk = (Byte)'f',

		/// <summary>
		/// ��ѯ/������ѯ�Ự�����˵�
		/// </summary>
		Session = (Byte)'g',

		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNoticeCtl = (Byte)'h',

		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNotice = (Byte)'i',

		/// <summary>
		/// �쿴���͹�˾�ʽ�Ȩ��
		/// </summary>
		BrokerDeposit = (Byte)'j',

		/// <summary>
		/// �ʽ��ѯ
		/// </summary>
		QueryFund = (Byte)'k',

		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryOrder = (Byte)'l',

		/// <summary>
		/// �ɽ���ѯ
		/// </summary>
		QueryTrade = (Byte)'m',

		/// <summary>
		/// �ֲֲ�ѯ
		/// </summary>
		QueryPosition = (Byte)'n',

		/// <summary>
		/// �����ѯ
		/// </summary>
		QueryMarketData = (Byte)'o',

		/// <summary>
		/// �û��¼���ѯ
		/// </summary>
		QueryUserEvent = (Byte)'p',

		/// <summary>
		/// ����֪ͨ��ѯ
		/// </summary>
		QueryRiskNotify = (Byte)'q',

		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryFundChange = (Byte)'r',

		/// <summary>
		/// Ͷ������Ϣ��ѯ
		/// </summary>
		QueryInvestor = (Byte)'s',

		/// <summary>
		/// ���ױ����ѯ
		/// </summary>
		QueryTradingCode = (Byte)'t',

		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'u',

		/// <summary>
		/// ѹ������
		/// </summary>
		PressTest = (Byte)'v',

		/// <summary>
		/// Ȩ�淴��
		/// </summary>
		RemainCalc = (Byte)'w',

		/// <summary>
		/// ���ֱֲ�֤��ָ��
		/// </summary>
		NetPositionInd = (Byte)'x',

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		RiskPredict = (Byte)'y',

		/// <summary>
		/// ���ݵ���
		/// </summary>
		DataExport = (Byte)'z',

		/// <summary>
		/// ���ָ������
		/// </summary>
		RiskTargetSetup = (Byte)'A',

		/// <summary>
		/// ����Ԥ��
		/// </summary>
		MarketDataWarn = (Byte)'B',

		/// <summary>
		/// ҵ��֪ͨ��ѯ
		/// </summary>
		QryBizNotice = (Byte)'C',

		/// <summary>
		/// ҵ��֪ͨģ������
		/// </summary>
		CfgBizNotice = (Byte)'D',

		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E',

		/// <summary>
		/// ����ҵ��֪ͨ
		/// </summary>
		SendBizNotice = (Byte)'F',

		/// <summary>
		/// ���ռ����׼����
		/// </summary>
		CfgRiskLevelStd = (Byte)'G',

		/// <summary>
		/// �����ն�Ӧ������
		/// </summary>
		TbCommand = (Byte)'H',

		///ɾ��δ֪��
		DeleteOrder = (Byte)'J',

		///Ԥ�񱨵�����
		ParkedOrderInsert = (Byte)'K',

		///Ԥ�񱨵�����
		ParkedOrderAction = (Byte)'L',

		///�ʽ𲻹���������Ȩ
		ExecOrderNoCheck = (Byte)'M',

		///ָ��
		Designate = (Byte)'N',

		///֤ȯ����
		StockDisposal = (Byte)'O',

		///ϯλ�ʽ�Ԥ��
		BrokerDepositWarn = (Byte)'Q',

		///���Ҳ���Ԥ��
		CoverWarn = (Byte)'S',

		///��Ȩ����
		PreExecOrder = (Byte)'T',

		///��Ȩ���շ���
		ExecOrderRisk = (Byte)'P',

		///�ֲ��޶�Ԥ��
		PosiLimitWarn = (Byte)'U',

		///�ֲ��޶��ѯ
		QryPosiLimit = (Byte)'V',

		///����ǩ��ǩ��
		FBSign = (Byte)'W',

		///����ǩԼ��Լ
		FBAccount = (Byte)'X'
	};


	/// <summary>
	/// TFtdcOrderActionStatusType��һ����������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumOrderActionStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		Submitted = (Byte)'a',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'b',

		/// <summary>
		/// �Ѿ����ܾ�
		/// </summary>
		Rejected = (Byte)'c'
	};


	/// <summary>
	/// TFtdcOrderStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumOrderStatusType : Byte
	{
		/// <summary>
		/// ȫ���ɽ�
		/// </summary>
		AllTraded = (Byte)'0',

		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedQueueing = (Byte)'1',

		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedNotQueueing = (Byte)'2',

		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeQueueing = (Byte)'3',

		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeNotQueueing = (Byte)'4',

		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'5',

		/// <summary>
		/// δ֪
		/// </summary>
		Unknown = (Byte)'a',

		/// <summary>
		/// ��δ����
		/// </summary>
		NotTouched = (Byte)'b',

		/// <summary>
		/// �Ѵ���
		/// </summary>
		Touched = (Byte)'c'
	};


	/// <summary>
	/// TFtdcOrderSubmitStatusType��һ�������ύ״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumOrderSubmitStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		InsertSubmitted = (Byte)'0',

		/// <summary>
		/// �����Ѿ��ύ
		/// </summary>
		CancelSubmitted = (Byte)'1',

		/// <summary>
		/// �޸��Ѿ��ύ
		/// </summary>
		ModifySubmitted = (Byte)'2',

		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'3',

		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		InsertRejected = (Byte)'4',

		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		CancelRejected = (Byte)'5',

		/// <summary>
		/// �ĵ��Ѿ����ܾ�
		/// </summary>
		ModifyRejected = (Byte)'6'
	};


	/// <summary>
	/// TFtdcPositionDateType��һ���ֲ���������
	/// </summary>
	[Serializable]
	public enum struct EnumPositionDateType : Byte
	{
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		Today = (Byte)'1',

		/// <summary>
		/// ��ʷ�ֲ�
		/// </summary>
		History = (Byte)'2'
	};


	/// <summary>
	/// TFtdcPositionDateTypeType��һ���ֲ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumPositionDateTypeType : Byte
	{
		/// <summary>
		/// ʹ����ʷ�ֲ�
		/// </summary>
		UseHistory = (Byte)'1',

		/// <summary>
		/// ��ʹ����ʷ�ֲ�
		/// </summary>
		NoUseHistory = (Byte)'2'
	};


	/// <summary>
	/// TFtdcTradingRoleType��һ�����׽�ɫ����
	/// </summary>
	[Serializable]
	public enum struct EnumTradingRoleType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'1',

		/// <summary>
		/// ��Ӫ
		/// </summary>
		Host = (Byte)'2',

		/// <summary>
		/// ������
		/// </summary>
		Maker = (Byte)'3'
	};


	/// <summary>
	/// TFtdcProductClassType��һ����Ʒ��������
	/// </summary>
	[Serializable]
	public enum struct EnumProductClassType : Byte
	{
		/// <summary>
		/// �ڻ�
		/// </summary>
		Futures = (Byte)'1',

		/// <summary>
		/// ��Ȩ
		/// </summary>
		Options = (Byte)'2',

		/// <summary>
		/// ���
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Spot = (Byte)'4',

		/// <summary>
		/// ��ת��
		/// </summary>
		EFP = (Byte)'5',

		///�ֻ���Ȩ
		SpotOption = (Byte)'6'
	};

	/// <summary>
	/// TFtdcInstLifePhaseType��һ����Լ��������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumInstLifePhaseType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotStart = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Started = (Byte)'1',

		/// <summary>
		/// ͣ��
		/// </summary>
		Pause = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Expired = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDirectionType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Buy = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Sell = (Byte)'1'
	};

	/// <summary>
	/// TFtdcPositionTypeType��һ���ֲ���������
	/// </summary>
	[Serializable]
	public enum struct EnumPositionTypeType : Byte
	{
		/// <summary>
		/// ���ֲ�
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// �ۺϳֲ�
		/// </summary>
		Gross = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPosiDirectionType��һ���ֲֶ�շ�������
	/// </summary>
	[Serializable]
	public enum struct EnumPosiDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Net = (Byte)'1',

		/// <summary>
		/// ��ͷ
		/// </summary>
		Long = (Byte)'2',

		/// <summary>
		/// ��ͷ
		/// </summary>
		Short = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSysSettlementStatusType��һ��ϵͳ����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSysSettlementStatusType : Byte
	{
		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Operating = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'4',

		/// <summary>
		/// �������
		/// </summary>
		SettlementFinished = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRatioAttrType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumRatioAttrType : Byte
	{
		/// <summary>
		/// ���׷���
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// �������
		/// </summary>
		Settlement = (Byte)'1'
	};

	/// <summary>
	/// TFtdcHedgeFlagType��һ��Ͷ���ױ���־����
	/// </summary>
	[Serializable]
	public enum struct EnumHedgeFlagType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3',

		///������
		MarketMaker = (Byte)'5'
	};

	/// <summary>
	///TFtdcBillHedgeFlagType��һ��Ͷ���ױ���־����
	/// </summary>
	[Serializable]
	public enum struct EnumBillHedgeFlagType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcClientIDTypeType��һ�����ױ�����������
	/// </summary>
	[Serializable]
	public enum struct EnumClientIDTypeType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3',

		///������
		MarketMaker = (Byte)'5'
	};


	/// <summary>
	/// TFtdcOrderPriceTypeType��һ�������۸���������
	/// </summary>
	[Serializable]
	public enum struct EnumOrderPriceTypeType : Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		AnyPrice = (Byte)'1',

		/// <summary>
		/// �޼�
		/// </summary>
		LimitPrice = (Byte)'2',

		/// <summary>
		/// ���ż�
		/// </summary>
		BestPrice = (Byte)'3',

		/// <summary>
		/// ���¼�
		/// </summary>
		LastPrice = (Byte)'4',

		/// <summary>
		/// ���¼۸����ϸ�1��ticks
		/// </summary>
		LastPricePlusOneTicks = (Byte)'5',

		/// <summary>
		/// ���¼۸����ϸ�2��ticks
		/// </summary>
		LastPricePlusTwoTicks = (Byte)'6',

		/// <summary>
		/// ���¼۸����ϸ�3��ticks
		/// </summary>
		LastPricePlusThreeTicks = (Byte)'7',

		/// <summary>
		/// ��һ��
		/// </summary>
		AskPrice1 = (Byte)'8',

		/// <summary>
		/// ��һ�۸����ϸ�1��ticks
		/// </summary>
		AskPrice1PlusOneTicks = (Byte)'9',

		/// <summary>
		/// ��һ�۸����ϸ�2��ticks
		/// </summary>
		AskPrice1PlusTwoTicks = (Byte)'A',

		/// <summary>
		/// ��һ�۸����ϸ�3��ticks
		/// </summary>
		AskPrice1PlusThreeTicks = (Byte)'B',

		/// <summary>
		/// ��һ��
		/// </summary>
		BidPrice1 = (Byte)'C',

		/// <summary>
		/// ��һ�۸����ϸ�1��ticks
		/// </summary>
		BidPrice1PlusOneTicks = (Byte)'D',

		/// <summary>
		/// ��һ�۸����ϸ�2��ticks
		/// </summary>
		BidPrice1PlusTwoTicks = (Byte)'E',

		/// <summary>
		/// ��һ�۸����ϸ�3��ticks
		/// </summary>
		BidPrice1PlusThreeTicks = (Byte)'F',

		/// <summary>
		/// �嵵��
		/// </summary>
		FiveLevelPrice = (Byte)'G',
	};


	/// <summary>
	/// TFtdcOffsetFlagType��һ����ƽ��־����
	/// </summary>
	[Serializable]
	public enum struct EnumOffsetFlagType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'0',

		/// <summary>
		/// ƽ��
		/// </summary>
		Close = (Byte)'1',

		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'2',

		/// <summary>
		/// ƽ��
		/// </summary>
		CloseToday = (Byte)'3',

		/// <summary>
		/// ƽ��
		/// </summary>
		CloseYesterday = (Byte)'4',

		/// <summary>
		/// ǿ��
		/// </summary>
		ForceOff = (Byte)'5',

		/// <summary>
		/// ����ǿƽ
		/// </summary>
		LocalForceClose = (Byte)'6'
	};


	/// <summary>
	/// TFtdcForceCloseReasonType��һ��ǿƽԭ������
	/// </summary>
	[Serializable]
	public enum struct EnumForceCloseReasonType : Byte
	{
		/// <summary>
		/// ��ǿƽ
		/// </summary>
		NotForceClose = (Byte)'0',

		/// <summary>
		/// �ʽ���
		/// </summary>
		LackDeposit = (Byte)'1',

		/// <summary>
		/// �ͻ�����
		/// </summary>
		ClientOverPositionLimit = (Byte)'2',

		/// <summary>
		/// ��Ա����
		/// </summary>
		MemberOverPositionLimit = (Byte)'3',

		/// <summary>
		/// �ֲַ�������
		/// </summary>
		NotMultiple = (Byte)'4',

		/// <summary>
		/// Υ��
		/// </summary>
		Violation = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'6',

		/// <summary>
		/// ��Ȼ���ٽ�����
		/// </summary>
		PersonDeliv = (Byte)'7'
	};


	/// <summary>
	/// TFtdcOrderTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumOrderTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ��������
		/// </summary>
		DeriveFromQuote = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		DeriveFromCombination = (Byte)'2',

		/// <summary>
		/// ��ϱ���
		/// </summary>
		Combination = (Byte)'3',

		/// <summary>
		/// ������
		/// </summary>
		ConditionalOrder = (Byte)'4',

		/// <summary>
		/// ������
		/// </summary>
		Swap = (Byte)'5',

		///��ת������
		DeriveFromEFP = (Byte)'6'
	};


	/// <summary>
	/// TFtdcTimeConditionType��һ����Ч����������
	/// </summary>
	[Serializable]
	public enum struct EnumTimeConditionType : Byte
	{
		/// <summary>
		/// ������ɣ�������
		/// </summary>
		IOC = (Byte)'1',

		/// <summary>
		/// ������Ч
		/// </summary>
		GFS = (Byte)'2',

		/// <summary>
		/// ������Ч
		/// </summary>
		GFD = (Byte)'3',

		/// <summary>
		/// ָ������ǰ��Ч
		/// </summary>
		GTD = (Byte)'4',

		/// <summary>
		/// ����ǰ��Ч
		/// </summary>
		GTC = (Byte)'5',

		/// <summary>
		/// ���Ͼ�����Ч
		/// </summary>
		GFA = (Byte)'6'
	};


	/// <summary>
	/// TFtdcVolumeConditionType��һ���ɽ�����������
	/// </summary>
	[Serializable]
	public enum struct EnumVolumeConditionType : Byte
	{
		/// <summary>
		/// �κ�����
		/// </summary>
		AV = (Byte)'1',

		/// <summary>
		/// ��С����
		/// </summary>
		MV = (Byte)'2',

		/// <summary>
		/// ȫ������
		/// </summary>
		CV = (Byte)'3'
	};


	/// <summary>
	/// TFtdcContingentConditionType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumContingentConditionType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Immediately = (Byte)'1',

		/// <summary>
		/// ֹ��
		/// </summary>
		Touch = (Byte)'2',

		/// <summary>
		/// ֹӮ
		/// </summary>
		TouchProfit = (Byte)'3',

		/// <summary>
		/// Ԥ��
		/// </summary>
		ParkedOrder = (Byte)'4',

		/// <summary>
		/// ���¼۴���������
		/// </summary>
		LastPriceGreaterThanStopPrice = (Byte)'5',

		/// <summary>
		/// ���¼۴��ڵ���������
		/// </summary>
		LastPriceGreaterEqualStopPrice = (Byte)'6',

		/// <summary>
		/// ���¼�С��������
		/// </summary>
		LastPriceLesserThanStopPrice = (Byte)'7',

		/// <summary>
		/// ���¼�С�ڵ���������
		/// </summary>
		LastPriceLesserEqualStopPrice = (Byte)'8',

		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		AskPriceGreaterThanStopPrice = (Byte)'9',

		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		AskPriceGreaterEqualStopPrice = (Byte)'A',

		/// <summary>
		/// ��һ��С��������
		/// </summary>
		AskPriceLesserThanStopPrice = (Byte)'B',

		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		AskPriceLesserEqualStopPrice = (Byte)'C',

		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		BidPriceGreaterThanStopPrice = (Byte)'D',

		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		BidPriceGreaterEqualStopPrice = (Byte)'E',

		/// <summary>
		/// ��һ��С��������
		/// </summary>
		BidPriceLesserThanStopPrice = (Byte)'F',

		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		BidPriceLesserEqualStopPrice = (Byte)'H'
	};


	/// <summary>
	/// TFtdcActionFlagType��һ��������־����
	/// </summary>
	[Serializable]
	public enum struct EnumActionFlagType : Byte
	{
		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'0',

		/// <summary>
		/// �޸�
		/// </summary>
		Modify = (Byte)'3'
	};

	/// <summary>
	/// TFtdcTradingRightType��һ������Ȩ������
	/// </summary>
	[Serializable]
	public enum struct EnumTradingRightType : Byte
	{
		/// <summary>
		/// ���Խ���
		/// </summary>
		Allow = (Byte)'0',

		/// <summary>
		/// ֻ��ƽ��
		/// </summary>
		CloseOnly = (Byte)'1',

		/// <summary>
		/// ���ܽ���
		/// </summary>
		Forbidden = (Byte)'2'
	};


	/// <summary>
	/// TFtdcOrderSourceType��һ��������Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumOrderSourceType : Byte
	{
		/// <summary>
		/// ���Բ�����
		/// </summary>
		Participant = (Byte)'0',

		/// <summary>
		/// ���Թ���Ա
		/// </summary>
		Administrator = (Byte)'1'
	};


	/// <summary>
	/// TFtdcTradeTypeType��һ���ɽ���������
	/// </summary>
	[Serializable]
	public enum struct EnumTradeTypeType : Byte
	{
		///��ϳֲֲ��Ϊ��һ�ֲ�,��ʼ����Ӧ���������͵ĳֲ�
		SplitCombination = (Byte)'#',

		/// <summary>
		/// ��ͨ�ɽ�
		/// </summary>
		Common = (Byte)'0',

		/// <summary>
		/// ��Ȩִ��
		/// </summary>
		OptionsExecution = (Byte)'1',

		/// <summary>
		/// OTC�ɽ�
		/// </summary>
		OTC = (Byte)'2',

		/// <summary>
		/// ��ת�������ɽ�
		/// </summary>
		EFPDerived = (Byte)'3',

		/// <summary>
		/// ��������ɽ�
		/// </summary>
		CombinationDerived = (Byte)'4'
	};


	/// <summary>
	/// TFtdcPriceSourceType��һ���ɽ�����Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumPriceSourceType : Byte
	{
		/// <summary>
		/// ǰ�ɽ���
		/// </summary>
		LastPrice = (Byte)'0',

		/// <summary>
		/// ��ί�м�
		/// </summary>
		Buy = (Byte)'1',

		/// <summary>
		/// ��ί�м�
		/// </summary>
		Sell = (Byte)'2'
	};


	/// <summary>
	/// TFtdcInstrumentStatusType��һ����Լ����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumInstrumentStatusType : Byte
	{
		/// <summary>
		/// ����ǰ
		/// </summary>
		BeforeTrading = (Byte)'0',

		/// <summary>
		/// �ǽ���
		/// </summary>
		NoTrading = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Continous = (Byte)'2',

		/// <summary>
		/// ���Ͼ��۱���
		/// </summary>
		AuctionOrdering = (Byte)'3',

		/// <summary>
		/// ���Ͼ��ۼ۸�ƽ��
		/// </summary>
		AuctionBalance = (Byte)'4',

		/// <summary>
		/// ���Ͼ��۴��
		/// </summary>
		AuctionMatch = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		Closed = (Byte)'6'
	};

	/// <summary>
	/// TFtdcInstStatusEnterReasonType��һ��Ʒ�ֽ��뽻��״̬ԭ������
	/// </summary>
	[Serializable]
	public enum struct EnumInstStatusEnterReasonType : Byte
	{
		/// <summary>
		/// �Զ��л�
		/// </summary>
		Automatic = (Byte)'1',

		/// <summary>
		/// �ֶ��л�
		/// </summary>
		Manual = (Byte)'2',

		/// <summary>
		/// �۶�
		/// </summary>
		Fuse = (Byte)'3'
	};


	/// <summary>
	/// TFtdcBatchStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumBatchStatusType : Byte
	{
		/// <summary>
		/// δ�ϴ�
		/// </summary>
		NoUpload = (Byte)'1',

		/// <summary>
		/// ���ϴ�
		/// </summary>
		Uploaded = (Byte)'2',

		/// <summary>
		/// ���ʧ��
		/// </summary>
		Failed = (Byte)'3'
	};


	/// <summary>
	/// TFtdcReturnStyleType��һ����Ʒ�ַ�����ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumReturnStyleType : Byte
	{
		/// <summary>
		/// ������Ʒ��
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��Ʒ��
		/// </summary>
		ByProduct = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReturnPatternType��һ������ģʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumReturnPatternType : Byte
	{
		/// <summary>
		/// ���ɽ�����
		/// </summary>
		ByVolume = (Byte)'1',

		/// <summary>
		/// ������������
		/// </summary>
		ByFeeOnHand = (Byte)'2'
	};


	/// <summary>
	/// TFtdcReturnLevelType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumReturnLevelType : Byte
	{
		/// <summary>
		/// ����1
		/// </summary>
		Level1 = (Byte)'1',

		/// <summary>
		/// ����2
		/// </summary>
		Level2 = (Byte)'2',

		/// <summary>
		/// ����3
		/// </summary>
		Level3 = (Byte)'3',

		/// <summary>
		/// ����4
		/// </summary>
		Level4 = (Byte)'4',

		/// <summary>
		/// ����5
		/// </summary>
		Level5 = (Byte)'5',

		/// <summary>
		/// ����6
		/// </summary>
		Level6 = (Byte)'6',

		/// <summary>
		/// ����7
		/// </summary>
		Level7 = (Byte)'7',

		/// <summary>
		/// ����8
		/// </summary>
		Level8 = (Byte)'8',

		/// <summary>
		/// ����9
		/// </summary>
		Level9 = (Byte)'9'
	};

	/// <summary>
	/// TFtdcReturnStandardType��һ��������׼����
	/// </summary>
	[Serializable]
	public enum struct EnumReturnStandardType : Byte
	{
		/// <summary>
		/// �ֽ׶η���
		/// </summary>
		ByPeriod = (Byte)'1',

		/// <summary>
		/// ��ĳһ��׼
		/// </summary>
		ByStandard = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMortgageTypeType��һ����Ѻ��������
	/// </summary>
	[Serializable]
	public enum struct EnumMortgageTypeType : Byte
	{
		/// <summary>
		/// �ʳ�
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcInvestorSettlementParamIDType��һ��Ͷ���߽��������������
	/// </summary>
	[Serializable]
	public enum struct EnumInvestorSettlementParamIDType : Byte
	{
		/// <summary>
		/// ��Ѻ����
		/// </summary>
		MortgageRatio = (Byte)'4',

		/// <summary>
		/// ��֤���㷨
		/// </summary>
		MarginWay = (Byte)'5',

		/// <summary>
		/// ���㵥����Ƿ������Ѻ
		/// </summary>
		BillDeposit = (Byte)'9'
	};


	/// <summary>
	/// TFtdcExchangeSettlementParamIDType��һ�����������������������
	/// </summary>
	[Serializable]
	public enum struct EnumExchangeSettlementParamIDType : Byte
	{
		/// <summary>
		/// ��Ѻ����
		/// </summary>
		MortgageRatio = (Byte)'1',

		/// <summary>
		/// �����ʽ�����
		/// </summary>
		OtherFundItem = (Byte)'2',

		/// <summary>
		/// �����ʽ��뽻���������
		/// </summary>
		OtherFundImport = (Byte)'3',

		/// <summary>
		/// ������������������ȡ��ʽ
		/// </summary>
		SHFEDelivFee = (Byte)'4',

		/// <summary>
		/// ������������������ȡ��ʽ
		/// </summary>
		DCEDelivFee = (Byte)'5',

		/// <summary>
		/// �н���������Ϳ��ý��
		/// </summary>
		CFFEXMinPrepa = (Byte)'6',

		/// <summary>
		/// ֣�������㷽ʽ
		/// </summary>
		CZCESettlementType = (Byte)'7',

		///������������������ȡ��ʽ
		ExchDelivFeeMode = (Byte)'9',

		///Ͷ���߽�����������ȡ��ʽ
		DelivFeeMode = (Byte)'0',

		///֣������ϳֱֲ�֤����ȡ��ʽ
		CZCEComMarginType = (Byte)'A',

		///������������֤���Ƿ��Ż�
		DceComMarginType = (Byte)'B',

		///��ֵ��Ȩ��֤���Żݱ���
		OptOutDisCountRate = (Byte)'a',

		///��ͱ���ϵ��
		OptMiniGuarantee = (Byte)'b'
	};


	/// <summary>
	/// TFtdcSystemParamIDType��һ��ϵͳ������������
	/// </summary>
	[Serializable]
	public enum struct EnumSystemParamIDType : Byte
	{
		/// <summary>
		/// Ͷ���ߴ�����С����
		/// </summary>
		InvestorIDMinLength = (Byte)'1',

		/// <summary>
		/// Ͷ�����ʺŴ�����С����
		/// </summary>
		AccountIDMinLength = (Byte)'2',

		/// <summary>
		/// Ͷ���߿���Ĭ�ϵ�¼Ȩ��
		/// </summary>
		UserRightLogon = (Byte)'3',

		/// <summary>
		/// Ͷ���߽��׽��㵥�ɽ����ܷ�ʽ
		/// </summary>
		SettlementBillTrade = (Byte)'4',

		/// <summary>
		/// ͳһ�������½��ױ��뷽ʽ
		/// </summary>
		TradingCode = (Byte)'5',

		/// <summary>
		/// �����Ƿ��жϴ���δ���˵ĳ����ͷ����ʽ�
		/// </summary>
		CheckFund = (Byte)'6',

		/// <summary>
		/// �Ƿ�����������ģ������Ȩ��
		/// </summary>
		CommModelRight = (Byte)'7',

		/// <summary>
		/// �Ƿ����ñ�֤����ģ������Ȩ��
		/// </summary>
		MarginModelRight = (Byte)'9',

		/// <summary>
		/// �Ƿ�淶�û����ܼ���
		/// </summary>
		IsStandardActive = (Byte)'8',

		/// <summary>
		/// �ϴ��Ľ����ļ���ʶ
		/// </summary>
		UploadSettlementFile = (Byte)'U',

		/// <summary>
		/// ���صı�֤�����ļ�
		/// </summary>
		DownloadCSRCFile = (Byte)'D',

		/// <summary>
		/// ���㵥�ļ���ʶ
		/// </summary>
		SettlementBillFile = (Byte)'S',

		/// <summary>
		/// ֤����ļ���ʶ
		/// </summary>
		CSRCOthersFile = (Byte)'C',

		/// <summary>
		/// Ͷ������Ƭ·��
		/// </summary>
		InvestorPhoto = (Byte)'P',

		/// <summary>
		/// �ϱ���֤������������
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// ��������¼�뷽ʽ
		/// </summary>
		InvestorPwdModel = (Byte)'I',

		/// <summary>
		/// Ͷ�����н��������ļ�����·��
		/// </summary>
		CFFEXInvestorSettleFile = (Byte)'F',

		/// <summary>
		/// Ͷ���ߴ�����뷽ʽ
		/// </summary>
		InvestorIDType = (Byte)'a',

		/// <summary>
		/// ���߻����Ȩ��
		/// </summary>
		FreezeMaxReMain = (Byte)'r',

		/// <summary>
		/// ��������ز���ʵʱ�ϳ�����
		/// </summary>
		IsSync = (Byte)'A',

		///�������Ȩ������
		RelieveOpenLimit = (Byte)'O',

		///�Ƿ�淶�û���������
		IsStandardFreeze = (Byte)'X',

		///֣�����Ƿ񿪷�����Ʒ���ױ�����
		CZCENormalProductHedge = (Byte)'B'
	};

	/// <summary>
	/// TFtdcTradeParamIDType��һ������ϵͳ������������
	/// </summary>
	[Serializable]
	public enum struct EnumTradeParamIDType : Byte
	{
		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		EncryptionStandard = (Byte)'E',

		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		RiskMode = (Byte)'R',

		/// <summary>
		/// ϵͳ�����㷨�Ƿ�ȫ�� 0-�� 1-��
		/// </summary>
		RiskModeGlobal = (Byte)'G',

		///��������㷨
		ModeEncode = (Byte)'P',

		///�۸�С��λ������
		TickMode = (Byte)'T',

		///�û����Ự��
		SingleUserSessionMaxNum = (Byte)'S',

		///���������¼ʧ����
		LoginFailMaxNum = (Byte)'L',

		///�Ƿ�ǿ����֤
		IsAuthForce = (Byte)'A',

		///�Ƿ񶳽�֤ȯ�ֲ�
		IsPosiFreeze = (Byte)'F',

		///�Ƿ��޲�
		IsPosiLimit = (Byte)'M',

		///֣����ѯ��ʱ����
		ForQuoteTimeInterval = (Byte)'Q',

		///�Ƿ��ڻ��޲�
		IsFuturePosiLimit = (Byte)'B',

		///�Ƿ��ڻ��µ�Ƶ������
		IsFutureOrderFreq = (Byte)'C',

		///��Ȩ�����Ƿ����ӯ��
		IsExecOrderProfit = (Byte)'H',

		///���ڿ����Ƿ���֤�������п����Ƿ���Ԥ�������˻�
		IsCheckBankAcc = (Byte)'I',

		///����������޸�����
		PasswordDeadLine = (Byte)'J',

		///ǿ����У��
		IsStrongPassword = (Byte)'K',

		///�����ʽ���Ѻ��
		BalanceMorgage = (Byte)'a',

		///��С���볤��
		MinPwdLen = (Byte)'O',

		///IP��������½ʧ�ܴ���
		LoginFailMaxNumForIP = (Byte)'U',

		///������Ч��
		PasswordPeriod = (Byte)'V'
	};


	/// <summary>
	/// TFtdcFileIDType��һ���ļ���ʶ����
	/// </summary>
	[Serializable]
	public enum struct EnumFileIDType : Byte
	{
		/// <summary>
		/// �ʽ�����
		/// </summary>
		SettlementFund = (Byte)'F',

		/// <summary>
		/// �ɽ�����
		/// </summary>
		Trade = (Byte)'T',

		/// <summary>
		/// Ͷ���ֲ߳�����
		/// </summary>
		InvestorPosition = (Byte)'P',

		/// <summary>
		/// Ͷ���߷����ʽ�����
		/// </summary>
		SubEntryFund = (Byte)'O',

		/// <summary>
		/// ֣������ϳֲ�����
		/// </summary>
		CZCECombinationPos = (Byte)'C',

		/// <summary>
		/// �ϱ���֤������������
		/// </summary>
		CSRCData = (Byte)'R',

		/// <summary>
		/// ֣����ƽ���˽�����
		/// </summary>
		CZCEClose = (Byte)'L',

		/// <summary>
		/// ֣������ƽ���˽�����
		/// </summary>
		CZCENoClose = (Byte)'N',

		///�ֲ���ϸ����
		PositionDtl = (Byte)'D',

		///��Ȩִ���ļ�
		OptionStrike = (Byte)'S',

		///����۱ȶ��ļ�
		SettlementPriceComparison = (Byte)'M',

		///�������ǳֱֲ䶯��ϸ
		NonTradePosChange = (Byte)'B'
	};

	/// <summary>
	/// TFtdcFileTypeType��һ���ļ��ϴ���������
	/// </summary>
	[Serializable]
	public enum struct EnumFileTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'0',

		/// <summary>
		/// �˶�
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFileFormatType��һ���ļ���ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumFileFormatType : Byte
	{
		/// <summary>
		/// �ı��ļ�(.txt)
		/// </summary>
		Txt = (Byte)'0',

		/// <summary>
		/// ѹ���ļ�(.zip)
		/// </summary>
		Zip = (Byte)'1',

		/// <summary>
		/// DBF�ļ�(.dbf)
		/// </summary>
		DBF = (Byte)'2'
	};


	/// <summary>
	/// TFtdcFileUploadStatusType��һ���ļ�״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumFileUploadStatusType : Byte
	{
		/// <summary>
		/// �ϴ��ɹ�
		/// </summary>
		SucceedUpload = (Byte)'1',

		/// <summary>
		/// �ϴ�ʧ��
		/// </summary>
		FailedUpload = (Byte)'2',

		/// <summary>
		/// ����ɹ�
		/// </summary>
		SucceedLoad = (Byte)'3',

		/// <summary>
		/// ���벿�ֳɹ�
		/// </summary>
		PartSucceedLoad = (Byte)'4',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		FailedLoad = (Byte)'5'
	};


	/// <summary>
	/// TFtdcTransferDirectionType��һ���Ʋַ�������
	/// </summary>
	[Serializable]
	public enum struct EnumTransferDirectionType : Byte
	{
		/// <summary>
		/// �Ƴ�
		/// </summary>
		Out = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		In = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSpecialCreateRuleType��һ������Ĵ�����������
	/// </summary>
	[Serializable]
	public enum struct EnumSpecialCreateRuleType : Byte
	{
		/// <summary>
		/// û�����ⴴ������
		/// </summary>
		NoSpecialRule = (Byte)'0',

		/// <summary>
		/// ����������
		/// </summary>
		NoSpringFestival = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBasisPriceTypeType��һ�����ƻ�׼����������
	/// </summary>
	[Serializable]
	public enum struct EnumBasisPriceTypeType : Byte
	{
		/// <summary>
		/// ��һ��Լ�����
		/// </summary>
		LastSettlement = (Byte)'1',

		/// <summary>
		/// ��һ��Լ���̼�
		/// </summary>
		LaseClose = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProductLifePhaseType��һ����Ʒ��������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumProductLifePhaseType : Byte
	{
		/// <summary>
		/// ��Ծ
		/// </summary>
		Active = (Byte)'1',

		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'2',

		/// <summary>
		/// ע��
		/// </summary>
		Canceled = (Byte)'3'
	};

	/// <summary>
	/// TFtdcDeliveryModeType��һ�����ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumDeliveryModeType : Byte
	{
		/// <summary>
		/// �ֽ𽻸�
		/// </summary>
		CashDeliv = (Byte)'1',

		/// <summary>
		/// ʵ�ｻ��
		/// </summary>
		CommodityDeliv = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundIOTypeType��һ���������������
	/// </summary>
	[Serializable]
	public enum struct EnumFundIOTypeType : Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		FundIO = (Byte)'1',

		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2',

		///���ڻ���
		SwapCurrency = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFundTypeType��һ���ʽ���������
	/// </summary>
	[Serializable]
	public enum struct EnumFundTypeType : Byte
	{
		/// <summary>
		/// ���д��
		/// </summary>
		Deposite = (Byte)'1',

		/// <summary>
		/// �����ʽ�
		/// </summary>
		ItemFund = (Byte)'2',

		/// <summary>
		/// ��˾����
		/// </summary>
		Company = (Byte)'3',

		///�ʽ���ת
		InnerTransfer = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFundDirectionType��һ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumFundDirectionType : Byte
	{
		/// <summary>
		/// ���
		/// </summary>
		In = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Out = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundStatusType��һ���ʽ�״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumFundStatusType : Byte
	{
		/// <summary>
		/// ��¼��
		/// </summary>
		Record = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Check = (Byte)'2',

		/// <summary>
		/// �ѳ���
		/// </summary>
		Charge = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPublishStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumPublishStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		None = (Byte)'1',

		/// <summary>
		/// ���ڷ���
		/// </summary>
		Publishing = (Byte)'2',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Published = (Byte)'3'
	};

	/// <summary>
	/// TFtdcSystemStatusType��һ��ϵͳ״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSystemStatusType : Byte
	{
		/// <summary>
		/// ����Ծ
		/// </summary>
		NonActive = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Startup = (Byte)'2',

		/// <summary>
		/// ���׿�ʼ��ʼ��
		/// </summary>
		Initialize = (Byte)'3',

		/// <summary>
		/// ������ɳ�ʼ��
		/// </summary>
		Initialized = (Byte)'4',

		/// <summary>
		/// ���п�ʼ
		/// </summary>
		Close = (Byte)'5',

		/// <summary>
		/// �������
		/// </summary>
		Closed = (Byte)'6',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSettlementStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSettlementStatusType : Byte
	{
		/// <summary>
		/// ��ʼ
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Settlementing = (Byte)'1',

		/// <summary>
		/// �ѽ���
		/// </summary>
		Settlemented = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		Finished = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorTypeType��һ��Ͷ������������
	/// </summary>
	[Serializable]
	public enum struct EnumInvestorTypeType : Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Company = (Byte)'1',

		/// <summary>
		/// Ͷ�ʻ���
		/// </summary>
		Fund = (Byte)'2',

		///���ⷨ��
		SpecialOrgan = (Byte)'3',

		///�ʹܻ�
		Asset = (Byte)'4'
	};

	/// <summary>
	/// TFtdcBrokerTypeType��һ�����͹�˾��������
	/// </summary>
	[Serializable]
	public enum struct EnumBrokerTypeType : Byte
	{
		/// <summary>
		/// ���׻�Ա
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// ���׽����Ա
		/// </summary>
		TradeSettle = (Byte)'1'
	};

	/// <summary>
	/// TFtdcRiskLevelType��һ�����յȼ�����
	/// </summary>
	[Serializable]
	public enum struct EnumRiskLevelType : Byte
	{
		/// <summary>
		/// �ͷ��տͻ�
		/// </summary>
		Low = (Byte)'1',

		/// <summary>
		/// ��ͨ�ͻ�
		/// </summary>
		Normal = (Byte)'2',

		/// <summary>
		/// ��ע�ͻ�
		/// </summary>
		Focus = (Byte)'3',

		/// <summary>
		/// ���տͻ�
		/// </summary>
		Risk = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFeeAcceptStyleType��һ����������ȡ��ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumFeeAcceptStyleType : Byte
	{
		/// <summary>
		/// ��������ȡ
		/// </summary>
		ByTrade = (Byte)'1',

		/// <summary>
		/// ��������ȡ
		/// </summary>
		ByDeliv = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		None = (Byte)'3',

		/// <summary>
		/// ��ָ����������ȡ
		/// </summary>
		FixFee = (Byte)'4'
	};

	/// <summary>
	/// TFtdcPasswordTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumPasswordTypeType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		Trade = (Byte)'1',

		/// <summary>
		/// �ʽ�����
		/// </summary>
		Account = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgorithmType��һ��ӯ���㷨����
	/// </summary>
	[Serializable]
	public enum struct EnumAlgorithmType : Byte
	{
		/// <summary>
		/// ��ӯ����������
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��ӯ���ƣ�������
		/// </summary>
		OnlyLost = (Byte)'2',

		/// <summary>
		/// ��ӯ�ƣ���������
		/// </summary>
		OnlyGain = (Byte)'3',

		/// <summary>
		/// ��ӯ������������
		/// </summary>
		None = (Byte)'4'
	};

	/// <summary>
	/// TFtdcIncludeCloseProfitType��һ���Ƿ����ƽ��ӯ������
	/// </summary>
	[Serializable]
	public enum struct EnumIncludeCloseProfitType : Byte
	{
		/// <summary>
		/// ����ƽ��ӯ��
		/// </summary>
		Include = (Byte)'0',

		/// <summary>
		/// ������ƽ��ӯ��
		/// </summary>
		NotInclude = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAllWithoutTradeType��һ���Ƿ��ܿ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumAllWithoutTradeType : Byte
	{
		/// <summary>
		/// ���ܿ����������
		/// </summary>
		Enable = (Byte)'0',

		/// <summary>
		/// �ܿ����������
		/// </summary>
		Disable = (Byte)'2',

		///�޲ֲ��ܿ����������
		NoHoldEnable = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFuturePwdFlagType��һ���ʽ�����˶Ա�־����
	/// </summary>
	[Serializable]
	public enum struct EnumFuturePwdFlagType : Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		UnCheck = (Byte)'0',

		/// <summary>
		/// �˶�
		/// </summary>
		Check = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferTypeType��һ������ת����������
	/// </summary>
	[Serializable]
	public enum struct EnumTransferTypeType : Byte
	{
		/// <summary>
		/// ����ת�ڻ�
		/// </summary>
		BankToFuture = (Byte)'0',

		/// <summary>
		/// �ڻ�ת����
		/// </summary>
		FutureToBank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTransferValidFlagType��һ��ת����Ч��־����
	/// </summary>
	[Serializable]
	public enum struct EnumTransferValidFlagType : Byte
	{
		/// <summary>
		/// ��Ч��ʧ��
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Reverse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcReasonType��һ����������
	/// </summary>
	[Serializable]
	public enum struct EnumReasonType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		CD = (Byte)'0',

		/// <summary>
		/// �ʽ���;
		/// </summary>
		ZT = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		QT = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSexType��һ���Ա�����
	/// </summary>
	[Serializable]
	public enum struct EnumSexType : Byte
	{
		/// <summary>
		/// δ֪
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Man = (Byte)'1',

		/// <summary>
		/// Ů
		/// </summary>
		Woman = (Byte)'2'
	};

	/// <summary>
	/// TFtdcUserTypeType��һ���û���������
	/// </summary>
	[Serializable]
	public enum struct EnumUserTypeType : Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'0',

		/// <summary>
		/// ����Ա
		/// </summary>
		Operator = (Byte)'1',

		/// <summary>
		/// ����Ա
		/// </summary>
		SuperUser = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumRateTypeType : Byte
	{
		/// <summary>
		/// ��֤����
		/// </summary>
		MarginRate = (Byte)'2'
	};

	/// <summary>
	/// TFtdcNoteTypeType��һ��֪ͨ��������
	/// </summary>
	[Serializable]
	public enum struct EnumNoteTypeType : Byte
	{
		/// <summary>
		/// ���׽��㵥
		/// </summary>
		TradeSettleBill = (Byte)'1',

		/// <summary>
		/// ���׽����±�
		/// </summary>
		TradeSettleMonth = (Byte)'2',

		/// <summary>
		/// ׷�ӱ�֤��֪ͨ��
		/// </summary>
		CallMarginNotes = (Byte)'3',

		/// <summary>
		/// ǿ��ƽ��֪ͨ��
		/// </summary>
		ForceCloseNotes = (Byte)'4',

		/// <summary>
		/// �ɽ�֪ͨ��
		/// </summary>
		TradeNotes = (Byte)'5',

		/// <summary>
		/// ����֪ͨ��
		/// </summary>
		DelivNotes = (Byte)'6'
	};

	/// <summary>
	/// TFtdcSettlementStyleType��һ�����㵥��ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumSettlementStyleType : Byte
	{
		/// <summary>
		/// ���ն���
		/// </summary>
		Day = (Byte)'1',

		/// <summary>
		/// ��ʶԳ�
		/// </summary>
		Volume = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSettlementBillTypeType��һ�����㵥��������
	/// </summary>
	[Serializable]
	public enum struct EnumSettlementBillTypeType : Byte
	{
		/// <summary>
		/// �ձ�
		/// </summary>
		Day = (Byte)'0',

		/// <summary>
		/// �±�
		/// </summary>
		Month = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRightTypeType��һ���ͻ�Ȩ����������
	/// </summary>
	[Serializable]
	public enum struct EnumUserRightTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Logon = (Byte)'1',

		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// �ʼĽ��㵥
		/// </summary>
		EMail = (Byte)'3',

		/// <summary>
		/// ������㵥
		/// </summary>
		Fax = (Byte)'4',

		/// <summary>
		/// ������
		/// </summary>
		ConditionOrder = (Byte)'5'
	};

	/// <summary>
	/// TFtdcMarginPriceTypeType��һ����֤��۸���������
	/// </summary>
	[Serializable]
	public enum struct EnumMarginPriceTypeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		PreSettlementPrice = (Byte)'1',

		/// <summary>
		/// ���¼�
		/// </summary>
		SettlementPrice = (Byte)'2',

		/// <summary>
		/// �ɽ�����
		/// </summary>
		AveragePrice = (Byte)'3',

		/// <summary>
		/// ���ּ�
		/// </summary>
		OpenPrice = (Byte)'4'
	};

	/// <summary>
	/// TFtdcBillGenStatusType��һ�����㵥����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumBillGenStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		None = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		NoGenerated = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Generated = (Byte)'2'
	};

	/// <summary>
	/// TFtdcAlgoTypeType��һ���㷨��������
	/// </summary>
	[Serializable]
	public enum struct EnumAlgoTypeType : Byte
	{
		/// <summary>
		/// �ֲִ����㷨
		/// </summary>
		HandlePositionAlgo = (Byte)'1',

		/// <summary>
		/// Ѱ�ұ�֤�����㷨
		/// </summary>
		FindMarginRateAlgo = (Byte)'2'
	};

	/// <summary>
	/// TFtdcHandlePositionAlgoIDType��һ���ֲִ����㷨�������
	/// </summary>
	[Serializable]
	public enum struct EnumHandlePositionAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFindMarginRateAlgoIDType��һ��Ѱ�ұ�֤�����㷨�������
	/// </summary>
	[Serializable]
	public enum struct EnumFindMarginRateAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcHandleTradingAccountAlgoIDType��һ���ʽ����㷨�������
	/// </summary>
	[Serializable]
	public enum struct EnumHandleTradingAccountAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'2',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'3'
	};

	/// <summary>
	/// TFtdcPersonTypeType��һ����ϵ����������
	/// </summary>
	[Serializable]
	public enum struct EnumPersonTypeType : Byte
	{
		/// <summary>
		/// ָ���µ���
		/// </summary>
		Order = (Byte)'1',

		/// <summary>
		/// ������Ȩ��
		/// </summary>
		Open = (Byte)'2',

		/// <summary>
		/// �ʽ������
		/// </summary>
		Fund = (Byte)'3',

		/// <summary>
		/// ���㵥ȷ����
		/// </summary>
		Settlement = (Byte)'4',

		///����
		Company = (Byte)'5',

		///���˴���
		Corporation = (Byte)'6',

		///Ͷ������ϵ��
		LinkMan = (Byte)'7',

		///�ֻ������ʲ�������
		Ledger = (Byte)'8',

		///�У���������
		Trustee = (Byte)'9',

		///�У������ܻ������˴���
		TrusteeCorporation = (Byte)'A',

		///�У������ܻ���������Ȩ��
		TrusteeOpen = (Byte)'B',

		///�У������ܻ�����ϵ��
		TrusteeContact = (Byte)'C',

		///������Ȼ�˲ο�֤��
		ForeignerRefer = (Byte)'D',

		///���˴���ο�֤��
		CorporationRefer = (Byte)'E'

	};

	/// <summary>
	/// TFtdcQueryInvestorRangeType��һ����ѯ��Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumQueryInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ��ѯ����
		/// </summary>
		Group = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcInvestorRiskStatusType��һ��Ͷ���߷���״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumInvestorRiskStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Warn = (Byte)'2',

		/// <summary>
		/// ׷��
		/// </summary>
		Call = (Byte)'3',

		/// <summary>
		/// ǿƽ
		/// </summary>
		Force = (Byte)'4',

		/// <summary>
		/// �쳣
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcUserEventTypeType��һ���û��¼���������
	/// </summary>
	[Serializable]
	public enum struct EnumUserEventTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Login = (Byte)'1',

		/// <summary>
		/// �ǳ�
		/// </summary>
		Logout = (Byte)'2',

		/// <summary>
		/// ���׳ɹ�
		/// </summary>
		Trading = (Byte)'3',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		TradingError = (Byte)'4',

		/// <summary>
		/// �޸�����
		/// </summary>
		UpdatePassword = (Byte)'5',

		///�ͻ�����֤
		Authenticate = (Byte)'6',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCloseStyleType��һ��ƽ�ַ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumCloseStyleType : Byte
	{
		/// <summary>
		/// �ȿ���ƽ
		/// </summary>
		Close = (Byte)'0',

		/// <summary>
		/// ��ƽ����ƽ��
		/// </summary>
		CloseToday = (Byte)'1'
	};

	/// <summary>
	/// TFtdcStatModeType��һ��ͳ�Ʒ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumStatModeType : Byte
	{
		/// <summary>
		/// ----
		/// </summary>
		Non = (Byte)'0',

		/// <summary>
		/// ����Լͳ��
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ����Ʒͳ��
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// ��Ͷ����ͳ��
		/// </summary>
		Investor = (Byte)'3'
	};

	/// <summary>
	/// TFtdcParkedOrderStatusType��һ��Ԥ��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumParkedOrderStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotSend = (Byte)'1',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Send = (Byte)'2',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirDealStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumVirDealStatusType : Byte
	{
		/// <summary>
		/// ���ڴ���
		/// </summary>
		Dealing = (Byte)'1',

		/// <summary>
		/// ����ɹ�
		/// </summary>
		DeaclSucceed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrgSystemIDType��һ��ԭ��ϵͳ��������
	/// </summary>
	[Serializable]
	public enum struct EnumOrgSystemIDType : Byte
	{
		/// <summary>
		/// �ۺϽ���ƽ̨
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// ��ʢϵͳ
		/// </summary>
		ESunny = (Byte)'1',

		/// <summary>
		/// ���˴�V6ϵͳ
		/// </summary>
		KingStarV6 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirTradeStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumVirTradeStatusType : Byte
	{
		/// <summary>
		/// ����������
		/// </summary>
		NaturalDeal = (Byte)'0',

		/// <summary>
		/// �ɹ�����
		/// </summary>
		SucceedEnd = (Byte)'1',

		/// <summary>
		/// ʧ�ܽ���
		/// </summary>
		FailedEND = (Byte)'2',

		/// <summary>
		/// �쳣��
		/// </summary>
		Exception = (Byte)'3',

		/// <summary>
		/// ���˹��쳣����
		/// </summary>
		ManualDeal = (Byte)'4',

		/// <summary>
		/// ͨѶ�쳣 �����˹�����
		/// </summary>
		MesException = (Byte)'5',

		/// <summary>
		/// ϵͳ�������˹�����
		/// </summary>
		SysException = (Byte)'6'
	};

	/// <summary>
	/// TFtdcVirBankAccTypeType��һ�������ʻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumVirBankAccTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		BankCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcVirementStatusType��һ�������ʻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumVirementStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Natural = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'9'
	};

	/// <summary>
	/// TFtdcVirementAvailAbilityType��һ����Ч��־����
	/// </summary>
	[Serializable]
	public enum struct EnumVirementAvailAbilityType : Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		NoAvailAbility = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		AvailAbility = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcVirementTradeCodeType��һ�����״�������
	/// </summary>
	[Serializable]
	public enum struct EnumVirementTradeCodeType : Byte
	{
		/// <summary>
		/// ���з��������ʽ�ת�ڻ�
		/// </summary>
		BankBankToFuture_102001 = (Byte)'1',//'102001',

											/// <summary>
											/// ���з����ڻ��ʽ�ת����
											/// </summary>
											BankFutureToBank_102002 = (Byte)'2',//'102002',

																				/// <summary>
																				/// �ڻ����������ʽ�ת�ڻ�
																				/// </summary>
																				FutureBankToFuture_202001 = (Byte)'3',//'202001',

																													  /// <summary>
																													  /// �ڻ������ڻ��ʽ�ת����
																													  /// </summary>
																													  FutureFutureToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcAMLGenStatusType��һ��Aml���ɷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumAMLGenStatusType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		Program = (Byte)'0',

		/// <summary>
		/// �˹�����
		/// </summary>
		HandWork = (Byte)'1',
	};


	/// <summary>
	/// TFtdcCFMMCKeyKindType��һ����̬��Կ���(��֤����)����
	/// </summary>
	[Serializable]
	public enum struct EnumCFMMCKeyKindType : Byte
	{
		/// <summary>
		/// �����������
		/// </summary>
		REQUEST = (Byte)'R',

		/// <summary>
		/// CFMMC�Զ�����
		/// </summary>
		AUTO = (Byte)'A',

		/// <summary>
		/// CFMMC�ֶ�����
		/// </summary>
		MANUAL = (Byte)'M'
	};

	/// <summary>
	/// TFtdcCertificationTypeType��һ��֤����������
	/// </summary>
	[Serializable]
	public enum struct EnumCertificationTypeType : Byte
	{
		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'1',

		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',

		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'3',

		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'4',

		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',

		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'6',

		/// <summary>
		/// ��֯��������֤
		/// </summary>
		InstitutionCodeCard = (Byte)'7',

		/// <summary>
		/// ��ʱӪҵִ�պ�
		/// </summary>
		TempLicenseNo = (Byte)'8',

		/// <summary>
		/// ������ҵ�Ǽ�֤��
		/// </summary>
		NoEnterpriseLicenseNo = (Byte)'9',

		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x',

		/// <summary>
		/// ���ܲ�������
		/// </summary>
		SuperDepAgree = (Byte)'a'
	};

	/// <summary>
	/// TFtdcFileBusinessCodeType��һ���ļ�ҵ��������
	/// </summary>
	[Serializable]
	public enum struct EnumFileBusinessCodeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Others = (Byte)'0',

		/// <summary>
		/// ת�˽�����ϸ����
		/// </summary>
		TransferDetails = (Byte)'1',

		/// <summary>
		/// �ͻ��˻�״̬����
		/// </summary>
		CustAccStatus = (Byte)'2',

		/// <summary>
		/// �˻��ཻ����ϸ����
		/// </summary>
		AccountTradeDetails = (Byte)'3',

		/// <summary>
		/// �ڻ��˻���Ϣ�����ϸ����
		/// </summary>
		FutureAccountChangeInfoDetails = (Byte)'4',

		/// <summary>
		/// �ͻ��ʽ�̨�������ϸ����
		/// </summary>
		CustMoneyDetail = (Byte)'5',

		/// <summary>
		/// �ͻ�������Ϣ��ϸ����
		/// </summary>
		CustCancelAccountInfo = (Byte)'6',

		/// <summary>
		/// �ͻ��ʽ������˽��
		/// </summary>
		CustMoneyResult = (Byte)'7',

		/// <summary>
		/// ���������쳣����ļ�
		/// </summary>
		OthersExceptionResult = (Byte)'8',

		/// <summary>
		/// �ͻ���Ϣ������ϸ
		/// </summary>
		CustInterestNetMoneyDetails = (Byte)'9',

		/// <summary>
		/// �ͻ��ʽ�����ϸ
		/// </summary>
		CustMoneySendAndReceiveDetails = (Byte)'a',

		/// <summary>
		/// ���˴�������ʽ��ջ���
		/// </summary>
		CorporationMoneyTotal = (Byte)'b',

		/// <summary>
		/// ������ʽ��ջ���
		/// </summary>
		MainbodyMoneyTotal = (Byte)'c',

		/// <summary>
		/// �ܷ�ƽ��������
		/// </summary>
		MainPartMonitorData = (Byte)'d',

		/// <summary>
		/// ������б��������
		/// </summary>
		PreparationMoney = (Byte)'e',

		/// <summary>
		/// Э���������ʽ�������
		/// </summary>
		BankMoneyMonitorData = (Byte)'f'
	};

	/// <summary>
	/// TFtdcCashExchangeCodeType��һ���㳮��־����
	/// </summary>
	[Serializable]
	public enum struct EnumCashExchangeCodeType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// ��
		/// </summary>
		Cash = (Byte)'2'
	};

	/// <summary>
	/// TFtdcYesNoIndicatorType��һ���ǻ���ʶ����
	/// </summary>
	[Serializable]
	public enum struct EnumYesNoIndicatorType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBanlanceTypeType��һ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumBanlanceTypeType : Byte
	{
		/// <summary>
		/// ��ǰ���
		/// </summary>
		CurrentMoney = (Byte)'0',

		/// <summary>
		/// �������
		/// </summary>
		UsableMoney = (Byte)'1',

		/// <summary>
		/// ��ȡ���
		/// </summary>
		FetchableMoney = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		FreezeMoney = (Byte)'3'
	};

	/// <summary>
	/// TFtdcGenderType��һ���Ա�����
	/// </summary>
	[Serializable]
	public enum struct EnumGenderType : Byte
	{
		/// <summary>
		/// δ֪״̬
		/// </summary>
		Unknown = (Byte)'0',

		/// <summary>
		/// ��
		/// </summary>
		Male = (Byte)'1',

		/// <summary>
		/// Ů
		/// </summary>
		Female = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFeePayFlagType��һ������֧����־����
	/// </summary>
	[Serializable]
	public enum struct EnumFeePayFlagType : Byte
	{
		/// <summary>
		/// �����淽֧������
		/// </summary>
		BEN = (Byte)'0',

		/// <summary>
		/// �ɷ��ͷ�֧������
		/// </summary>
		OUR = (Byte)'1',

		/// <summary>
		/// �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
		/// </summary>
		SHA = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPassWordKeyTypeType��һ����Կ��������
	/// </summary>
	[Serializable]
	public enum struct EnumPassWordKeyTypeType : Byte
	{
		/// <summary>
		/// ������Կ
		/// </summary>
		ExchangeKey = (Byte)'0',

		/// <summary>
		/// ������Կ
		/// </summary>
		PassWordKey = (Byte)'1',

		/// <summary>
		/// MAC��Կ
		/// </summary>
		MACKey = (Byte)'2',

		/// <summary>
		/// ������Կ
		/// </summary>
		MessageKey = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTPassWordTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumFBTPassWordTypeType : Byte
	{
		/// <summary>
		/// ��ѯ
		/// </summary>
		Query = (Byte)'0',

		/// <summary>
		/// ȡ��
		/// </summary>
		Fetch = (Byte)'1',

		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		Trade = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFBTEncryModeType��һ�����ܷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumFBTEncryModeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		NoEncry = (Byte)'0',

		/// <summary>
		/// DES
		/// </summary>
		DES = (Byte)'1',

		/// <summary>
		/// 3DES
		/// </summary>
		DES3 = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankRepealFlagType��һ�����г�����־����
	/// </summary>
	[Serializable]
	public enum struct EnumBankRepealFlagType : Byte
	{
		/// <summary>
		/// ���������Զ�����
		/// </summary>
		BankNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// ���д��Զ�����
		/// </summary>
		BankWaitingRepeal = (Byte)'1',

		/// <summary>
		/// �������Զ�����
		/// </summary>
		BankBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerRepealFlagType��һ�����̳�����־����
	/// </summary>
	[Serializable]
	public enum struct EnumBrokerRepealFlagType : Byte
	{
		/// <summary>
		/// ���������Զ�����
		/// </summary>
		BrokerNotNeedRepeal = (Byte)'0',

		/// <summary>
		/// ���̴��Զ�����
		/// </summary>
		BrokerWaitingRepeal = (Byte)'1',

		/// <summary>
		/// �������Զ�����
		/// </summary>
		BrokerBeenRepealed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcInstitutionTypeType��һ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumInstitutionTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Bank = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Future = (Byte)'1',

		/// <summary>
		/// ȯ��
		/// </summary>
		Store = (Byte)'2'
	};

	/// <summary>
	/// TFtdcLastFragmentType��һ������Ƭ��־����
	/// </summary>
	[Serializable]
	public enum struct EnumLastFragmentType : Byte
	{
		/// <summary>
		/// ������Ƭ
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// ��������Ƭ
		/// </summary>
		No = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccStatusType��һ�������˻�״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumBankAccStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// ��ʧ
		/// </summary>
		ReportLoss = (Byte)'2'
	};

	/// <summary>
	/// TFtdcMoneyAccountStatusType��һ���ʽ��˻�״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumMoneyAccountStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Cancel = (Byte)'1'
	};

	/// <summary>
	/// TFtdcManageStatusType��һ�����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumManageStatusType : Byte
	{
		/// <summary>
		/// ָ�����
		/// </summary>
		Point = (Byte)'0',

		/// <summary>
		/// Ԥָ��
		/// </summary>
		PrePoint = (Byte)'1',

		/// <summary>
		/// ����ָ��
		/// </summary>
		CancelPoint = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSystemTypeType��һ��Ӧ��ϵͳ��������
	/// </summary>
	[Serializable]
	public enum struct EnumSystemTypeType : Byte
	{
		/// <summary>
		/// ����ת��
		/// </summary>
		FutureBankTransfer = (Byte)'0',

		/// <summary>
		/// ��֤ת��
		/// </summary>
		StockBankTransfer = (Byte)'1',

		/// <summary>
		/// ���������
		/// </summary>
		TheThirdPartStore = (Byte)'2'
	};

	/// <summary>
	/// TFtdcTxnEndFlagType��һ������ת�ʻ�ת�����־����
	/// </summary>
	[Serializable]
	public enum struct EnumTxnEndFlagType : Byte
	{
		/// <summary>
		/// ����������
		/// </summary>
		NormalProcessing = (Byte)'0',

		/// <summary>
		/// �ɹ�����
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// ʧ�ܽ���
		/// </summary>
		Failed = (Byte)'2',

		/// <summary>
		/// �쳣��
		/// </summary>
		Abnormal = (Byte)'3',

		/// <summary>
		/// ���˹��쳣����
		/// </summary>
		ManualProcessedForException = (Byte)'4',

		/// <summary>
		/// ͨѶ�쳣 �����˹�����
		/// </summary>
		CommuFailedNeedManualProcess = (Byte)'5',

		/// <summary>
		/// ϵͳ�������˹�����
		/// </summary>
		SysErrorNeedManualProcess = (Byte)'6'
	};

	/// <summary>
	/// TFtdcProcessStatusType��һ������ת�ʷ�����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumProcessStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotProcess = (Byte)'0',

		/// <summary>
		/// ��ʼ����
		/// </summary>
		StartProcess = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		Finished = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCustTypeType��һ���ͻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumCustTypeType : Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Institution = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTTransferDirectionType��һ������ת�ʷ�������
	/// </summary>
	[Serializable]
	public enum struct EnumFBTTransferDirectionType : Byte
	{
		/// <summary>
		/// �������ת�ڻ�
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// �����ڻ�ת����
		/// </summary>
		FromFutureToBank = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOpenOrDestroyType��һ���������������
	/// </summary>
	[Serializable]
	public enum struct EnumOpenOrDestroyType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Destroy = (Byte)'0'
	};

	/// <summary>
	/// TFtdcAvailabilityFlagType��һ����Ч��־����
	/// </summary>
	[Serializable]
	public enum struct EnumAvailabilityFlagType : Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		Invalid = (Byte)'0',

		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2'
	};

	/// <summary>
	/// TFtdcOrganTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumOrganTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		Bank = (Byte)'1',

		/// <summary>
		/// ����ǰ��
		/// </summary>
		Future = (Byte)'2',

		/// <summary>
		/// ����ת��ƽ̨����
		/// </summary>
		PlateForm = (Byte)'9'
	};

	/// <summary>
	/// TFtdcOrganLevelType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumOrganLevelType : Byte
	{
		/// <summary>
		/// �������л������ܲ�
		/// </summary>
		HeadQuarters = (Byte)'1',

		/// <summary>
		/// ���з����Ļ��ڻ���˾Ӫҵ��
		/// </summary>
		Branch = (Byte)'2'
	};

	/// <summary>
	/// TFtdcProtocalIDType��һ��Э����������
	/// </summary>
	[Serializable]
	public enum struct EnumProtocalIDType : Byte
	{
		/// <summary>
		/// ����Э��
		/// </summary>
		FutureProtocal = (Byte)'0',

		/// <summary>
		/// ����Э��
		/// </summary>
		ICBCProtocal = (Byte)'1',

		/// <summary>
		/// ũ��Э��
		/// </summary>
		ABCProtocal = (Byte)'2',

		/// <summary>
		/// �й�����Э��
		/// </summary>
		CBCProtocal = (Byte)'3',

		/// <summary>
		/// ����Э��
		/// </summary>
		CCBProtocal = (Byte)'4',

		/// <summary>
		/// ����Э��
		/// </summary>
		BOCOMProtocal = (Byte)'5',

		/// <summary>
		/// ����ת��ƽ̨Э��
		/// </summary>
		FBTPlateFormProtocal = (Byte)'X'
	};

	/// <summary>
	/// TFtdcConnectModeType��һ���׽������ӷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumConnectModeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		ShortConnect = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		LongConnect = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSyncModeType��һ���׽���ͨ�ŷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumSyncModeType : Byte
	{
		/// <summary>
		/// �첽
		/// </summary>
		ASync = (Byte)'0',

		/// <summary>
		/// ͬ��
		/// </summary>
		Sync = (Byte)'1'
	};

	/// <summary>
	/// TFtdcBankAccTypeType��һ�������ʺ���������
	/// </summary>
	[Serializable]
	public enum struct EnumBankAccTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFutureAccTypeType��һ���ڻ���˾�ʺ���������
	/// </summary>
	[Serializable]
	public enum struct EnumFutureAccTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',

		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',

		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3'
	};

	/// <summary>
	/// TFtdcOrganStatusType��һ���������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumOrganStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Ready = (Byte)'0',

		/// <summary>
		/// ǩ��
		/// </summary>
		CheckIn = (Byte)'1',

		/// <summary>
		/// ǩ��
		/// </summary>
		CheckOut = (Byte)'2',

		/// <summary>
		/// �����ļ�����
		/// </summary>
		CheckFileArrived = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CheckDetail = (Byte)'4',

		/// <summary>
		/// ��������
		/// </summary>
		DayEndClean = (Byte)'5',

		/// <summary>
		/// ע��
		/// </summary>
		Invalid = (Byte)'9'
	};

	/// <summary>
	/// TFtdcCCBFeeModeType��һ�������շ�ģʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumCCBFeeModeType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ByAmount = (Byte)'1',

		/// <summary>
		/// ���¿���
		/// </summary>
		ByMonth = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCommApiTypeType��һ��ͨѶAPI��������
	/// </summary>
	[Serializable]
	public enum struct EnumCommApiTypeType : Byte
	{
		/// <summary>
		/// �ͻ���
		/// </summary>
		Client = (Byte)'1',

		/// <summary>
		/// �����
		/// </summary>
		Server = (Byte)'2',

		/// <summary>
		/// ����ϵͳ��UserApi
		/// </summary>
		UserApi = (Byte)'3'
	};

	/// <summary>
	/// TFtdcLinkStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumLinkStatusType : Byte
	{
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'1',

		/// <summary>
		/// û������
		/// </summary>
		Disconnected = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPwdFlagType��һ������˶Ա�־����
	/// </summary>
	[Serializable]
	public enum struct EnumPwdFlagType : Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		NoCheck = (Byte)'0',

		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		BlankCheck = (Byte)'1',

		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		EncryptCheck = (Byte)'2'
	};

	/// <summary>
	/// TFtdcSecuAccTypeType��һ���ڻ��ʺ���������
	/// </summary>
	[Serializable]
	public enum struct EnumSecuAccTypeType : Byte
	{
		/// <summary>
		/// �ʽ��ʺ�
		/// </summary>
		AccountID = (Byte)'1',

		/// <summary>
		/// �ʽ𿨺�
		/// </summary>
		CardID = (Byte)'2',

		/// <summary>
		/// �Ϻ��ɶ��ʺ�
		/// </summary>
		SHStockholderID = (Byte)'3',

		/// <summary>
		/// ���ڹɶ��ʺ�
		/// </summary>
		SZStockholderID = (Byte)'4'
	};

	/// <summary>
	/// TFtdcTransferStatusType��һ��ת�˽���״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumTransferStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Repealed = (Byte)'1'
	};

	/// <summary>
	/// TFtdcSponsorTypeType��һ����������
	/// </summary>
	[Serializable]
	public enum struct EnumSponsorTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Bank = (Byte)'1'
	};

	/// <summary>
	/// TFtdcReqRspTypeType��һ��������Ӧ�������
	/// </summary>
	[Serializable]
	public enum struct EnumReqRspTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Request = (Byte)'0',

		/// <summary>
		/// ��Ӧ
		/// </summary>
		Response = (Byte)'1'
	};

	/// <summary>
	/// TFtdcFBTUserEventTypeType��һ������ת���û��¼���������
	/// </summary>
	[Serializable]
	public enum struct EnumFBTUserEventTypeType : Byte
	{
		/// <summary>
		/// ǩ��
		/// </summary>
		SignIn = (Byte)'0',

		/// <summary>
		/// ����ת�ڻ�
		/// </summary>
		FromBankToFuture = (Byte)'1',

		/// <summary>
		/// �ڻ�ת����
		/// </summary>
		FromFutureToBank = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		OpenAccount = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CancelAccount = (Byte)'4',

		/// <summary>
		/// ��������˻�
		/// </summary>
		ChangeAccount = (Byte)'5',

		/// <summary>
		/// ��������ת�ڻ�
		/// </summary>
		RepealFromBankToFuture = (Byte)'6',

		/// <summary>
		/// �����ڻ�ת����
		/// </summary>
		RepealFromFutureToBank = (Byte)'7',

		/// <summary>
		/// ��ѯ�����˻�
		/// </summary>
		QueryBankAccount = (Byte)'8',

		/// <summary>
		/// ��ѯ�ڻ��˻�
		/// </summary>
		QueryFutureAccount = (Byte)'9',

		/// <summary>
		/// ǩ��
		/// </summary>
		SignOut = (Byte)'A',

		/// <summary>
		/// ��Կͬ��
		/// </summary>
		SyncKey = (Byte)'B',

		///ԤԼ����
		ReserveOpenAccount = (Byte)'C',

		///����ԤԼ����
		CancelReserveOpenAccount = (Byte)'D',

		///ԤԼ����ȷ��
		ReserveOpenAccountConfirm = (Byte)'E',

		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcDBOperationType��һ����¼������������
	/// </summary>
	[Serializable]
	public enum struct EnumDBOperationType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Insert = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Update = (Byte)'1',

		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'2'
	};


	/// <summary>
	/// TFtdcSyncFlagType��һ��ͬ���������
	/// </summary>
	[Serializable]
	public enum struct EnumSyncFlagType : Byte
	{
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Yes = (Byte)'0',

		/// <summary>
		/// δͬ��
		/// </summary>
		No = (Byte)'1'
	};


	/// <summary>
	/// TFtdcSyncTypeType��һ��ͬ����������
	/// </summary>
	[Serializable]
	public enum struct EnumSyncTypeType : Byte
	{
		/// <summary>
		/// һ��ͬ��
		/// </summary>
		OneOffSync = (Byte)'0',

		/// <summary>
		/// ��ʱͬ��
		/// </summary>
		TimerSync = (Byte)'1',

		/// <summary>
		/// ��ʱ��ȫͬ��
		/// </summary>
		TimerFullSync = (Byte)'2'
	};

	/// <summary>
	/// TFtdcExDirectionType��һ�����㷽������
	/// </summary>
	[Serializable]
	public enum struct EnumExDirectionType : Byte
	{
		/// <summary>
		/// ���
		/// </summary>
		Settlement = (Byte)'0',

		/// <summary>
		/// �ۻ�
		/// </summary>
		Sale = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFBEExchStatusType��һ�����㽻��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumFBEExchStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// �����ط�
		/// </summary>
		ReExchange = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFBEFileFlagType��һ�������ļ���־����
	/// </summary>
	[Serializable]
	public enum struct EnumFBEFileFlagType : Byte
	{
		/// <summary>
		/// ���ݰ�
		/// </summary>
		DataPackage = (Byte)'0',

		/// <summary>
		/// �ļ�
		/// </summary>
		File = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFBEAlreadyTradeType��һ�������ѽ��ױ�־����
	/// </summary>
	[Serializable]
	public enum struct EnumFBEAlreadyTradeType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotTrade = (Byte)'0',

		/// <summary>
		/// �ѽ���
		/// </summary>
		Trade = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFBEUserEventTypeType��һ�����ڻ����û��¼���������
	/// </summary>
	[Serializable]
	public enum struct EnumFBEUserEventTypeType : Byte
	{
		///ǩ��
		SignIn = (Byte)'0',

		///����
		Exchange = (Byte)'1',

		///�����ط�
		ReExchange = (Byte)'2',

		///�����˻���ѯ
		QueryBankAccount = (Byte)'3',

		///������ϸ��ѯ
		QueryExchDetial = (Byte)'4',

		///������ܲ�ѯ
		QueryExchSummary = (Byte)'5',

		///������ʲ�ѯ
		QueryExchRate = (Byte)'6',

		///�����ļ�֪ͨ
		CheckBankAccount = (Byte)'7',

		///ǩ��
		SignOut = (Byte)'8',

		///����
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcFBEReqFlagType��һ�����㷢�ͱ�־����
	/// </summary>
	[Serializable]
	public enum struct EnumFBEReqFlagType : Byte
	{
		///δ����
		UnProcessed = (Byte)'0',

		///�ȴ�����
		WaitSend = (Byte)'1',

		///���ͳɹ�
		SendSuccess = (Byte)'2',

		///����ʧ��
		SendFailed = (Byte)'3',

		///�ȴ��ط�
		WaitReSend = (Byte)'4',
	};

	/// <summary>
	/// TFtdcNotifyClassType��һ������֪ͨ��������
	/// </summary>
	[Serializable]
	public enum struct EnumNotifyClassType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		NOERROR = (Byte)'0',

		/// <summary>
		/// ��ʾ
		/// </summary>
		Warn = (Byte)'1',

		/// <summary>
		/// ׷��
		/// </summary>
		Call = (Byte)'2',

		/// <summary>
		/// ǿƽ
		/// </summary>
		Force = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CHUANCANG = (Byte)'4',

		/// <summary>
		/// �쳣
		/// </summary>
		Exception = (Byte)'5'
	};

	/// <summary>
	/// TFtdcForceCloseTypeType��һ��ǿƽ����������
	/// </summary>
	[Serializable]
	public enum struct EnumForceCloseTypeType : Byte
	{
		/// <summary>
		/// �ֹ�ǿƽ
		/// </summary>
		Manual = (Byte)'0',

		/// <summary>
		/// ��һͶ���߸���ǿƽ
		/// </summary>
		Single = (Byte)'1',

		/// <summary>
		/// ����Ͷ���߸���ǿƽ
		/// </summary>
		Group = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRiskNotifyMethodType��һ������֪ͨ;������
	/// </summary>
	[Serializable]
	public enum struct EnumRiskNotifyMethodType : Byte
	{
		/// <summary>
		/// ϵͳ֪ͨ
		/// </summary>
		System = (Byte)'0',

		/// <summary>
		/// ����֪ͨ
		/// </summary>
		SMS = (Byte)'1',

		/// <summary>
		/// �ʼ�֪ͨ
		/// </summary>
		EMail = (Byte)'2',

		/// <summary>
		/// �˹�֪ͨ
		/// </summary>
		Manual = (Byte)'3'
	};

	/// <summary>
	/// TFtdcRiskNotifyStatusType��һ������֪ͨ״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumRiskNotifyStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotGen = (Byte)'0',

		/// <summary>
		/// ������δ����
		/// </summary>
		Generated = (Byte)'1',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		SendError = (Byte)'2',

		/// <summary>
		/// �ѷ���δ����
		/// </summary>
		SendOk = (Byte)'3',

		/// <summary>
		/// �ѽ���δȷ��
		/// </summary>
		Received = (Byte)'4',

		/// <summary>
		/// ��ȷ��
		/// </summary>
		Confirmed = (Byte)'5'
	};

	/// <summary>
	/// TFtdcRiskUserEventType��һ������û������¼�����
	/// </summary>
	[Serializable]
	public enum struct EnumRiskUserEventType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ExportData = (Byte)'0'
	};

	/// <summary>
	/// TFtdcConditionalOrderSortTypeType��һ��������������������
	/// </summary>
	[Serializable]
	public enum struct EnumConditionalOrderSortTypeType : Byte
	{
		/// <summary>
		/// ʹ�����¼�����
		/// </summary>
		LastPriceAsc = (Byte)'0',

		/// <summary>
		/// ʹ�����¼۽���
		/// </summary>
		LastPriceDesc = (Byte)'1',

		/// <summary>
		/// ʹ����������
		/// </summary>
		AskPriceAsc = (Byte)'2',

		/// <summary>
		/// ʹ�����۽���
		/// </summary>
		AskPriceDesc = (Byte)'3',

		/// <summary>
		/// ʹ���������
		/// </summary>
		BidPriceAsc = (Byte)'4',

		/// <summary>
		/// ʹ����۽���
		/// </summary>
		BidPriceDesc = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendTypeType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSendTypeType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoSend = (Byte)'0',

		/// <summary>
		/// �ѷ���
		/// </summary>
		Sended = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Generated = (Byte)'2',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		SendFail = (Byte)'3',

		/// <summary>
		/// ���ճɹ�
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		Fail = (Byte)'5',

		/// <summary>
		/// ȡ������
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcClientIDStatusType��һ�����ױ���״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumClientIDStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoApply = (Byte)'1',

		/// <summary>
		/// ���ύ����
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// �ѷ�������
		/// </summary>
		Sended = (Byte)'3',

		/// <summary>
		/// ���
		/// </summary>
		Success = (Byte)'4',

		/// <summary>
		/// �ܾ�
		/// </summary>
		Refuse = (Byte)'5',

		/// <summary>
		/// �ѳ�������
		/// </summary>
		Cancel = (Byte)'6'
	};

	/// <summary>
	/// TFtdcQuestionTypeType��һ��������Ϣ��������
	/// </summary>
	[Serializable]
	public enum struct EnumQuestionTypeType : Byte
	{
		/// <summary>
		/// ��ѡ
		/// </summary>
		Radio = (Byte)'1',

		/// <summary>
		/// ��ѡ
		/// </summary>
		Option = (Byte)'2',

		/// <summary>
		/// ���
		/// </summary>
		Blank = (Byte)'3'
	};

	/// <summary>
	/// TFtdcBusinessTypeType��һ��ҵ����������
	/// </summary>
	[Serializable]
	public enum struct EnumBusinessTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Request = (Byte)'1',

		/// <summary>
		/// Ӧ��
		/// </summary>
		Response = (Byte)'2',

		/// <summary>
		/// ֪ͨ
		/// </summary>
		Notice = (Byte)'3'
	};

	/// <summary>
	/// TFtdcCfmmcReturnCodeType��һ��������ķ���������
	/// </summary>
	[Serializable]
	public enum struct EnumCfmmcReturnCodeType : Byte
	{
		/// <summary>
		/// �ɹ�
		/// </summary>
		Success = (Byte)'0',

		/// <summary>
		/// �ÿͻ��Ѿ��������ڴ�����
		/// </summary>
		Working = (Byte)'1',

		/// <summary>
		/// ����пͻ����ϼ��ʧ��
		/// </summary>
		InfoFail = (Byte)'2',

		/// <summary>
		/// �����ʵ���Ƽ��ʧ��
		/// </summary>
		IDCardFail = (Byte)'3',

		/// <summary>
		/// ��������
		/// </summary>
		OtherFail = (Byte)'4'
	};

	/// <summary>
	/// TFtdcClientTypeType��һ���ͻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumClientTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		Person = (Byte)'1',

		/// <summary>
		/// ��λ
		/// </summary>
		Company = (Byte)'2',

		///����
		Other = (Byte)'3',

		///���ⷨ��
		SpecialOrgan = (Byte)'4',

		///�ʹܻ�
		Asset = (Byte)'5'
	};

	/// <summary>
	/// TFtdcExchangeIDTypeType��һ���������������
	/// </summary>
	[Serializable]
	public enum struct EnumExchangeIDTypeType : Byte
	{
		/// <summary>
		/// �Ϻ��ڻ�������
		/// </summary>
		SHFE = (Byte)'S',

		/// <summary>
		/// ֣����Ʒ������
		/// </summary>
		CZCE = (Byte)'Z',

		/// <summary>
		/// ������Ʒ������
		/// </summary>
		DCE = (Byte)'D',

		/// <summary>
		/// �й������ڻ�������
		/// </summary>
		CFFEX = (Byte)'J',

		///�Ϻ�������Դ�������Ĺɷ����޹�˾
		INE = (Byte)'N'
	};

	/// <summary>
	/// TFtdcExClientIDTypeType��һ�����ױ�����������
	/// </summary>
	[Serializable]
	public enum struct EnumExClientIDTypeType : Byte
	{
		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Arbitrage = (Byte)'2',

		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'3'
	};

	/// <summary>
	/// TFtdcUpdateFlagType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumUpdateFlagType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoUpdate = (Byte)'0',

		/// <summary>
		/// ����ȫ����Ϣ�ɹ�
		/// </summary>
		Success = (Byte)'1',

		/// <summary>
		/// ����ȫ����Ϣʧ��
		/// </summary>
		Fail = (Byte)'2',

		/// <summary>
		/// ���½��ױ���ɹ�
		/// </summary>
		TCSuccess = (Byte)'3',

		/// <summary>
		/// ���½��ױ���ʧ��
		/// </summary>
		TCFail = (Byte)'4',

		/// <summary>
		/// �Ѷ���
		/// </summary>
		Cancel = (Byte)'5'
	};

	/// <summary>
	/// TFtdcApplyOperateIDType��һ�����붯������
	/// </summary>
	[Serializable]
	public enum struct EnumApplyOperateIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		OpenInvestor = (Byte)'1',

		/// <summary>
		/// �޸������Ϣ
		/// </summary>
		ModifyIDCard = (Byte)'2',

		/// <summary>
		/// �޸�һ����Ϣ
		/// </summary>
		ModifyNoIDCard = (Byte)'3',

		/// <summary>
		/// ���뽻�ױ���
		/// </summary>
		ApplyTradingCode = (Byte)'4',

		/// <summary>
		/// �������ױ���
		/// </summary>
		CancelTradingCode = (Byte)'5',

		/// <summary>
		/// ����
		/// </summary>
		CancelInvestor = (Byte)'6',

		///�˻�����
		FreezeAccount = (Byte)'8',

		///���������˻�
		ActiveFreezeAccount = (Byte)'9'
	};

	/// <summary>
	/// TFtdcApplyStatusIDType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumApplyStatusIDType : Byte
	{
		/// <summary>
		/// δ��ȫ
		/// </summary>
		NoComplete = (Byte)'1',

		/// <summary>
		/// ���ύ
		/// </summary>
		Submited = (Byte)'2',

		/// <summary>
		/// �����
		/// </summary>
		Checked = (Byte)'3',

		/// <summary>
		/// �Ѿܾ�
		/// </summary>
		Refused = (Byte)'4',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'5'
	};

	/// <summary>
	/// TFtdcSendMethodType��һ�����ͷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumSendMethodType : Byte
	{
		/// <summary>
		/// ���ӷ���
		/// </summary>
		ByAPI = (Byte)'1',

		/// <summary>
		/// �ļ�����
		/// </summary>
		ByFile = (Byte)'2'
	};

	/// <summary>
	/// TFtdcEventModeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumEventModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		ADD = (Byte)'1',

		/// <summary>
		/// �޸�
		/// </summary>
		UPDATE = (Byte)'2',

		/// <summary>
		/// ɾ��
		/// </summary>
		DELETE = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		CHECK = (Byte)'4',

		///����
		COPY = (Byte)'5',

		///ע��
		CANCEL = (Byte)'6',

		///����
		Reverse = (Byte)'7'
	};

	/// <summary>
	/// TFtdcUOAAutoSendType��һ��ͳһ���������Զ���������
	/// </summary>
	[Serializable]
	public enum struct EnumUOAAutoSendType : Byte
	{
		/// <summary>
		/// �Զ����Ͳ�����
		/// </summary>
		ASR = (Byte)'1',

		/// <summary>
		/// �Զ����ͣ����Զ�����
		/// </summary>
		ASNR = (Byte)'2',

		/// <summary>
		/// ���Զ����ͣ��Զ�����
		/// </summary>
		NSAR = (Byte)'3',

		/// <summary>
		/// ���Զ����ͣ�Ҳ���Զ�����
		/// </summary>
		NSR = (Byte)'4'
	};

	/// <summary>
	/// TFtdcFlowIDType��һ������ID����
	/// </summary>
	[Serializable]
	public enum struct EnumFlowIDType : Byte
	{
		/// <summary>
		/// Ͷ���߶�ӦͶ����������
		/// </summary>
		InvestorGroupFlow = (Byte)'1',

		///Ͷ����������������
		InvestorRate = (Byte)'2',

		///Ͷ������������ģ���ϵ����
		InvestorCommRateModel = (Byte)'3'
	};

	/// <summary>
	/// TFtdcCheckLevelType��һ�����˼�������
	/// </summary>
	[Serializable]
	public enum struct EnumCheckLevelType : Byte
	{
		/// <summary>
		/// �㼶����
		/// </summary>
		Zero = (Byte)'0',

		/// <summary>
		/// һ������
		/// </summary>
		One = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Two = (Byte)'2'
	};

	/// <summary>
	/// TFtdcCheckStatusType��һ�����˼�������
	/// </summary>
	[Serializable]
	public enum struct EnumCheckStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// �ܾ�
		/// </summary>
		Refuse = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Cancel = (Byte)'4'
	};

	/// <summary>
	/// TFtdcUsedStatusType��һ����Ч״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumUsedStatusType : Byte
	{
		/// <summary>
		/// δ��Ч
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// ����Ч
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// ��Чʧ��
		/// </summary>
		Fail = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBankAcountOriginType��һ���˻���Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumBankAcountOriginType : Byte
	{
		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ByAccProperty = (Byte)'0',

		/// <summary>
		/// ����ת��
		/// </summary>
		ByFBTransfer = (Byte)'1'
	};

	/// <summary>
	/// TFtdcMonthBillTradeSumType��һ�����㵥�±��ɽ����ܷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumMonthBillTradeSumType : Byte
	{
		/// <summary>
		/// ͬ��ͬ��Լ
		/// </summary>
		ByInstrument = (Byte)'0',

		/// <summary>
		/// ͬ��ͬ��Լͬ�۸�
		/// </summary>
		ByDayInsPrc = (Byte)'1',

		/// <summary>
		/// ͬ��Լ
		/// </summary>
		ByDayIns = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFBTTradeCodeEnumType��һ�����ڽ��״���ö������
	/// </summary>
	[Serializable]
	public enum struct EnumFBTTradeCodeEnumType : Byte
	{
		/// <summary>
		/// ���з�������ת�ڻ�
		/// </summary>
		BankLaunchBankToBroker_102001 = (Byte)'1',//'102001',

												  /// <summary>
												  /// �ڻ���������ת�ڻ�
												  /// </summary>
												  BrokerLaunchBankToBroker_202001 = (Byte)'2',//'202001',

																							  /// <summary>
																							  /// ���з����ڻ�ת����
																							  /// </summary>
																							  BankLaunchBrokerToBank_102002 = (Byte)'3',//'102002',

																																		/// <summary>
																																		/// �ڻ������ڻ�ת����
																																		/// </summary>
																																		BrokerLaunchBrokerToBank_202002 = (Byte)'4'//'202002'
	};

	/// <summary>
	/// TFtdcOTPTypeType��һ����̬������������
	/// </summary>
	[Serializable]
	public enum struct EnumOTPTypeType : Byte
	{
		/// <summary>
		/// �޶�̬����
		/// </summary>
		NONE = (Byte)'0',

		/// <summary>
		/// ʱ������
		/// </summary>
		TOTP = (Byte)'1'
	};

	/// <summary>
	/// TFtdcOTPStatusType��һ����̬����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumOTPStatusType : Byte
	{
		/// <summary>
		/// δʹ��
		/// </summary>
		Unused = (Byte)'0',

		/// <summary>
		/// ��ʹ��
		/// </summary>
		Used = (Byte)'1',

		/// <summary>
		/// ע��
		/// </summary>
		Disuse = (Byte)'2'
	};

	/// <summary>
	/// TFtdcBrokerUserTypeType��һ�����ù�˾�û���������
	/// </summary>
	[Serializable]
	public enum struct EnumBrokerUserTypeType : Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'1',

		/// <summary>
		/// ����Ա
		/// </summary>
		BrokerUser = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFutureTypeType��һ���ڻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumFutureTypeType : Byte
	{
		/// <summary>
		/// ��Ʒ�ڻ�
		/// </summary>
		Commodity = (Byte)'1',

		/// <summary>
		/// �����ڻ�
		/// </summary>
		Financial = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFundEventTypeType��һ���ʽ���������������
	/// </summary>
	[Serializable]
	public enum struct EnumFundEventTypeType : Byte
	{
		/// <summary>
		/// ת���޶�
		/// </summary>
		Restriction = (Byte)'0',

		/// <summary>
		/// ����ת���޶�
		/// </summary>
		TodayRestriction = (Byte)'1',

		/// <summary>
		/// ������ˮ
		/// </summary>
		Transfer = (Byte)'2',

		/// <summary>
		/// �ʽ𶳽�
		/// </summary>
		Credit = (Byte)'3',

		/// <summary>
		/// Ͷ���߿����ʽ����
		/// </summary>
		InvestorWithdrawAlm = (Byte)'4',

		/// <summary>
		/// ���������ʻ�ת���޶�
		/// </summary>
		BankRestriction = (Byte)'5',

		///����ǩԼ�˻�
		Accountregister = (Byte)'6',

		///�����������
		ExchangeFundIO = (Byte)'7',

		///Ͷ���߳����
		InvestorFundIO = (Byte)'8'
	};

	/// <summary>
	/// TFtdcAccountSourceTypeType��һ���ʽ��˻���Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumAccountSourceTypeType : Byte
	{
		/// <summary>
		/// ����ͬ��
		/// </summary>
		FBTransfer = (Byte)'0',

		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcCodeSourceTypeType��һ�����ױ�����Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumCodeSourceTypeType : Byte
	{
		/// <summary>
		/// ͳһ����
		/// </summary>
		UnifyAccount = (Byte)'0',

		/// <summary>
		/// �ֹ�¼��
		/// </summary>
		ManualEntry = (Byte)'1'
	};

	/// <summary>
	/// TFtdcUserRangeType��һ������Ա��Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumUserRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'0',

		/// <summary>
		/// ��һ����Ա
		/// </summary>
		Single = (Byte)'1'
	};

	/// <summary>
	/// TFtdcByGroupType��һ������ͳ�Ʊ��ͻ�ͳ�Ʒ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumByGroupType : Byte
	{
		/// <summary>
		/// ��Ͷ����ͳ��
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// ����ͳ��
		/// </summary>
		Group = (Byte)'1'
	};

	/// <summary>
	/// TFtdcTradeSumStatModeType��һ������ͳ�Ʊ���Χͳ�Ʒ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumTradeSumStatModeType : Byte
	{
		/// <summary>
		/// ����Լͳ��
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ����Ʒͳ��
		/// </summary>
		Product = (Byte)'2',

		/// <summary>
		/// ��������ͳ��
		/// </summary>
		Exchange = (Byte)'3'
	};

	/// <summary>
	/// TFtdcExprSetModeType��һ�����ڱ��ʽ������������
	/// </summary>
	[Serializable]
	public enum struct EnumExprSetModeType : Byte
	{
		/// <summary>
		/// ������й�������
		/// </summary>
		Relative = (Byte)'1',

		/// <summary>
		/// ��������
		/// </summary>
		Typical = (Byte)'2'
	};

	/// <summary>
	/// TFtdcRateInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumRateInvestorRangeType : Byte
	{
		/// <summary>
		/// ��˾��׼
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// ģ��
		/// </summary>
		Model = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};


	/// <summary>
	/// TFtdcSyncDataStatusType��һ��������ϵͳ����ͬ��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSyncDataStatusType : Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Initialize = (Byte)'0',

		/// <summary>
		/// ͬ����
		/// </summary>
		Settlementin = (Byte)'1',

		/// <summary>
		/// ��ͬ��
		/// </summary>
		Settlemented = (Byte)'2'
	};


	/// <summary>
	/// TFtdcTradeSourceType��һ���ɽ���Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumTradeSourceType : Byte
	{
		/// <summary>
		/// ���Խ�������ͨ�ر�
		/// </summary>
		NORMAL = (Byte)'0',

		/// <summary>
		/// ���Բ�ѯ
		/// </summary>
		QUERY = (Byte)'1'
	};


	/// <summary>
	/// TFtdcFlexStatModeType��һ����Ʒ��Լͳ�Ʒ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumFlexStatModeType : Byte
	{
		/// <summary>
		/// ��Ʒͳ��
		/// </summary>
		Product = (Byte)'1',

		/// <summary>
		/// ������ͳ��
		/// </summary>
		Exchange = (Byte)'2',

		/// <summary>
		/// ͳ������
		/// </summary>
		All = (Byte)'3'
	};

	/// <summary>
	/// TFtdcByInvestorRangeType��һ��Ͷ���߷�Χͳ�Ʒ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumByInvestorRangeType : Byte
	{

		/// <summary>
		/// ����ͳ��
		/// </summary>
		Property = (Byte)'1',

		/// <summary>
		/// ͳ������
		/// </summary>
		All = (Byte)'2'
	};

	/// <summary>
	/// TFtdcPropertyInvestorRangeType��һ��Ͷ���߷�Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumPropertyInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',

		/// <summary>
		/// Ͷ��������
		/// </summary>
		Property = (Byte)'2',

		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFileStatusType��һ���ļ�״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumFileStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NoCreate = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Created = (Byte)'1',

		/// <summary>
		/// ����ʧ��
		/// </summary>
		Failed = (Byte)'2'
	};

	/// <summary>
	/// TFtdcFileGenStyleType��һ���ļ����ɷ�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumFileGenStyleType : Byte
	{
		/// <summary>
		/// �·�
		/// </summary>
		FileTransmit = (Byte)'0',

		/// <summary>
		/// ����
		/// </summary>
		FileGen = (Byte)'1',
	};

	/// <summary>
	/// TFtdcSysOperModeType��һ��ϵͳ��־������������
	/// </summary>
	[Serializable]
	public enum struct EnumSysOperModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Add = (Byte)'1',

		/// <summary>
		/// �޸�
		/// </summary>
		Update = (Byte)'2',

		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'3',

		/// <summary>
		/// ����
		/// </summary>
		Copy = (Byte)'4',

		/// <summary>
		/// ����
		/// </summary>
		AcTive = (Byte)'5',

		/// <summary>
		/// ע��
		/// </summary>
		CanCel = (Byte)'6',

		/// <summary>
		/// ����
		/// </summary>
		ReSet = (Byte)'7'
	};

	/// <summary>
	/// TFtdcSysOperTypeType��һ��ϵͳ��־������������
	/// </summary>
	[Serializable]
	public enum struct EnumSysOperTypeType : Byte
	{
		/// <summary>
		/// �޸Ĳ���Ա����
		/// </summary>
		UpdatePassword = (Byte)'0',

		/// <summary>
		/// ����Ա��֯�ܹ���ϵ
		/// </summary>
		UserDepartment = (Byte)'1',

		/// <summary>
		/// ��ɫ����
		/// </summary>
		RoleManager = (Byte)'2',

		/// <summary>
		/// ��ɫ��������
		/// </summary>
		RoleFunction = (Byte)'3',

		/// <summary>
		/// ������������
		/// </summary>
		BaseParam = (Byte)'4',

		/// <summary>
		/// ���ò���Ա
		/// </summary>
		SetUserID = (Byte)'5',

		/// <summary>
		/// �û���ɫ����
		/// </summary>
		SetUserRole = (Byte)'6',

		/// <summary>
		/// �û�IP����
		/// </summary>
		UserIpRestriction = (Byte)'7',

		/// <summary>
		/// ��֯�ܹ�����
		/// </summary>
		DepartmentManager = (Byte)'8',

		/// <summary>
		/// ��֯�ܹ����ѯ���ิ��
		/// </summary>
		DepartmentCopy = (Byte)'9',

		/// <summary>
		/// ���ױ������
		/// </summary>
		Tradingcode = (Byte)'A',

		/// <summary>
		/// Ͷ����״̬ά��
		/// </summary>
		InvestorStatus = (Byte)'B',

		/// <summary>
		/// Ͷ����Ȩ�޹���
		/// </summary>
		InvestorAuthority = (Byte)'C',

		/// <summary>
		/// ��������
		/// </summary>
		PropertySet = (Byte)'D',

		/// <summary>
		/// ����Ͷ��������
		/// </summary>
		ReSetInvestorPasswd = (Byte)'E',

		/// <summary>
		/// Ͷ���߸�����Ϣά��
		/// </summary>
		InvestorPersonalityInfo = (Byte)'F'
	};

	/// <summary>
	/// TFtdcCSRCDataQueyTypeType��һ���ϱ����ݲ�ѯ��������
	/// </summary>
	[Serializable]
	public enum struct EnumCSRCDataQueyTypeType : Byte
	{
		/// <summary>
		/// ��ѯ��ǰ�����ձ��͵�����
		/// </summary>
		Current = (Byte)'0',

		/// <summary>
		/// ��ѯ��ʷ���͵Ĵ����͹�˾������
		/// </summary>
		History = (Byte)'1',
	};

	/// <summary>
	/// TFtdcFreezeStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumFreezeStatusType : Byte
	{
		/// <summary>
		/// ��Ծ
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Freeze = (Byte)'0',
	};

	/// <summary>
	/// TFtdcStandardStatusType��һ���淶״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumStandardStatusType : Byte
	{
		/// <summary>
		/// �ѹ淶
		/// </summary>
		Standard = (Byte)'0',

		/// <summary>
		/// δ�淶
		/// </summary>
		NonStandard = (Byte)'1',
	};

	/// <summary>
	/// TFtdcRightParamTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumRightParamTypeType : Byte
	{
		/// <summary>
		/// ���߻�
		/// </summary>
		Freeze = (Byte)'1',

		/// <summary>
		/// �������߻�
		/// </summary>
		FreezeActive = (Byte)'2',

		///����Ȩ������
		OpenLimit = (Byte)'3',

		///�������Ȩ������
		RelieveOpenLimit = (Byte)'4'
	};

	/// <summary>
	/// TFtdcDataStatusType��һ����ϴǮ��˱�����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumDataStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',

		/// <summary>
		/// ��ɾ��
		/// </summary>
		Deleted = (Byte)'1',
	};


	/// <summary>
	/// TFtdcAMLCheckStatusType��һ�����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumAMLCheckStatusType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		Init = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		Checking = (Byte)'1',

		/// <summary>
		/// �Ѹ���
		/// </summary>
		Checked = (Byte)'2',

		/// <summary>
		/// �ܾ��ϱ�
		/// </summary>
		RefuseReport = (Byte)'3',
	};


	/// <summary>
	/// TFtdcAmlDateTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumAmlDateTypeType : Byte
	{
		/// <summary>
		/// �������
		/// </summary>
		DrawDay = (Byte)'0',

		/// <summary>
		/// ��������
		/// </summary>
		TouchDay = (Byte)'1',
	};

	/// <summary>
	/// TFtdcAmlCheckLevelType��һ����˼�������
	/// </summary>
	[Serializable]
	public enum struct EnumAmlCheckLevelType : Byte
	{
		/// <summary>
		/// �㼶���
		/// </summary>
		CheckLevel0 = (Byte)'0',

		/// <summary>
		/// һ�����
		/// </summary>
		CheckLevel1 = (Byte)'1',

		/// <summary>
		/// �������
		/// </summary>
		CheckLevel2 = (Byte)'2',

		/// <summary>
		/// �������
		/// </summary>
		CheckLevel3 = (Byte)'3',
	};


	/// <summary>
	/// TFtdcExportFileTypeType��һ�������ļ���������
	/// </summary>
	[Serializable]
	public enum struct EnumExportFileTypeType : Byte
	{
		/// <summary>
		/// CSV
		/// </summary>
		CSV = (Byte)'0',

		/// <summary>
		/// Excel
		/// </summary>
		EXCEL = (Byte)'1',

		/// <summary>
		/// DBF
		/// </summary>
		DBF = (Byte)'2',
	};

	/// <summary>
	/// TFtdcSettleManagerTypeType��һ������������������
	/// </summary>
	[Serializable]
	public enum struct EnumSettleManagerTypeType : Byte
	{
		/// <summary>
		/// ����ǰ׼��
		/// </summary>
		Before = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Settlement = (Byte)'2',

		/// <summary>
		/// �����˶�
		/// </summary>
		After = (Byte)'3',

		/// <summary>
		/// �������
		/// </summary>
		Settlemented = (Byte)'4',
	};


	/// <summary>
	/// TFtdcSettleManagerLevelType��һ���������õȼ�����
	/// </summary>
	[Serializable]
	public enum struct EnumSettleManagerLevelType : Byte
	{
		/// <summary>
		/// ��Ҫ
		/// </summary>
		Must = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Alarm = (Byte)'2',

		/// <summary>
		/// ��ʾ
		/// </summary>
		Prompt = (Byte)'3',

		/// <summary>
		/// �����
		/// </summary>
		Ignore = (Byte)'4',
	};

	/// <summary>
	/// TFtdcSettleManagerGroupType��һ��ģ���������
	/// </summary>
	[Serializable]
	public enum struct EnumSettleManagerGroupType : Byte
	{
		/// <summary>
		/// �������˶�
		/// </summary>
		Exhcange = (Byte)'1',

		/// <summary>
		/// �ڲ��˶�
		/// </summary>
		ASP = (Byte)'2',

		/// <summary>
		/// �ϱ����ݺ˶�
		/// </summary>
		CSRC = (Byte)'3',
	};

	/// <summary>
	/// TFtdcLimitUseTypeType��һ����ֵ���ʹ����������
	/// </summary>
	[Serializable]
	public enum struct EnumLimitUseTypeType : Byte
	{
		/// <summary>
		/// ���ظ�ʹ��
		/// </summary>
		Repeatable = (Byte)'1',

		/// <summary>
		/// �����ظ�ʹ��
		/// </summary>
		Unrepeatable = (Byte)'2',
	};


	/// <summary>
	/// TFtdcDataResourceType��һ��������Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumDataResourceType : Byte
	{
		/// <summary>
		/// ��ϵͳ
		/// </summary>
		Settle = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		Exchange = (Byte)'2',

		/// <summary>
		/// ��������
		/// </summary>
		CSRC = (Byte)'3',
	};

	/// <summary>
	/// TFtdcMarginTypeType��һ����֤����������
	/// </summary>
	[Serializable]
	public enum struct EnumMarginTypeType : Byte
	{
		/// <summary>
		/// ��������֤����
		/// </summary>
		ExchMarginRate = (Byte)'0',

		/// <summary>
		/// Ͷ���߱�֤����
		/// </summary>
		InstrMarginRate = (Byte)'1',

		/// <summary>
		/// Ͷ���߽��ױ�֤����
		/// </summary>
		InstrMarginRateTrade = (Byte)'2',
	};


	/// <summary>
	/// TFtdcActiveTypeType��һ����Ч��������
	/// </summary>
	[Serializable]
	public enum struct EnumActiveTypeType : Byte
	{
		/// <summary>
		/// ��������Ч
		/// </summary>
		Intraday = (Byte)'1',

		/// <summary>
		/// ������Ч
		/// </summary>
		Long = (Byte)'2',
	};

	/// <summary>
	/// TFtdcMarginRateTypeType��һ����ͻ��֤������������
	/// </summary>
	[Serializable]
	public enum struct EnumMarginRateTypeType : Byte
	{
		/// <summary>
		/// ��������֤����
		/// </summary>
		Exchange = (Byte)'1',

		/// <summary>
		/// Ͷ���߱�֤����
		/// </summary>
		Investor = (Byte)'2',

		/// <summary>
		/// Ͷ���߽��ױ�֤����
		/// </summary>
		InvestorTrade = (Byte)'3',
	};

	/// <summary>
	/// TFtdcBackUpStatusType��һ����������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumBackUpStatusType : Byte
	{
		/// <summary>
		/// δ���ɱ�������
		/// </summary>
		UnBak = (Byte)'0',

		/// <summary>
		/// ��������������
		/// </summary>
		BakUp = (Byte)'1',

		/// <summary>
		/// �����ɱ�������
		/// </summary>
		BakUped = (Byte)'2',

		/// <summary>
		/// ��������ʧ��
		/// </summary>
		BakFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcInitSettlementType��һ�������ʼ��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumInitSettlementType : Byte
	{
		/// <summary>
		/// �����ʼ��δ��ʼ
		/// </summary>
		UnInitialize = (Byte)'0',

		/// <summary>
		/// �����ʼ����
		/// </summary>
		Initialize = (Byte)'1',

		/// <summary>
		/// �����ʼ�����
		/// </summary>
		Initialized = (Byte)'2',
	};

	/// <summary>
	/// TFtdcReportStatusType��һ��������������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumReportStatusType : Byte
	{
		/// <summary>
		/// δ���ɱ�������
		/// </summary>
		NoCreate = (Byte)'0',

		/// <summary>
		/// ��������������
		/// </summary>
		Create = (Byte)'1',

		/// <summary>
		/// �����ɱ�������
		/// </summary>
		Created = (Byte)'2',

		/// <summary>
		/// ���ɱ�������ʧ��
		/// </summary>
		CreateFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcSaveStatusType��һ�����ݹ鵵״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSaveStatusType : Byte
	{
		/// <summary>
		/// �鵵δ���
		/// </summary>
		UnSaveData = (Byte)'0',

		/// <summary>
		/// �鵵���
		/// </summary>
		SaveDatad = (Byte)'1',
	};


	/// <summary>
	/// TFtdcSettArchiveStatusType��һ������ȷ�����ݹ鵵״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumSettArchiveStatusType : Byte
	{
		/// <summary>
		/// δ�鵵����
		/// </summary>
		UnArchived = (Byte)'0',

		/// <summary>
		/// ���ݹ鵵��
		/// </summary>
		Archiving = (Byte)'1',

		/// <summary>
		/// �ѹ鵵����
		/// </summary>
		Archived = (Byte)'2',

		/// <summary>
		/// �鵵����ʧ��
		/// </summary>
		ArchiveFail = (Byte)'3',
	};

	/// <summary>
	/// TFtdcCTPTypeType��һ��CTP����ϵͳ��������
	/// </summary>
	[Serializable]
	public enum struct EnumCTPTypeType : Byte
	{
		/// <summary>
		/// δ֪����
		/// </summary>
		Unkown = (Byte)'0',

		/// <summary>
		/// ������
		/// </summary>
		MainCenter = (Byte)'1',

		/// <summary>
		/// ������
		/// </summary>
		BackUp = (Byte)'2',
	};

	/// <summary>
	/// TFtdcCloseDealTypeType��һ��ƽ�ִ�����������
	/// </summary>
	[Serializable]
	public enum struct EnumCloseDealTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// Ͷ��ƽ������
		/// </summary>
		SpecFirst = (Byte)'1'
	};


	/// <summary>
	/// TFtdcMortgageFundUseRangeType��һ��������Ѻ�ʽ���÷�Χ����
	/// </summary>
	[Serializable]
	public enum struct EnumMortgageFundUseRangeType : Byte
	{
		///����ʹ��
		None = (Byte)'0',

		///���ڱ�֤��
		Margin = (Byte)'1',

		///���������ѡ�ӯ������֤��
		All = (Byte)'2',

		///����ҷ���3
		CNY3 = (Byte)'3',
	};

	/// <summary>
	/// TFtdcSpecProductTypeType��һ�������Ʒ��������
	/// </summary>
	[Serializable]
	public enum struct EnumSpecProductTypeType : Byte
	{
		///֣�����ױ���Ʒ
		CzceHedge = (Byte)'1',

		///������Ѻ��Ʒ
		IneForeignCurrency = (Byte)'2',

		///�������߿�ƽ�ֲ�Ʒ
		DceOpenClose = (Byte)'3'
	};

	/// <summary>
	/// TFtdcFundMortgageTypeType��һ��������Ѻ��������
	/// </summary>
	[Serializable]
	public enum struct EnumFundMortgageTypeType : Byte
	{
		///��Ѻ
		Mortgage = (Byte)'1',

		///����
		Redemption = (Byte)'2',
	};

	/// <summary>
	/// TFtdcAccountSettlementParamIDType��һ��Ͷ�����˻����������������
	/// </summary>
	[Serializable]
	public enum struct EnumAccountSettlementParamIDType : Byte
	{
		///������֤��
		BaseMargin = (Byte)'1',

		///���Ȩ���׼
		LowestInterest = (Byte)'2',
	};

	/// <summary>
	/// TFtdcFundMortDirectionType��һ��������Ѻ��������
	/// </summary>
	[Serializable]
	public enum struct EnumFundMortDirectionType : Byte
	{
		///��������
		In = (Byte)'1',

		///�����ʳ�
		Out = (Byte)'2',
	};


	/// <summary>
	/// TFtdcBusinessClassType��һ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumBusinessClassType : Byte
	{
		///ӯ��
		Profit = (Byte)'0',

		///����
		Loss = (Byte)'1',

		///����
		Other = (Byte)'Z'
	};

	/// <summary>
	/// TFtdcSwapSourceTypeType��һ������������Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumSwapSourceTypeType : Byte
	{
		///�ֹ�
		Manual = (Byte)'0',

		///�Զ�����
		Automatic = (Byte)'1',
	};

	/// <summary>
	/// TFtdcCurrExDirectionType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumCurrExDirectionType : Byte
	{
		///���
		Settlement = (Byte)'0',

		///�ۻ�
		Sale = (Byte)'1',
	};

	/// <summary>
	/// TFtdcCurrencySwapStatusType��һ������״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumCurrencySwapStatusType : Byte
	{
		///��¼��
		Entry = (Byte)'1',

		///�����
		Approve = (Byte)'2',

		///�Ѿܾ�
		Refuse = (Byte)'3',

		///�ѳ���
		Revoke = (Byte)'4',

		///�ѷ���
		Send = (Byte)'5',

		///����ɹ�
		Success = (Byte)'6',

		///����ʧ��
		Failure = (Byte)'7'
	};

	/// <summary>
	/// TFtdcReqFlagType��һ�����㷢�ͱ�־����
	/// </summary>
	[Serializable]
	public enum struct EnumReqFlagType : Byte
	{
		///δ����
		NoSend = (Byte)'0',

		///���ͳɹ�
		SendSuccess = (Byte)'1',

		///����ʧ��
		SendFailed = (Byte)'2',

		///�ȴ��ط�
		WaitReSend = (Byte)'3'
	};

	/// <summary>
	/// TFtdcResFlagType��һ�����㷵�سɹ���־����
	/// </summary>
	[Serializable]
	public enum struct EnumResFlagType : Byte
	{
		///�ɹ�
		Success = (Byte)'0',

		///�˻�����
		InsuffiCient = (Byte)'1',

		///���׽��δ֪
		UnKnown = (Byte)'8',
	};

	/// <summary>
	/// TFtdcExStatusType��һ���޸�״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumExStatusType : Byte
	{
		///�޸�ǰ
		Before = (Byte)'0',

		///�޸ĺ�
		After = (Byte)'1',
	};

	/// <summary>
	/// TFtdcClientRegionType��һ�������ͻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumClientRegionType : Byte
	{
		///���ڿͻ�
		Domestic = (Byte)'1',

		///�۰�̨�ͻ�
		GMT = (Byte)'2',

		///����ͻ�
		Foreign = (Byte)'3',
	};

	/// <summary>
	///TFtdcHasBoardType��һ���Ƿ��ж��»�����
	/// </summary>
	[Serializable]
	public enum struct EnumHasBoardType : Byte
	{
		///û��
		No = (Byte)'0',

		///��
		Yes = (Byte)'1',
	};

	/// <summary>
	/// TFtdcStartModeType��һ������ģʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumStartModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'1',

		/// <summary>
		/// Ӧ��
		/// </summary>
		Emerge = (Byte)'2',

		/// <summary>
		/// �ָ�
		/// </summary>
		Restore = (Byte)'3',
	};


	/// <summary>
	/// TFtdcTemplateTypeType��һ��ģ����������
	/// </summary>
	[Serializable]
	public enum struct EnumTemplateTypeType : Byte
	{
		/// <summary>
		/// ȫ��
		/// </summary>
		Full = (Byte)'1',

		/// <summary>
		/// ����
		/// </summary>
		Increment = (Byte)'2',

		/// <summary>
		/// ����
		/// </summary>
		BackUp = (Byte)'3',
	};

	/// <summary>
	/// TFtdcLoginModeType��һ����¼ģʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumLoginModeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Trade = (Byte)'0',

		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'1',
	};

	/// <summary>
	/// TFtdcPromptTypeType��һ��������ʾ��������
	/// </summary>
	[Serializable]
	public enum struct EnumPromptTypeType : Byte
	{
		/// <summary>
		/// ��Լ������
		/// </summary>
		Instrument = (Byte)'1',

		/// <summary>
		/// ��֤��ֶ���Ч
		/// </summary>
		Margin = (Byte)'2',
	};

	/// <summary>
	/// TFtdcHasTrusteeType��һ���Ƿ����й�������
	/// </summary>
	[Serializable]
	public enum struct EnumHasTrusteeType : Byte
	{
		///û��
		No = (Byte)'0',

		///��
		Yes = (Byte)'1',
	};

	/// <summary>
	/// TFtdcAmTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumAmTypeType : Byte
	{
		///����
		Bank = (Byte)'1',

		///֤ȯ��˾
		Securities = (Byte)'2',

		///����˾
		Fund = (Byte)'3',

		///���չ�˾
		Insurance = (Byte)'4',

		///���й�˾
		Trust = (Byte)'5',

		///����
		Other = (Byte)'9',
	};

	/// <summary>
	/// TFtdcCusAccountTypeType��һ�������˻���������
	/// </summary>
	[Serializable]
	public enum struct EnumCusAccountTypeType : Byte
	{
		///�ڻ������˻�
		Futures = (Byte)'1',

		///���ڻ��ʹ�ҵ���µ��ʹܽ����˻�
		AssetmgrFuture = (Byte)'2',

		///�ۺ����ʹ�ҵ���µ��ڻ��ʹ��й��˻�
		AssetmgrTrustee = (Byte)'3',

		///�ۺ����ʹ�ҵ���µ��ʽ���ת�˻�
		AssetmgrTransfer = (Byte)'4',
	};

	/// <summary>
	/// TFtdcLanguageTypeType��һ��֪ͨ������������
	/// </summary>
	[Serializable]
	public enum struct EnumLanguageTypeType : Byte
	{
		///����
		Chinese = (Byte)'1',

		///Ӣ��
		English = (Byte)'2',
	};

	/// <summary>
	/// TFtdcAssetmgrClientTypeType��һ���ʲ�����ͻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumAssetmgrClientTypeType : Byte
	{
		///�����ʹܿͻ�
		Person = (Byte)'1',

		///��λ�ʹܿͻ�
		Organ = (Byte)'2',

		///���ⵥλ�ʹܿͻ�
		SpecialOrgan = (Byte)'4',
	};


	/// <summary>
	/// TFtdcAssetmgrTypeType��һ��Ͷ����������
	/// </summary>
	[Serializable]
	public enum struct EnumAssetmgrTypeType : Byte
	{
		///�ڻ���
		Futures = (Byte)'3',

		///�ۺ���
		SpecialOrgan = (Byte)'4',
	};

	/// <summary>
	/// TFtdcCheckInstrTypeType��һ����Լ�Ƚ���������
	/// </summary>
	[Serializable]
	public enum struct EnumCheckInstrTypeType : Byte
	{
		///��Լ������������
		HasExch = (Byte)'0',

		///��Լ��ϵͳ������
		HasATP = (Byte)'1',

		///��Լ�Ƚϲ�һ��
		HasDiff = (Byte)'2',
	};

	/// <summary>
	/// TFtdcDeliveryTypeType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumDeliveryTypeType : Byte
	{
		///�ֹ�����
		HandDeliv = (Byte)'1',

		///���ڽ���
		PersonDeliv = (Byte)'2',
	};

	/// <summary>
	/// TFtdcMaxMarginSideAlgorithmType��һ�����߱�֤���㷨����
	/// </summary>
	[Serializable]
	public enum struct EnumMaxMarginSideAlgorithmType : Byte
	{
		///��ʹ�ô��߱�֤���㷨
		NO = (Byte)'0',

		///ʹ�ô��߱�֤���㷨
		YES = (Byte)'1',
	};

	/// <summary>
	/// TFtdcDAClientTypeType��һ���ʲ�����ͻ���������
	/// </summary>
	[Serializable]
	public enum struct EnumDAClientTypeType : Byte
	{
		///��Ȼ��
		Person = (Byte)'0',

		///����
		Company = (Byte)'1',

		///����
		Other = (Byte)'2',
	};

	/// <summary>
	/// TFtdcUOAAssetmgrTypeType��һ��Ͷ����������
	/// </summary>
	[Serializable]
	public enum struct EnumUOAAssetmgrTypeType : Byte
	{
		///�ڻ���
		Futures = (Byte)'1',

		///�ۺ���
		SpecialOrgan = (Byte)'2',
	};

	/// <summary>
	/// TFtdcDirectionEnType��һ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumDirectionEnType : Byte
	{
		///Buy
		Buy = (Byte)'0',

		///Sell
		Sell = (Byte)'1',
	};


	/// <summary>
	/// TFtdcOffsetFlagEnType��һ����ƽ��־����
	/// </summary>
	[Serializable]
	public enum struct EnumOffsetFlagEnType : Byte
	{
		///Position Opening
		Open = (Byte)'0',

		///Position Close
		Close = (Byte)'1',

		///Forced Liquidation
		ForceClose = (Byte)'2',

		///Close Today
		CloseToday = (Byte)'3',

		///Close Prev
		CloseYesterday = (Byte)'4',

		///Forced Reduction
		ForceOff = (Byte)'5',

		///Local Forced Liquidation
		LocalForceClose = (Byte)'6',
	};

	/// <summary>
	/// TFtdcHedgeFlagEnType��һ��Ͷ���ױ���־����
	/// </summary>
	[Serializable]
	public enum struct EnumHedgeFlagEnType : Byte
	{
		///Speculation
		Speculation = (Byte)'1',

		///Arbitrage
		Arbitrage = (Byte)'2',

		///Hedge
		Hedge = (Byte)'3',
	};


	/// <summary>
	/// TFtdcFundIOTypeEnType��һ���������������
	/// </summary>
	[Serializable]
	public enum struct EnumFundIOTypeEnType : Byte
	{
		///Deposit/Withdrawal
		FundIO = (Byte)'1',

		///Bank-Futures Transfer
		Transfer = (Byte)'2',

		///Bank-Futures FX Exchange
		SwapCurrency = (Byte)'3',
	};


	/// <summary>
	/// TFtdcFundTypeEnType��һ���ʽ���������
	/// </summary>
	[Serializable]
	public enum struct EnumFundTypeEnType : Byte
	{
		///Bank Deposit
		Deposite = (Byte)'1',

		///Payment/Fee
		ItemFund = (Byte)'2',

		///Brokerage Adj
		Company = (Byte)'3',

		///Internal Transfer
		InnerTransfer = (Byte)'4',
	};


	/// <summary>
	/// TFtdcFundDirectionEnType��һ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumFundDirectionEnType : Byte
	{
		///Deposit
		In = (Byte)'1',

		///Withdrawal
		Out = (Byte)'2',
	};

	/// <summary>
	/// TFtdcFundMortDirectionEnType��һ��������Ѻ��������
	/// </summary>
	[Serializable]
	public enum struct EnumFundMortDirectionEnType : Byte
	{
		///Pledge
		In = (Byte)'1',

		///Redemption
		Out = (Byte)'2',
	};


	/// <summary>
	/// TFtdcOptionsTypeType��һ����Ȩ��������
	/// </summary>
	[Serializable]
	public enum struct EnumOptionsTypeType : Byte
	{
		///����
		CallOptions = (Byte)'1',

		///����
		PutOptions = (Byte)'2',
	};

	/// <summary>
	/// TFtdcStrikeModeType��һ��ִ�з�ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumStrikeModeType : Byte
	{
		///ŷʽ
		Continental = (Byte)'0',

		///��ʽ
		American = (Byte)'1',

		///��Ľ��
		Bermuda = (Byte)'2',
	};

	/// <summary>
	/// TFtdcStrikeTypeType��һ��ִ����������
	/// </summary>
	[Serializable]
	public enum struct EnumStrikeTypeType : Byte
	{
		///����Գ�
		Hedge = (Byte)'0',

		///ƥ��ִ��
		Match = (Byte)'1',
	};

	/// <summary>
	/// TFtdcApplyTypeType��һ���н�����Ȩ����ִ��������������
	/// </summary>
	[Serializable]
	public enum struct EnumApplyTypeType : Byte
	{
		///��ִ������
		NotStrikeNum = (Byte)'4',
	};

	/// <summary>
	/// TFtdcGiveUpDataSourceType��һ������ִ������������Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumGiveUpDataSourceType : Byte
	{
		///ϵͳ����
		Gen = (Byte)'0',

		///�ֹ����
		Hand = (Byte)'1',
	};

	/// <summary>
	/// TFtdcExecResultType��һ��ִ�н������
	/// </summary>
	[Serializable]
	public enum struct EnumExecResultType : Byte
	{
		///û��ִ��
		NoExec = (Byte)'n',

		///�Ѿ�ȡ��
		Canceled = (Byte)'c',

		///ִ�гɹ�
		OK = (Byte)'0',

		///��Ȩ�ֲֲ���
		NoPosition = (Byte)'1',

		///�ʽ𲻹�
		NoDeposit = (Byte)'2',

		///��Ա������
		NoParticipant = (Byte)'3',

		///�ͻ�������
		NoClient = (Byte)'4',

		///��Լ������
		NoInstrument = (Byte)'6',

		///û��ִ��Ȩ��
		NoRight = (Byte)'7',

		///�����������
		InvalidVolume = (Byte)'8',

		///û���㹻����ʷ�ɽ�
		NoEnoughHistoryTrade = (Byte)'9',

		///δ֪
		Unknown = (Byte)'a'
	};


	/// <summary>
	/// TFtdcCombinationTypeType��һ�������������
	/// </summary>
	[Serializable]
	public enum struct EnumCombinationTypeType : Byte
	{
		///�ڻ����
		Future = (Byte)'0',

		///��ֱ�۲�BUL
		BUL = (Byte)'1',

		///��ֱ�۲�BER
		BER = (Byte)'2',

		///��ʽ���
		STD = (Byte)'3',

		///���ʽ���
		STG = (Byte)'4',

		///�������
		PRT = (Byte)'5',

		///ʱ��۲����
		CLD = (Byte)'6',
	};

	/// <summary>
	/// TFtdcOptionRoyaltyPriceTypeType��һ����ȨȨ����۸���������
	/// </summary>
	[Serializable]
	public enum struct EnumOptionRoyaltyPriceTypeType : Byte
	{
		///������
		PreSettlementPrice = (Byte)'1',

		///���ּ�
		OpenPrice = (Byte)'4',

		///���¼��������۽ϴ�ֵ
		MaxPreSettlementPrice = (Byte)'5',
	};

	/// <summary>
	/// TFtdcBalanceAlgorithmType��һ��Ȩ���㷨����
	/// </summary>
	[Serializable]
	public enum struct EnumBalanceAlgorithmType : Byte
	{
		///��������Ȩ��ֵӯ��
		Default = (Byte)'1',

		///������Ȩ��ֵ����
		IncludeOptValLost = (Byte)'2',
	};

	/// <summary>
	/// TFtdcActionTypeType��һ��ִ����������
	/// </summary>
	[Serializable]
	public enum struct EnumActionTypeType : Byte
	{
		///ִ��
		Exec = (Byte)'1',

		///����
		Abandon = (Byte)'2',
	};

	/// <summary>
	/// TFtdcForQuoteStatusType��һ��ѯ��״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumForQuoteStatusType : Byte
	{
		///�Ѿ��ύ
		Submitted = (Byte)'a',

		///�Ѿ�����
		Accepted = (Byte)'b',

		///�Ѿ����ܾ�
		Rejected = (Byte)'c',
	};

	/// <summary>
	/// TFtdcValueMethodType��һ��ȡֵ��ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumValueMethodType : Byte
	{
		///������ֵ
		Absolute = (Byte)'0',

		///������
		Ratio = (Byte)'1',
	};

	/// <summary>
	/// TFtdcExecOrderPositionFlagType��һ����Ȩ��Ȩ���Ƿ����ڻ�ͷ��ı������
	/// </summary>
	[Serializable]
	public enum struct EnumExecOrderPositionFlagType : Byte
	{
		///����
		Reserve = (Byte)'0',

		///������
		UnReserve = (Byte)'1',
	};

	/// <summary>
	/// TFtdcExecOrderCloseFlagType��һ����Ȩ��Ȩ�����ɵ�ͷ���Ƿ��Զ�ƽ������
	/// </summary>
	[Serializable]
	public enum struct EnumExecOrderCloseFlagType : Byte
	{
		///�Զ�ƽ��
		AutoClose = (Byte)'0',

		///�����Զ�ƽ��
		NotToClose = (Byte)'1',
	};

	/// <summary>
	/// TFtdcProductTypeType��һ����Ʒ��������
	/// </summary>
	[Serializable]
	public enum struct EnumProductTypeType : Byte
	{
		///�ڻ�
		Futures = (Byte)'1',

		///��Ȩ
		Options = (Byte)'2',
	};


	/// <summary>
	/// TFtdcCZCEUploadFileNameType��һ��֣���������ļ�������
	/// </summary>
	[Serializable]
	public enum struct EnumCZCEUploadFileNameType : Byte
	{
		///^\d{8}_zz_\d{4}
		O = (Byte)'O',

		///^\d{8}�ɽ���
		T = (Byte)'T',

		///^\d{8}���ȳֱֲ�new
		P = (Byte)'P',

		///^\d{8}��ƽ���˽��
		N = (Byte)'N',

		///^\d{8}ƽ�ֱ�
		L = (Byte)'L',

		///^\d{8}�ʽ��
		F = (Byte)'F',

		///^\d{8}��ϳֱֲ�
		C = (Byte)'C',

		///^\d{8}��֤�������
		M = (Byte)'M'
	};

	/// <summary>
	/// TFtdcDCEUploadFileNameType��һ�������������ļ�������
	/// </summary>
	[Serializable]
	public enum struct EnumDCEUploadFileNameType : Byte
	{
		///^\d{8}_dl_\d{3}
		O = (Byte)'O',

		///^\d{8}_�ɽ���
		T = (Byte)'T',

		///^\d{8}_�ֱֲ�
		P = (Byte)'P',

		///^\d{8}_�ʽ�����
		F = (Byte)'F',

		///^\d{8}_�Ż���ϳֲ���ϸ��
		C = (Byte)'C',

		///^\d{8}_�ֲ���ϸ��
		D = (Byte)'D',

		///^\d{8}_��֤�������
		M = (Byte)'M',

		///^\d{8}_��Ȩִ�б�
		S = (Byte)'S'
	};

	/// <summary>
	/// TFtdcSHFEUploadFileNameType��һ�������������ļ�������
	/// </summary>
	[Serializable]
	public enum struct EnumSHFEUploadFileNameType : Byte
	{
		///^\d{4}_\d{8}_\d{8}_DailyFundChg
		O = (Byte)'O',

		///^\d{4}_\d{8}_\d{8}_Trade
		T = (Byte)'T',

		///^\d{4}_\d{8}_\d{8}_SettlementDetail
		P = (Byte)'P',

		///^\d{4}_\d{8}_\d{8}_Capital
		F = (Byte)'F'
	};

	/// <summary>
	/// TFtdcCFFEXUploadFileNameType��һ���н��������ļ�������
	/// </summary>
	[Serializable]
	public enum struct EnumCFFEXUploadFileNameType : Byte
	{
		///^\d{4}_SG\d{1}_\d{8}_\d{1}_Trade
		T = (Byte)'T',

		///^\d{4}_SG\d{1}_\d{8}_\d{1}_SettlementDetail
		P = (Byte)'P',

		///^\d{4}_SG\d{1}_\d{8}_\d{1}_Capital
		F = (Byte)'F',

		///^\d{4}_SG\d{1}_\d{8}_\d{1}_OptionExec
		S = (Byte)'S'
	};

	/// <summary>
	/// TFtdcCombDirectionType��һ�����ָ�������
	/// </summary>
	[Serializable]
	public enum struct EnumCombDirectionType : Byte
	{
		///�������
		Comb = (Byte)'0',

		///������
		UnComb = (Byte)'1'
	};

	/// <summary>
	/// TFtdcStrikeOffsetTypeType��һ����Ȩƫ����������
	/// </summary>
	[Serializable]
	public enum struct EnumStrikeOffsetTypeType : Byte
	{
		///ʵֵ��
		RealValue = (Byte)'1',

		///ӯ����
		ProfitValue = (Byte)'2',

		///ʵֵ����
		RealRatio = (Byte)'3',

		///ӯ������
		ProfitRatio = (Byte)'4'
	};

	/// <summary>
	/// TFtdcReserveOpenAccStasType��һ��ԤԼ����״̬����
	/// </summary>
	[Serializable]
	public enum struct EnumReserveOpenAccStasType : Byte
	{
		///�ȴ�������
		Processing = (Byte)'0',

		///�ѳ���
		Cancelled = (Byte)'1',

		///�ѿ���
		Opened = (Byte)'2',

		///��Ч����
		Invalid = (Byte)'3'
	};

	/// <summary>
	/// TFtdcWeakPasswordSourceType��һ����������Դ����
	/// </summary>
	[Serializable]
	public enum struct EnumWeakPasswordSourceType : Byte
	{
		///�������
		Lib = (Byte)'1',

		///�ֹ�¼��
		Manual = (Byte)'2',
	};

	/// <summary>
	/// TFtdcOptSelfCloseFlagType��һ����Ȩ��Ȩ��ͷ���Ƿ��ԶԳ�����
	/// </summary>
	[Serializable]
	public enum struct EnumOptSelfCloseFlagType : Byte
	{
		///�ԶԳ���Ȩ��λ
		CloseSelfOptionPosition = (Byte)'1',

		///������Ȩ��λ
		ReserveOptionPosition = (Byte)'2',

		///�ԶԳ�������Լ����ڻ���λ
		SellCloseSelfFuturePosition = (Byte)'3',

		///����������Լ����ڻ���λ
		ReserveFuturePosition = (Byte)'4'
	};

	/// <summary>
	/// TFtdcBizTypeType��һ��ҵ����������
	/// </summary>
	[Serializable]
	public enum struct EnumBizTypeType : Byte
	{
		///�ڻ�
		Future = (Byte)'1',

		///֤ȯ
		Stock = (Byte)'2',
	};

	/// <summary>
	/// TFtdcAppTypeType��һ���û�App��������
	/// </summary>
	[Serializable]
	public enum struct EnumAppTypeType : Byte
	{
		///ֱ����Ͷ����
		Investor = (Byte)'1',

		///Ϊÿ��Ͷ���߶��������ӵ��м�
		InvestorRelay = (Byte)'2',

		///����Ͷ���߹���һ������Ա���ӵ��м�
		OperatorRelay = (Byte)'3',

		///δ֪
		UnKnown = (Byte)'4'
	};

	/// <summary>
	/// TFtdcResponseValueType��һ��Ӧ����������
	/// </summary>
	[Serializable]
	public enum struct EnumResponseValueType : Byte
	{
		///���ɹ�
		Right = (Byte)'0',

		///���ʧ��
		Refuse = (Byte)'1'
	};


	/// <summary>
	/// TFtdcOTCTradeTypeType��һ��OTC�ɽ���������
	/// </summary>
	[Serializable]
	public enum struct EnumOTCTradeTypeType : Byte
	{
		///���ڽ���
		Block = (Byte)'0',

		///��ת��
		EFP = (Byte)'1'
	};


	/// <summary>
	/// TFtdcMatchTypeType��һ�����ַ���ƥ�䷽ʽ����
	/// </summary>
	[Serializable]
	public enum struct EnumMatchTypeType : Byte
	{
		///�����ֵ
		DV01 = (Byte)'1',

		///��ֵ
		ParValue = (Byte)'2'
	};

}