
#pragma once

#include "enums.h"

using namespace System;
using namespace System::Runtime::InteropServices;

namespace CTP
{


	///信息分发
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcDisseminationField
	{
		///序列系列号
		short	SequenceSeries;
		///序列号
		int	SequenceNo;
	};

	///用户登录请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqUserLoginField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///接口端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	InterfaceProductInfo;
		///协议信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ProtocolInfo;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///动态密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	OneTimePassword;
		///终端IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ClientIPAddress;
		///登录备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
		///终端IP端口
		int	ClientIPPort;
	};

	///用户登录应答
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspUserLoginField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///登录成功时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LoginTime;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易系统名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	SystemName;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///最大报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MaxOrderRef;
		///上期所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SHFETime;
		///大商所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	DCETime;
		///郑商所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CZCETime;
		///中金所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	FFEXTime;
		///能源中心时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
	};

	///用户登出请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserLogoutField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///强制交易员退出
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcForceUserLogoutField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///客户端认证请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqAuthenticateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///认证码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	AuthCode;
		///App代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^	AppID;
	};

	///客户端认证响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspAuthenticateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///App代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^	AppID;
		///App类型
		EnumAppTypeType	AppType;
	};

	///客户端认证信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcAuthenticationInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///认证信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	AuthInfo;
		///是否为认证结果
		int	IsResult;
		///App代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^	AppID;
		///App类型
		EnumAppTypeType	AppType;
	};

	///用户登录应答2
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspUserLogin2Field
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///登录成功时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LoginTime;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易系统名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	SystemName;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///最大报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MaxOrderRef;
		///上期所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SHFETime;
		///大商所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	DCETime;
		///郑商所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CZCETime;
		///中金所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	FFEXTime;
		///能源中心时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
		///随机串
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	RandomString;
	};

	///银期转帐报文头
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferHeaderField
	{
		///版本号，常量，1.0
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	Version;
		///交易代码，必填
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///交易日期，必填，格式：yyyymmdd
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间，必填，格式：hhmmss
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///发起方流水号，N/A
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeSerial;
		///期货公司代码，必填
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	FutureID;
		///银行代码，根据查询银行得到，必填
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分中心代码，根据查询银行得到，必填
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBrchID;
		///操作员，N/A
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///交易设备类型，N/A
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///记录数，N/A
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	RecordNum;
		///会话编号，N/A
		int	SessionID;
		///请求编号，N/A
		int	RequestID;
	};

	///银行资金转期货请求，TradeCode=202001
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferBankToFutureReqField
	{
		///期货资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
		///密码标志
		EnumFuturePwdFlagType	FuturePwdFlag;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	FutureAccPwd;
		///转账金额
		double	TradeAmt;
		///客户手续费
		double	CustFee;
		///币种：RMB-人民币 USD-美圆 HKD-港元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
	};

	///银行资金转期货请求响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferBankToFutureRspField
	{
		///响应代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	RetCode;
		///响应信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	RetInfo;
		///资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
		///转帐金额
		double	TradeAmt;
		///应收客户手续费
		double	CustFee;
		///币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
	};

	///期货资金转银行请求，TradeCode=202002
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferFutureToBankReqField
	{
		///期货资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
		///密码标志
		EnumFuturePwdFlagType	FuturePwdFlag;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	FutureAccPwd;
		///转账金额
		double	TradeAmt;
		///客户手续费
		double	CustFee;
		///币种：RMB-人民币 USD-美圆 HKD-港元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
	};

	///期货资金转银行请求响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferFutureToBankRspField
	{
		///响应代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	RetCode;
		///响应信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	RetInfo;
		///资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
		///转帐金额
		double	TradeAmt;
		///应收客户手续费
		double	CustFee;
		///币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
	};

	///查询银行资金请求，TradeCode=204002
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferQryBankReqField
	{
		///期货资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
		///密码标志
		EnumFuturePwdFlagType	FuturePwdFlag;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	FutureAccPwd;
		///币种：RMB-人民币 USD-美圆 HKD-港元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
	};

	///查询银行资金请求响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferQryBankRspField
	{
		///响应代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	RetCode;
		///响应信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
		String^	RetInfo;
		///资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
		///银行余额
		double	TradeAmt;
		///银行可用余额
		double	UseAmt;
		///银行可取余额
		double	FetchAmt;
		///币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
	};

	///查询银行交易明细请求，TradeCode=204999
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferQryDetailReqField
	{
		///期货资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	FutureAccount;
	};

	///查询银行交易明细请求响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferQryDetailRspField
	{
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///交易代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///期货流水号
		int	FutureSerial;
		///期货公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	FutureID;
		///资金帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 22)]
		String^	FutureAccount;
		///银行流水号
		int	BankSerial;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分中心代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBrchID;
		///银行账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	CertCode;
		///货币代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	CurrencyCode;
		///发生金额
		double	TxAmount;
		///有效标志
		EnumTransferValidFlagType	Flag;
	};

	///响应信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspInfoField
	{
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///交易所
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 61)]
String^	ExchangeName;
		///交易所属性
		EnumExchangePropertyType	ExchangeProperty;
	};

	///产品
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcProductField
	{
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///产品名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ProductName;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///产品类型
		EnumProductClassType	ProductClass;
		///合约数量乘数
		int	VolumeMultiple;
		///最小变动价位
		double	PriceTick;
		///市价单最大下单量
		int	MaxMarketOrderVolume;
		///市价单最小下单量
		int	MinMarketOrderVolume;
		///限价单最大下单量
		int	MaxLimitOrderVolume;
		///限价单最小下单量
		int	MinLimitOrderVolume;
		///持仓类型
		EnumPositionTypeType	PositionType;
		///持仓日期类型
		EnumPositionDateTypeType	PositionDateType;
		///平仓处理类型
		EnumCloseDealTypeType	CloseDealType;
		///交易币种类型
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	TradeCurrencyID;
		///质押资金可用范围
		EnumMortgageFundUseRangeType	MortgageFundUseRange;
		///交易所产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeProductID;
		///合约基础商品乘数
		double	UnderlyingMultiple;
	};

	///合约
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	InstrumentName;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///产品类型
		EnumProductClassType	ProductClass;
		///交割年份
		int	DeliveryYear;
		///交割月
		int	DeliveryMonth;
		///市价单最大下单量
		int	MaxMarketOrderVolume;
		///市价单最小下单量
		int	MinMarketOrderVolume;
		///限价单最大下单量
		int	MaxLimitOrderVolume;
		///限价单最小下单量
		int	MinLimitOrderVolume;
		///合约数量乘数
		int	VolumeMultiple;
		///最小变动价位
		double	PriceTick;
		///创建日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CreateDate;
		///上市日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OpenDate;
		///到期日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ExpireDate;
		///开始交割日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	StartDelivDate;
		///结束交割日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	EndDelivDate;
		///合约生命周期状态
		EnumInstLifePhaseType	InstLifePhase;
		///当前是否交易
		int	IsTrading;
		///持仓类型
		EnumPositionTypeType	PositionType;
		///持仓日期类型
		EnumPositionDateTypeType	PositionDateType;
		///多头保证金率
		double	LongMarginRatio;
		///空头保证金率
		double	ShortMarginRatio;
		///是否使用大额单边保证金算法
		EnumMaxMarginSideAlgorithmType	MaxMarginSideAlgorithm;
		///基础商品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	UnderlyingInstrID;
		///执行价
		double	StrikePrice;
		///期权类型
		EnumOptionsTypeType	OptionsType;
		///合约基础商品乘数
		double	UnderlyingMultiple;
		///组合类型
		EnumCombinationTypeType	CombinationType;
	};

	///经纪公司
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///经纪公司简称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BrokerAbbr;
		///经纪公司名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	BrokerName;
		///是否活跃
		int	IsActive;
	};

	///交易所交易员
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTraderField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装数量
		int	InstallCount;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///投资者
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorField
	{
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者分组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorGroupID;
		///投资者名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	InvestorName;
		///证件类型
		EnumIdCardTypeType	IdentifiedCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///是否活跃
		int	IsActive;
		///联系电话
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///通讯地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///开户日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OpenDate;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Mobile;
		///手续费率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	CommModelID;
		///保证金率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	MarginModelID;
	};

	///交易编码
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingCodeField
	{
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///是否活跃
		int	IsActive;
		///交易编码类型
		EnumClientIDTypeType	ClientIDType;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///业务类型
		EnumBizTypeType	BizType;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///会员编码和经纪公司编码对照表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcPartBrokerField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///是否活跃
		int	IsActive;
	};

	///管理用户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSuperUserField
	{
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	UserName;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///是否活跃
		int	IsActive;
	};

	///管理用户功能权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSuperUserFunctionField
	{
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///功能代码
		EnumFunctionCodeType	FunctionCode;
	};

	///投资者组
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorGroupField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者分组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorGroupID;
		///投资者分组名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	InvestorGroupName;
	};

	///资金账户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingAccountField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///上次质押金额
		double	PreMortgage;
		///上次信用额度
		double	PreCredit;
		///上次存款额
		double	PreDeposit;
		///上次结算准备金
		double	PreBalance;
		///上次占用的保证金
		double	PreMargin;
		///利息基数
		double	InterestBase;
		///利息收入
		double	Interest;
		///入金金额
		double	Deposit;
		///出金金额
		double	Withdraw;
		///冻结的保证金
		double	FrozenMargin;
		///冻结的资金
		double	FrozenCash;
		///冻结的手续费
		double	FrozenCommission;
		///当前保证金总额
		double	CurrMargin;
		///资金差额
		double	CashIn;
		///手续费
		double	Commission;
		///平仓盈亏
		double	CloseProfit;
		///持仓盈亏
		double	PositionProfit;
		///期货结算准备金
		double	Balance;
		///可用资金
		double	Available;
		///可取资金
		double	WithdrawQuota;
		///基本准备金
		double	Reserve;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///信用额度
		double	Credit;
		///质押金额
		double	Mortgage;
		///交易所保证金
		double	ExchangeMargin;
		///投资者交割保证金
		double	DeliveryMargin;
		///交易所交割保证金
		double	ExchangeDeliveryMargin;
		///保底期货结算准备金
		double	ReserveBalance;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///上次货币质入金额
		double	PreFundMortgageIn;
		///上次货币质出金额
		double	PreFundMortgageOut;
		///货币质入金额
		double	FundMortgageIn;
		///货币质出金额
		double	FundMortgageOut;
		///货币质押余额
		double	FundMortgageAvailable;
		///可质押货币金额
		double	MortgageableFund;
		///特殊产品占用保证金
		double	SpecProductMargin;
		///特殊产品冻结保证金
		double	SpecProductFrozenMargin;
		///特殊产品手续费
		double	SpecProductCommission;
		///特殊产品冻结手续费
		double	SpecProductFrozenCommission;
		///特殊产品持仓盈亏
		double	SpecProductPositionProfit;
		///特殊产品平仓盈亏
		double	SpecProductCloseProfit;
		///根据持仓盈亏算法计算的特殊产品持仓盈亏
		double	SpecProductPositionProfitByAlg;
		///特殊产品交易所保证金
		double	SpecProductExchangeMargin;
		///业务类型
		EnumBizTypeType	BizType;
		///延时换汇冻结金额
		double	FrozenSwap;
		///剩余换汇额度
		double	RemainSwap;
	};

	///投资者持仓
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorPositionField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///持仓多空方向
		EnumPosiDirectionType	PosiDirection;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///持仓日期
		EnumPositionDateType	PositionDate;
		///上日持仓
		int	YdPosition;
		///今日持仓
		int	Position;
		///多头冻结
		int	LongFrozen;
		///空头冻结
		int	ShortFrozen;
		///开仓冻结金额
		double	LongFrozenAmount;
		///开仓冻结金额
		double	ShortFrozenAmount;
		///开仓量
		int	OpenVolume;
		///平仓量
		int	CloseVolume;
		///开仓金额
		double	OpenAmount;
		///平仓金额
		double	CloseAmount;
		///持仓成本
		double	PositionCost;
		///上次占用的保证金
		double	PreMargin;
		///占用的保证金
		double	UseMargin;
		///冻结的保证金
		double	FrozenMargin;
		///冻结的资金
		double	FrozenCash;
		///冻结的手续费
		double	FrozenCommission;
		///资金差额
		double	CashIn;
		///手续费
		double	Commission;
		///平仓盈亏
		double	CloseProfit;
		///持仓盈亏
		double	PositionProfit;
		///上次结算价
		double	PreSettlementPrice;
		///本次结算价
		double	SettlementPrice;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///开仓成本
		double	OpenCost;
		///交易所保证金
		double	ExchangeMargin;
		///组合成交形成的持仓
		int	CombPosition;
		///组合多头冻结
		int	CombLongFrozen;
		///组合空头冻结
		int	CombShortFrozen;
		///逐日盯市平仓盈亏
		double	CloseProfitByDate;
		///逐笔对冲平仓盈亏
		double	CloseProfitByTrade;
		///今日持仓
		int	TodayPosition;
		///保证金率
		double	MarginRateByMoney;
		///保证金率(按手数)
		double	MarginRateByVolume;
		///执行冻结
		int	StrikeFrozen;
		///执行冻结金额
		double	StrikeFrozenAmount;
		///放弃执行冻结
		int	AbandonFrozen;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行冻结的昨仓
		int	YdStrikeFrozen;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///合约保证金率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentMarginRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///多头保证金率
		double	LongMarginRatioByMoney;
		///多头保证金费
		double	LongMarginRatioByVolume;
		///空头保证金率
		double	ShortMarginRatioByMoney;
		///空头保证金费
		double	ShortMarginRatioByVolume;
		///是否相对交易所收取
		int	IsRelative;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///合约手续费率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentCommissionRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///开仓手续费率
		double	OpenRatioByMoney;
		///开仓手续费
		double	OpenRatioByVolume;
		///平仓手续费率
		double	CloseRatioByMoney;
		///平仓手续费
		double	CloseRatioByVolume;
		///平今手续费率
		double	CloseTodayRatioByMoney;
		///平今手续费
		double	CloseTodayRatioByVolume;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///业务类型
		EnumBizTypeType	BizType;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///深度行情
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcDepthMarketDataField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///最新价
		double	LastPrice;
		///上次结算价
		double	PreSettlementPrice;
		///昨收盘
		double	PreClosePrice;
		///昨持仓量
		double	PreOpenInterest;
		///今开盘
		double	OpenPrice;
		///最高价
		double	HighestPrice;
		///最低价
		double	LowestPrice;
		///数量
		int	Volume;
		///成交金额
		double	Turnover;
		///持仓量
		double	OpenInterest;
		///今收盘
		double	ClosePrice;
		///本次结算价
		double	SettlementPrice;
		///涨停板价
		double	UpperLimitPrice;
		///跌停板价
		double	LowerLimitPrice;
		///昨虚实度
		double	PreDelta;
		///今虚实度
		double	CurrDelta;
		///最后修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	UpdateTime;
		///最后修改毫秒
		int	UpdateMillisec;
		///申买价一
		double	BidPrice1;
		///申买量一
		int	BidVolume1;
		///申卖价一
		double	AskPrice1;
		///申卖量一
		int	AskVolume1;
		///申买价二
		double	BidPrice2;
		///申买量二
		int	BidVolume2;
		///申卖价二
		double	AskPrice2;
		///申卖量二
		int	AskVolume2;
		///申买价三
		double	BidPrice3;
		///申买量三
		int	BidVolume3;
		///申卖价三
		double	AskPrice3;
		///申卖量三
		int	AskVolume3;
		///申买价四
		double	BidPrice4;
		///申买量四
		int	BidVolume4;
		///申卖价四
		double	AskPrice4;
		///申卖量四
		int	AskVolume4;
		///申买价五
		double	BidPrice5;
		///申买量五
		int	BidVolume5;
		///申卖价五
		double	AskPrice5;
		///申卖量五
		int	AskVolume5;
		///当日均价
		double	AveragePrice;
		///业务日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDay;
	};

	///投资者合约交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentTradingRightField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易权限
		EnumTradingRightType	TradingRight;
	};

	///经纪公司用户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerUserField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	UserName;
		///用户类型
		EnumUserTypeType	UserType;
		///是否活跃
		int	IsActive;
		///是否使用令牌
		int	IsUsingOTP;
		///是否强制终端认证
		int	IsAuthForce;
	};

	///经纪公司用户口令
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerUserPasswordField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///上次修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	LastUpdateTime;
		///上次登陆时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	LastLoginTime;
		///密码过期时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ExpireDate;
		///弱密码过期时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	WeakExpireDate;
	};

	///经纪公司用户功能权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerUserFunctionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///经纪公司功能代码
		EnumBrokerFunctionCodeType	BrokerFunctionCode;
	};

	///交易所交易员报盘机
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTraderOfferField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///交易所交易员连接状态
		EnumTraderConnectStatusType	TraderConnectStatus;
		///发出连接请求的日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectRequestDate;
		///发出连接请求的时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectRequestTime;
		///上次报告日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LastReportDate;
		///上次报告时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LastReportTime;
		///完成连接日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectDate;
		///完成连接时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectTime;
		///启动日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	StartDate;
		///启动时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	StartTime;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///本席位最大成交编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MaxTradeID;
		///本席位最大报单备拷
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	MaxOrderMessageReference;
	};

	///投资者结算结果
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSettlementInfoField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///序号
		int	SequenceNo;
		///消息正文
		[MarshalAs(UnmanagedType::ByValArray, SizeConst = 501)]
		array<Byte>^ Content;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///合约保证金率调整
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentMarginRateAdjustField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///多头保证金率
		double	LongMarginRatioByMoney;
		///多头保证金费
		double	LongMarginRatioByVolume;
		///空头保证金率
		double	ShortMarginRatioByMoney;
		///空头保证金费
		double	ShortMarginRatioByVolume;
		///是否相对交易所收取
		int	IsRelative;
	};

	///交易所保证金率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeMarginRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///多头保证金率
		double	LongMarginRatioByMoney;
		///多头保证金费
		double	LongMarginRatioByVolume;
		///空头保证金率
		double	ShortMarginRatioByMoney;
		///空头保证金费
		double	ShortMarginRatioByVolume;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///交易所保证金率调整
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeMarginRateAdjustField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///跟随交易所投资者多头保证金率
		double	LongMarginRatioByMoney;
		///跟随交易所投资者多头保证金费
		double	LongMarginRatioByVolume;
		///跟随交易所投资者空头保证金率
		double	ShortMarginRatioByMoney;
		///跟随交易所投资者空头保证金费
		double	ShortMarginRatioByVolume;
		///交易所多头保证金率
		double	ExchLongMarginRatioByMoney;
		///交易所多头保证金费
		double	ExchLongMarginRatioByVolume;
		///交易所空头保证金率
		double	ExchShortMarginRatioByMoney;
		///交易所空头保证金费
		double	ExchShortMarginRatioByVolume;
		///不跟随交易所投资者多头保证金率
		double	NoLongMarginRatioByMoney;
		///不跟随交易所投资者多头保证金费
		double	NoLongMarginRatioByVolume;
		///不跟随交易所投资者空头保证金率
		double	NoShortMarginRatioByMoney;
		///不跟随交易所投资者空头保证金费
		double	NoShortMarginRatioByVolume;
	};

	///汇率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///源币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	FromCurrencyID;
		///源币种单位数量
		double	FromCurrencyUnit;
		///目标币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	ToCurrencyID;
		///汇率
		double	ExchangeRate;
	};

	///结算引用
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSettlementRefField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
	};

	///当前时间
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCurrentTimeField
	{
		///当前日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CurrDate;
		///当前时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CurrTime;
		///当前时间（毫秒）
		int	CurrMillisec;
		///业务日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDay;
	};

	///通讯阶段
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCommPhaseField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///通讯时段编号
		short	CommPhaseNo;
		///系统编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	SystemID;
	};

	///登录信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcLoginInfoField
	{
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///登录日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LoginDate;
		///登录时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LoginTime;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///接口端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	InterfaceProductInfo;
		///协议信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ProtocolInfo;
		///系统名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	SystemName;
		///密码,已弃用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	PasswordDeprecated;
		///最大报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	MaxOrderRef;
		///上期所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SHFETime;
		///大商所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	DCETime;
		///郑商所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CZCETime;
		///中金所时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	FFEXTime;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///动态密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	OneTimePassword;
		///能源中心时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	INETime;
		///查询时是否需要流控
		int	IsQryControl;
		///登录备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
	};

	///登录信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcLogoutAllField
	{
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///系统名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	SystemName;
	};

	///前置状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcFrontStatusField
	{
		///前置编号
		int	FrontID;
		///上次报告日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LastReportDate;
		///上次报告时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LastReportTime;
		///是否活跃
		int	IsActive;
	};

	///用户口令变更
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserPasswordUpdateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///原来的口令
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	OldPassword;
		///新的口令
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewPassword;
	};

	///输入报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///报单价格条件
		EnumOrderPriceTypeType	OrderPriceType;
		///买卖方向
		EnumDirectionType	Direction;
		///组合开平标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombOffsetFlag;
		///组合投机套保标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombHedgeFlag;
		///价格
		double	LimitPrice;
		///数量
		int	VolumeTotalOriginal;
		///有效期类型
		EnumTimeConditionType	TimeCondition;
		///GTD日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	GTDDate;
		///成交量类型
		EnumVolumeConditionType	VolumeCondition;
		///最小成交量
		int	MinVolume;
		///触发条件
		EnumContingentConditionType	ContingentCondition;
		///止损价
		double	StopPrice;
		///强平原因
		EnumForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		int	IsAutoSuspend;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///请求编号
		int	RequestID;
		///用户强评标志
		int	UserForceClose;
		///互换单标志
		int	IsSwapOrder;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///报单价格条件
		EnumOrderPriceTypeType	OrderPriceType;
		///买卖方向
		EnumDirectionType	Direction;
		///组合开平标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombOffsetFlag;
		///组合投机套保标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombHedgeFlag;
		///价格
		double	LimitPrice;
		///数量
		int	VolumeTotalOriginal;
		///有效期类型
		EnumTimeConditionType	TimeCondition;
		///GTD日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	GTDDate;
		///成交量类型
		EnumVolumeConditionType	VolumeCondition;
		///最小成交量
		int	MinVolume;
		///触发条件
		EnumContingentConditionType	ContingentCondition;
		///止损价
		double	StopPrice;
		///强平原因
		EnumForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		int	IsAutoSuspend;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///请求编号
		int	RequestID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报单提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///报单来源
		EnumOrderSourceType	OrderSource;
		///报单状态
		EnumOrderStatusType	OrderStatus;
		///报单类型
		EnumOrderTypeType	OrderType;
		///今成交数量
		int	VolumeTraded;
		///剩余数量
		int	VolumeTotal;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///委托时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///激活时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActiveTime;
		///挂起时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SuspendTime;
		///最后修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	UpdateTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///最后修改交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ActiveTraderID;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///用户强评标志
		int	UserForceClose;
		///操作用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ActiveUserID;
		///经纪公司报单编号
		int	BrokerOrderSeq;
		///相关报单
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	RelativeOrderSysID;
		///郑商所成交数量
		int	ZCETotalTradedVolume;
		///互换单标志
		int	IsSwapOrder;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeOrderField
	{
		///报单价格条件
		EnumOrderPriceTypeType	OrderPriceType;
		///买卖方向
		EnumDirectionType	Direction;
		///组合开平标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombOffsetFlag;
		///组合投机套保标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombHedgeFlag;
		///价格
		double	LimitPrice;
		///数量
		int	VolumeTotalOriginal;
		///有效期类型
		EnumTimeConditionType	TimeCondition;
		///GTD日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	GTDDate;
		///成交量类型
		EnumVolumeConditionType	VolumeCondition;
		///最小成交量
		int	MinVolume;
		///触发条件
		EnumContingentConditionType	ContingentCondition;
		///止损价
		double	StopPrice;
		///强平原因
		EnumForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		int	IsAutoSuspend;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///请求编号
		int	RequestID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报单提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///报单来源
		EnumOrderSourceType	OrderSource;
		///报单状态
		EnumOrderStatusType	OrderStatus;
		///报单类型
		EnumOrderTypeType	OrderType;
		///今成交数量
		int	VolumeTraded;
		///剩余数量
		int	VolumeTotal;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///委托时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///激活时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActiveTime;
		///挂起时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SuspendTime;
		///最后修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	UpdateTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///最后修改交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ActiveTraderID;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所报单插入失败
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeOrderInsertErrorField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///输入报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报单操作引用
		int	OrderActionRef;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///价格
		double	LimitPrice;
		///数量变化
		int	VolumeChange;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报单操作引用
		int	OrderActionRef;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///价格
		double	LimitPrice;
		///数量变化
		int	VolumeChange;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeOrderActionField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///价格
		double	LimitPrice;
		///数量变化
		int	VolumeChange;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所报单操作失败
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeOrderActionErrorField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///交易所成交
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeTradeField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///成交编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TradeID;
		///买卖方向
		EnumDirectionType	Direction;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///交易角色
		EnumTradingRoleType	TradingRole;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///价格
		double	Price;
		///数量
		int	Volume;
		///成交时期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///成交时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///成交类型
		EnumTradeTypeType	TradeType;
		///成交价来源
		EnumPriceSourceType	PriceSource;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///序号
		int	SequenceNo;
		///成交来源
		EnumTradeSourceType	TradeSource;
	};

	///成交
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///成交编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TradeID;
		///买卖方向
		EnumDirectionType	Direction;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///交易角色
		EnumTradingRoleType	TradingRole;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///价格
		double	Price;
		///数量
		int	Volume;
		///成交时期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///成交时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///成交类型
		EnumTradeTypeType	TradeType;
		///成交价来源
		EnumPriceSourceType	PriceSource;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///序号
		int	SequenceNo;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///经纪公司报单编号
		int	BrokerOrderSeq;
		///成交来源
		EnumTradeSourceType	TradeSource;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///用户会话
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserSessionField
	{
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///登录日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LoginDate;
		///登录时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LoginTime;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///接口端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	InterfaceProductInfo;
		///协议信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ProtocolInfo;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///登录备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
	};

	///查询最大报单数量
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQueryMaxOrderVolumeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///买卖方向
		EnumDirectionType	Direction;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///最大允许报单数量
		int	MaxVolume;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///投资者结算结果确认信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSettlementInfoConfirmField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///确认日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConfirmDate;
		///确认时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConfirmTime;
		///结算编号
		int	SettlementID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///出入金同步
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncDepositField
	{
		///出入金流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	DepositSeqNo;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///入金金额
		double	Deposit;
		///是否强制进行
		int	IsForce;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///货币质押同步
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncFundMortgageField
	{
		///货币质押流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	MortgageSeqNo;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///源币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	FromCurrencyID;
		///质押金额
		double	MortgageAmount;
		///目标币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	ToCurrencyID;
	};

	///经纪公司同步
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerSyncField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///正在同步中的投资者
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingInvestorField
	{
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者分组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorGroupID;
		///投资者名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	InvestorName;
		///证件类型
		EnumIdCardTypeType	IdentifiedCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///是否活跃
		int	IsActive;
		///联系电话
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///通讯地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///开户日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OpenDate;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Mobile;
		///手续费率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	CommModelID;
		///保证金率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	MarginModelID;
	};

	///正在同步中的交易代码
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingTradingCodeField
	{
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///是否活跃
		int	IsActive;
		///交易编码类型
		EnumClientIDTypeType	ClientIDType;
	};

	///正在同步中的投资者分组
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingInvestorGroupField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者分组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorGroupID;
		///投资者分组名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	InvestorGroupName;
	};

	///正在同步中的交易账号
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingTradingAccountField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///上次质押金额
		double	PreMortgage;
		///上次信用额度
		double	PreCredit;
		///上次存款额
		double	PreDeposit;
		///上次结算准备金
		double	PreBalance;
		///上次占用的保证金
		double	PreMargin;
		///利息基数
		double	InterestBase;
		///利息收入
		double	Interest;
		///入金金额
		double	Deposit;
		///出金金额
		double	Withdraw;
		///冻结的保证金
		double	FrozenMargin;
		///冻结的资金
		double	FrozenCash;
		///冻结的手续费
		double	FrozenCommission;
		///当前保证金总额
		double	CurrMargin;
		///资金差额
		double	CashIn;
		///手续费
		double	Commission;
		///平仓盈亏
		double	CloseProfit;
		///持仓盈亏
		double	PositionProfit;
		///期货结算准备金
		double	Balance;
		///可用资金
		double	Available;
		///可取资金
		double	WithdrawQuota;
		///基本准备金
		double	Reserve;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///信用额度
		double	Credit;
		///质押金额
		double	Mortgage;
		///交易所保证金
		double	ExchangeMargin;
		///投资者交割保证金
		double	DeliveryMargin;
		///交易所交割保证金
		double	ExchangeDeliveryMargin;
		///保底期货结算准备金
		double	ReserveBalance;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///上次货币质入金额
		double	PreFundMortgageIn;
		///上次货币质出金额
		double	PreFundMortgageOut;
		///货币质入金额
		double	FundMortgageIn;
		///货币质出金额
		double	FundMortgageOut;
		///货币质押余额
		double	FundMortgageAvailable;
		///可质押货币金额
		double	MortgageableFund;
		///特殊产品占用保证金
		double	SpecProductMargin;
		///特殊产品冻结保证金
		double	SpecProductFrozenMargin;
		///特殊产品手续费
		double	SpecProductCommission;
		///特殊产品冻结手续费
		double	SpecProductFrozenCommission;
		///特殊产品持仓盈亏
		double	SpecProductPositionProfit;
		///特殊产品平仓盈亏
		double	SpecProductCloseProfit;
		///根据持仓盈亏算法计算的特殊产品持仓盈亏
		double	SpecProductPositionProfitByAlg;
		///特殊产品交易所保证金
		double	SpecProductExchangeMargin;
		///延时换汇冻结金额
		double	FrozenSwap;
		///剩余换汇额度
		double	RemainSwap;
	};

	///正在同步中的投资者持仓
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingInvestorPositionField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///持仓多空方向
		EnumPosiDirectionType	PosiDirection;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///持仓日期
		EnumPositionDateType	PositionDate;
		///上日持仓
		int	YdPosition;
		///今日持仓
		int	Position;
		///多头冻结
		int	LongFrozen;
		///空头冻结
		int	ShortFrozen;
		///开仓冻结金额
		double	LongFrozenAmount;
		///开仓冻结金额
		double	ShortFrozenAmount;
		///开仓量
		int	OpenVolume;
		///平仓量
		int	CloseVolume;
		///开仓金额
		double	OpenAmount;
		///平仓金额
		double	CloseAmount;
		///持仓成本
		double	PositionCost;
		///上次占用的保证金
		double	PreMargin;
		///占用的保证金
		double	UseMargin;
		///冻结的保证金
		double	FrozenMargin;
		///冻结的资金
		double	FrozenCash;
		///冻结的手续费
		double	FrozenCommission;
		///资金差额
		double	CashIn;
		///手续费
		double	Commission;
		///平仓盈亏
		double	CloseProfit;
		///持仓盈亏
		double	PositionProfit;
		///上次结算价
		double	PreSettlementPrice;
		///本次结算价
		double	SettlementPrice;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///开仓成本
		double	OpenCost;
		///交易所保证金
		double	ExchangeMargin;
		///组合成交形成的持仓
		int	CombPosition;
		///组合多头冻结
		int	CombLongFrozen;
		///组合空头冻结
		int	CombShortFrozen;
		///逐日盯市平仓盈亏
		double	CloseProfitByDate;
		///逐笔对冲平仓盈亏
		double	CloseProfitByTrade;
		///今日持仓
		int	TodayPosition;
		///保证金率
		double	MarginRateByMoney;
		///保证金率(按手数)
		double	MarginRateByVolume;
		///执行冻结
		int	StrikeFrozen;
		///执行冻结金额
		double	StrikeFrozenAmount;
		///放弃执行冻结
		int	AbandonFrozen;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行冻结的昨仓
		int	YdStrikeFrozen;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///正在同步中的合约保证金率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingInstrumentMarginRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///多头保证金率
		double	LongMarginRatioByMoney;
		///多头保证金费
		double	LongMarginRatioByVolume;
		///空头保证金率
		double	ShortMarginRatioByMoney;
		///空头保证金费
		double	ShortMarginRatioByVolume;
		///是否相对交易所收取
		int	IsRelative;
	};

	///正在同步中的合约手续费率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingInstrumentCommissionRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///开仓手续费率
		double	OpenRatioByMoney;
		///开仓手续费
		double	OpenRatioByVolume;
		///平仓手续费率
		double	CloseRatioByMoney;
		///平仓手续费
		double	CloseRatioByVolume;
		///平今手续费率
		double	CloseTodayRatioByMoney;
		///平今手续费
		double	CloseTodayRatioByVolume;
	};

	///正在同步中的合约交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncingInstrumentTradingRightField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易权限
		EnumTradingRightType	TradingRight;
	};

	///查询报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeEnd;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询成交
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTradeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///成交编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TradeID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTimeEnd;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询投资者持仓
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestorPositionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询资金账户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTradingAccountField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///业务类型
		EnumBizTypeType	BizType;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
	};

	///查询投资者
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestorField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///查询交易编码
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTradingCodeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///交易编码类型
		EnumClientIDTypeType	ClientIDType;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询投资者组
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestorGroupField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///查询合约保证金率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInstrumentMarginRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询手续费率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInstrumentCommissionRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询合约交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInstrumentTradingRightField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///查询经纪公司
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBrokerField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///查询交易员
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTraderField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///查询管理用户功能权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySuperUserFunctionField
	{
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///查询用户会话
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryUserSessionField
	{
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///查询经纪公司会员代码
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryPartBrokerField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
	};

	///查询前置状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryFrontStatusField
	{
		///前置编号
		int	FrontID;
	};

	///查询交易所报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeOrderField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///查询报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///查询交易所报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeOrderActionField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///查询管理用户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySuperUserField
	{
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///查询交易所
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///查询产品
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryProductField
	{
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///产品类型
		EnumProductClassType	ProductClass;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///查询合约
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInstrumentField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
	};

	///查询行情
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryDepthMarketDataField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///查询经纪公司用户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBrokerUserField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///查询经纪公司用户权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBrokerUserFunctionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///查询交易员报盘机
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTraderOfferField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///查询出入金流水
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySyncDepositField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///出入金流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	DepositSeqNo;
	};

	///查询投资者结算结果
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySettlementInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///查询交易所保证金率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeMarginRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///查询交易所调整保证金率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeMarginRateAdjustField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
	};

	///查询汇率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///源币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	FromCurrencyID;
		///目标币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	ToCurrencyID;
	};

	///查询货币质押流水
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySyncFundMortgageField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///货币质押流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	MortgageSeqNo;
	};

	///查询报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryHisOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeEnd;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
	};

	///当前期权合约最小保证金
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionInstrMiniMarginField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///单位（手）期权合约最小保证金
		double	MinMargin;
		///取值方式
		EnumValueMethodType	ValueMethod;
		///是否跟随交易所收取
		int	IsRelative;
	};

	///当前期权合约保证金调整系数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionInstrMarginAdjustField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机空头保证金调整系数
		double	SShortMarginRatioByMoney;
		///投机空头保证金调整系数
		double	SShortMarginRatioByVolume;
		///保值空头保证金调整系数
		double	HShortMarginRatioByMoney;
		///保值空头保证金调整系数
		double	HShortMarginRatioByVolume;
		///套利空头保证金调整系数
		double	AShortMarginRatioByMoney;
		///套利空头保证金调整系数
		double	AShortMarginRatioByVolume;
		///是否跟随交易所收取
		int	IsRelative;
		///做市商空头保证金调整系数
		double	MShortMarginRatioByMoney;
		///做市商空头保证金调整系数
		double	MShortMarginRatioByVolume;
	};

	///当前期权合约手续费的详细内容
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionInstrCommRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///开仓手续费率
		double	OpenRatioByMoney;
		///开仓手续费
		double	OpenRatioByVolume;
		///平仓手续费率
		double	CloseRatioByMoney;
		///平仓手续费
		double	CloseRatioByVolume;
		///平今手续费率
		double	CloseTodayRatioByMoney;
		///平今手续费
		double	CloseTodayRatioByVolume;
		///执行手续费率
		double	StrikeRatioByMoney;
		///执行手续费
		double	StrikeRatioByVolume;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///期权交易成本
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionInstrTradeCostField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///期权合约保证金不变部分
		double	FixedMargin;
		///期权合约最小保证金
		double	MiniMargin;
		///期权合约权利金
		double	Royalty;
		///交易所期权合约保证金不变部分
		double	ExchFixedMargin;
		///交易所期权合约最小保证金
		double	ExchMiniMargin;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///期权交易成本查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOptionInstrTradeCostField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///期权合约报价
		double	InputPrice;
		///标的价格,填0则用昨结算价
		double	UnderlyingPrice;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///期权手续费率查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOptionInstrCommRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///股指现货指数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcIndexPriceField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///指数现货收盘价
		double	ClosePrice;
	};

	///输入的执行宣告
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputExecOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///执行宣告引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///执行类型
		EnumActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		EnumPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记,该字段已废弃
		EnumExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		EnumExecOrderCloseFlagType	CloseFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///输入执行宣告操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputExecOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///执行宣告操作引用
		int	ExecOrderActionRef;
		///执行宣告引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行宣告操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///执行宣告
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExecOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///执行宣告引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///执行类型
		EnumActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		EnumPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记,该字段已废弃
		EnumExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		EnumExecOrderCloseFlagType	CloseFlag;
		///本地执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ExecOrderLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///执行宣告提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///执行结果
		EnumExecResultType	ExecResult;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///操作用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ActiveUserID;
		///经纪公司报单编号
		int	BrokerExecOrderSeq;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///执行宣告操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExecOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///执行宣告操作引用
		int	ExecOrderActionRef;
		///执行宣告引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行宣告操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ExecOrderLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///执行类型
		EnumActionTypeType	ActionType;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///执行宣告查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExecOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeEnd;
	};

	///交易所执行宣告信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeExecOrderField
	{
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///执行类型
		EnumActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		EnumPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记,该字段已废弃
		EnumExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		EnumExecOrderCloseFlagType	CloseFlag;
		///本地执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ExecOrderLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///执行宣告提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///执行结果
		EnumExecResultType	ExecResult;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所执行宣告查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeExecOrderField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///执行宣告操作查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExecOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///交易所执行宣告操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeExecOrderActionField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行宣告操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地执行宣告编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ExecOrderLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///执行类型
		EnumActionTypeType	ActionType;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///数量
		int	Volume;
	};

	///交易所执行宣告操作查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeExecOrderActionField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///错误执行宣告
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcErrExecOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///执行宣告引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///执行类型
		EnumActionTypeType	ActionType;
		///保留头寸申请的持仓方向
		EnumPosiDirectionType	PosiDirection;
		///期权行权后是否保留期货头寸的标记,该字段已废弃
		EnumExecOrderPositionFlagType	ReservePositionFlag;
		///期权行权后生成的头寸是否自动平仓
		EnumExecOrderCloseFlagType	CloseFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///查询错误执行宣告
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryErrExecOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///错误执行宣告操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcErrExecOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///执行宣告操作引用
		int	ExecOrderActionRef;
		///执行宣告引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ExecOrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///执行宣告操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ExecOrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///查询错误执行宣告操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryErrExecOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///投资者期权合约交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionInstrTradingRightField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///买卖方向
		EnumDirectionType	Direction;
		///交易权限
		EnumTradingRightType	TradingRight;
	};

	///查询期权合约交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOptionInstrTradingRightField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///买卖方向
		EnumDirectionType	Direction;
	};

	///输入的询价
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputForQuoteField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///询价引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ForQuoteRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///询价
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcForQuoteField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///询价引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	ForQuoteRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///本地询价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ForQuoteLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///询价状态
		EnumForQuoteStatusType	ForQuoteStatus;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///操作用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ActiveUserID;
		///经纪公司询价编号
		int	BrokerForQutoSeq;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///询价查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryForQuoteField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeEnd;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///交易所询价信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeForQuoteField
	{
		///本地询价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ForQuoteLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///询价状态
		EnumForQuoteStatusType	ForQuoteStatus;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所询价查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeForQuoteField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///输入的报价
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputQuoteField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报价引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	QuoteRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///卖价格
		double	AskPrice;
		///买价格
		double	BidPrice;
		///卖数量
		int	AskVolume;
		///买数量
		int	BidVolume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///卖开平标志
		EnumOffsetFlagType	AskOffsetFlag;
		///买开平标志
		EnumOffsetFlagType	BidOffsetFlag;
		///卖投机套保标志
		EnumHedgeFlagType	AskHedgeFlag;
		///买投机套保标志
		EnumHedgeFlagType	BidHedgeFlag;
		///衍生卖报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AskOrderRef;
		///衍生买报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	BidOrderRef;
		///应价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ForQuoteSysID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///输入报价操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputQuoteActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报价操作引用
		int	QuoteActionRef;
		///报价引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	QuoteRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报价操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	QuoteSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///报价
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQuoteField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报价引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	QuoteRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///卖价格
		double	AskPrice;
		///买价格
		double	BidPrice;
		///卖数量
		int	AskVolume;
		///买数量
		int	BidVolume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///卖开平标志
		EnumOffsetFlagType	AskOffsetFlag;
		///买开平标志
		EnumOffsetFlagType	BidOffsetFlag;
		///卖投机套保标志
		EnumHedgeFlagType	AskHedgeFlag;
		///买投机套保标志
		EnumHedgeFlagType	BidHedgeFlag;
		///本地报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	QuoteLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报价提示序号
		int	NotifySequence;
		///报价提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	QuoteSysID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///报价状态
		EnumOrderStatusType	QuoteStatus;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///卖方报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	AskOrderSysID;
		///买方报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BidOrderSysID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///操作用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ActiveUserID;
		///经纪公司报价编号
		int	BrokerQuoteSeq;
		///衍生卖报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AskOrderRef;
		///衍生买报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	BidOrderRef;
		///应价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ForQuoteSysID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///报价操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQuoteActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报价操作引用
		int	QuoteActionRef;
		///报价引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	QuoteRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报价操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	QuoteSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	QuoteLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///报价查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryQuoteField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	QuoteSysID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeEnd;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///交易所报价信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeQuoteField
	{
		///卖价格
		double	AskPrice;
		///买价格
		double	BidPrice;
		///卖数量
		int	AskVolume;
		///买数量
		int	BidVolume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///卖开平标志
		EnumOffsetFlagType	AskOffsetFlag;
		///买开平标志
		EnumOffsetFlagType	BidOffsetFlag;
		///卖投机套保标志
		EnumHedgeFlagType	AskHedgeFlag;
		///买投机套保标志
		EnumHedgeFlagType	BidHedgeFlag;
		///本地报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	QuoteLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报价提示序号
		int	NotifySequence;
		///报价提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	QuoteSysID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///报价状态
		EnumOrderStatusType	QuoteStatus;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///卖方报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	AskOrderSysID;
		///买方报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BidOrderSysID;
		///应价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ForQuoteSysID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所报价查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeQuoteField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///报价操作查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryQuoteActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///交易所报价操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeQuoteActionField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报价操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	QuoteSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	QuoteLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所报价操作查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeQuoteActionField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///期权合约delta值
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionInstrDeltaField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///Delta值
		double	Delta;
	};

	///发给做市商的询价请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcForQuoteRspField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///询价编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ForQuoteSysID;
		///询价时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ForQuoteTime;
		///业务日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDay;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///当前期权合约执行偏移值的详细内容
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcStrikeOffsetField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///执行偏移值
		double	Offset;
		///执行偏移类型
		EnumStrikeOffsetTypeType	OffsetType;
	};

	///期权执行偏移值查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryStrikeOffsetField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///输入批量报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputBatchOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报单操作引用
		int	OrderActionRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///批量报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBatchOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报单操作引用
		int	OrderActionRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///交易所批量报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeBatchOrderActionField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///查询批量报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBatchOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///组合合约安全系数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCombInstrumentGuardField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///
		double	GuarantRatio;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///组合合约安全系数查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCombInstrumentGuardField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///输入的申请组合
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputCombActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///组合引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CombActionRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///买卖方向
		EnumDirectionType	Direction;
		///数量
		int	Volume;
		///组合指令方向
		EnumCombDirectionType	CombDirection;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///申请组合
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCombActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///组合引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	CombActionRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///买卖方向
		EnumDirectionType	Direction;
		///数量
		int	Volume;
		///组合指令方向
		EnumCombDirectionType	CombDirection;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///本地申请组合编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///组合状态
		EnumOrderActionStatusType	ActionStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///序号
		int	SequenceNo;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///组合编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ComTradeID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///申请组合查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCombActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///交易所申请组合信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeCombActionField
	{
		///买卖方向
		EnumDirectionType	Direction;
		///数量
		int	Volume;
		///组合指令方向
		EnumCombDirectionType	CombDirection;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///本地申请组合编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///组合状态
		EnumOrderActionStatusType	ActionStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///序号
		int	SequenceNo;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///组合编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ComTradeID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
	};

	///交易所申请组合查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeCombActionField
	{
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///产品报价汇率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcProductExchRateField
	{
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///报价币种类型
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	QuoteCurrencyID;
		///汇率
		double	ExchangeRate;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///产品报价汇率查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryProductExchRateField
	{
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///查询询价价差参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryForQuoteParamField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///询价价差参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcForQuoteParamField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///最新价
		double	LastPrice;
		///价差
		double	PriceInterval;
	};

	///当前做市商期权合约手续费的详细内容
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMMOptionInstrCommRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///开仓手续费率
		double	OpenRatioByMoney;
		///开仓手续费
		double	OpenRatioByVolume;
		///平仓手续费率
		double	CloseRatioByMoney;
		///平仓手续费
		double	CloseRatioByVolume;
		///平今手续费率
		double	CloseTodayRatioByMoney;
		///平今手续费
		double	CloseTodayRatioByVolume;
		///执行手续费率
		double	StrikeRatioByMoney;
		///执行手续费
		double	StrikeRatioByVolume;
	};

	///做市商期权手续费率查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryMMOptionInstrCommRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///做市商合约手续费率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMMInstrumentCommissionRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///开仓手续费率
		double	OpenRatioByMoney;
		///开仓手续费
		double	OpenRatioByVolume;
		///平仓手续费率
		double	CloseRatioByMoney;
		///平仓手续费
		double	CloseRatioByVolume;
		///平今手续费率
		double	CloseTodayRatioByMoney;
		///平今手续费
		double	CloseTodayRatioByVolume;
	};

	///查询做市商合约手续费率
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryMMInstrumentCommissionRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///当前报单手续费的详细内容
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentOrderCommRateField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///报单手续费
		double	OrderCommByVolume;
		///撤单手续费
		double	OrderActionCommByVolume;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///报单手续费率查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInstrumentOrderCommRateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///交易参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradeParamField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///参数代码
		EnumTradeParamIDType	TradeParamID;
		///参数代码值
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 256)]
String^	TradeParamValue;
		///备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	Memo;
	};

	///合约保证金率调整
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentMarginRateULField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///多头保证金率
		double	LongMarginRatioByMoney;
		///多头保证金费
		double	LongMarginRatioByVolume;
		///空头保证金率
		double	ShortMarginRatioByMoney;
		///空头保证金费
		double	ShortMarginRatioByVolume;
	};

	///期货持仓限制参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcFutureLimitPosiParamField
	{
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///当日投机开仓数量限制
		int	SpecOpenVolume;
		///当日套利开仓数量限制
		int	ArbiOpenVolume;
		///当日投机+套利开仓数量限制
		int	OpenVolume;
	};

	///禁止登录IP
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcLoginForbiddenIPField
	{
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
	};

	///IP列表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcIPListField
	{
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///是否白名单
		int	IsWhite;
	};

	///输入的期权自对冲
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputOptionSelfCloseField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///期权自对冲引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OptionSelfCloseRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///期权行权的头寸是否自对冲
		EnumOptSelfCloseFlagType	OptSelfCloseFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///输入期权自对冲操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInputOptionSelfCloseActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///期权自对冲操作引用
		int	OptionSelfCloseActionRef;
		///期权自对冲引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OptionSelfCloseRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///期权自对冲操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OptionSelfCloseSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///期权自对冲
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionSelfCloseField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///期权自对冲引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OptionSelfCloseRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///期权行权的头寸是否自对冲
		EnumOptSelfCloseFlagType	OptSelfCloseFlag;
		///本地期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OptionSelfCloseLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///期权自对冲提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OptionSelfCloseSysID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///自对冲结果
		EnumExecResultType	ExecResult;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///操作用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ActiveUserID;
		///经纪公司报单编号
		int	BrokerOptionSelfCloseSeq;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///期权自对冲操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOptionSelfCloseActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///期权自对冲操作引用
		int	OptionSelfCloseActionRef;
		///期权自对冲引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OptionSelfCloseRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///期权自对冲操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OptionSelfCloseSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OptionSelfCloseLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///期权自对冲查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOptionSelfCloseField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OptionSelfCloseSysID;
		///开始时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeStart;
		///结束时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTimeEnd;
	};

	///交易所期权自对冲信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeOptionSelfCloseField
	{
		///数量
		int	Volume;
		///请求编号
		int	RequestID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///期权行权的头寸是否自对冲
		EnumOptSelfCloseFlagType	OptSelfCloseFlag;
		///本地期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OptionSelfCloseLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///期权自对冲提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OptionSelfCloseSysID;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///插入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///自对冲结果
		EnumExecResultType	ExecResult;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///期权自对冲操作查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryOptionSelfCloseActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///交易所期权自对冲操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeOptionSelfCloseActionField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///期权自对冲操作编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OptionSelfCloseSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地期权自对冲编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OptionSelfCloseLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///期权行权的头寸是否自对冲
		EnumOptSelfCloseFlagType	OptSelfCloseFlag;
	};

	///延时换汇同步
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncDelaySwapField
	{
		///换汇流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	DelaySwapSeqNo;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///源币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	FromCurrencyID;
		///源金额
		double	FromAmount;
		///源换汇冻结金额(可用冻结)
		double	FromFrozenSwap;
		///源剩余换汇额度(可提冻结)
		double	FromRemainSwap;
		///目标币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	ToCurrencyID;
		///目标金额
		double	ToAmount;
	};

	///查询延时换汇同步
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySyncDelaySwapField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///延时换汇流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	DelaySwapSeqNo;
	};

	///投资单元
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestUnitField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///投资者单元名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	InvestorUnitName;
		///投资者分组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorGroupID;
		///手续费率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	CommModelID;
		///保证金率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	MarginModelID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///查询投资单元
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestUnitField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///二级代理商资金校验模式
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSecAgentCheckModeField
	{
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///境外中介机构资金帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	BrokerSecAgentID;
		///是否需要校验自己的资金账户
		int	CheckSelfAccount;
	};

	///二级代理商信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSecAgentTradeInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///境外中介机构资金帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	BrokerSecAgentID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///二级代理商姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///市场行情
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///最新价
		double	LastPrice;
		///上次结算价
		double	PreSettlementPrice;
		///昨收盘
		double	PreClosePrice;
		///昨持仓量
		double	PreOpenInterest;
		///今开盘
		double	OpenPrice;
		///最高价
		double	HighestPrice;
		///最低价
		double	LowestPrice;
		///数量
		int	Volume;
		///成交金额
		double	Turnover;
		///持仓量
		double	OpenInterest;
		///今收盘
		double	ClosePrice;
		///本次结算价
		double	SettlementPrice;
		///涨停板价
		double	UpperLimitPrice;
		///跌停板价
		double	LowerLimitPrice;
		///昨虚实度
		double	PreDelta;
		///今虚实度
		double	CurrDelta;
		///最后修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	UpdateTime;
		///最后修改毫秒
		int	UpdateMillisec;
		///业务日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDay;
	};

	///行情基础属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataBaseField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///上次结算价
		double	PreSettlementPrice;
		///昨收盘
		double	PreClosePrice;
		///昨持仓量
		double	PreOpenInterest;
		///昨虚实度
		double	PreDelta;
	};

	///行情静态属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataStaticField
	{
		///今开盘
		double	OpenPrice;
		///最高价
		double	HighestPrice;
		///最低价
		double	LowestPrice;
		///今收盘
		double	ClosePrice;
		///涨停板价
		double	UpperLimitPrice;
		///跌停板价
		double	LowerLimitPrice;
		///本次结算价
		double	SettlementPrice;
		///今虚实度
		double	CurrDelta;
	};

	///行情最新成交属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataLastMatchField
	{
		///最新价
		double	LastPrice;
		///数量
		int	Volume;
		///成交金额
		double	Turnover;
		///持仓量
		double	OpenInterest;
	};

	///行情最优价属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataBestPriceField
	{
		///申买价一
		double	BidPrice1;
		///申买量一
		int	BidVolume1;
		///申卖价一
		double	AskPrice1;
		///申卖量一
		int	AskVolume1;
	};

	///行情申买二、三属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataBid23Field
	{
		///申买价二
		double	BidPrice2;
		///申买量二
		int	BidVolume2;
		///申买价三
		double	BidPrice3;
		///申买量三
		int	BidVolume3;
	};

	///行情申卖二、三属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataAsk23Field
	{
		///申卖价二
		double	AskPrice2;
		///申卖量二
		int	AskVolume2;
		///申卖价三
		double	AskPrice3;
		///申卖量三
		int	AskVolume3;
	};

	///行情申买四、五属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataBid45Field
	{
		///申买价四
		double	BidPrice4;
		///申买量四
		int	BidVolume4;
		///申买价五
		double	BidPrice5;
		///申买量五
		int	BidVolume5;
	};

	///行情申卖四、五属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataAsk45Field
	{
		///申卖价四
		double	AskPrice4;
		///申卖量四
		int	AskVolume4;
		///申卖价五
		double	AskPrice5;
		///申卖量五
		int	AskVolume5;
	};

	///行情更新时间属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataUpdateTimeField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///最后修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	UpdateTime;
		///最后修改毫秒
		int	UpdateMillisec;
		///业务日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDay;
	};

	///行情交易所代码属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataExchangeField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///指定的合约
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSpecificInstrumentField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///合约状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInstrumentStatusField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///结算组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	SettlementGroupID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///合约交易状态
		EnumInstrumentStatusType	InstrumentStatus;
		///交易阶段编号
		int	TradingSegmentSN;
		///进入本状态时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	EnterTime;
		///进入本状态原因
		EnumInstStatusEnterReasonType	EnterReason;
	};

	///查询合约状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInstrumentStatusField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
	};

	///投资者账户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorAccountField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///浮动盈亏算法
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcPositionProfitAlgorithmField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///盈亏算法
		EnumAlgorithmType	Algorithm;
		///备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	Memo;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///会员资金折扣
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcDiscountField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///资金折扣比例
		double	Discount;
	};

	///查询转帐银行
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTransferBankField
	{
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分中心代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBrchID;
	};

	///转帐银行
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferBankField
	{
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分中心代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBrchID;
		///银行名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	BankName;
		///是否活跃
		int	IsActive;
	};

	///查询投资者持仓明细
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestorPositionDetailField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///投资者持仓明细
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorPositionDetailField
	{
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///买卖
		EnumDirectionType	Direction;
		///开仓日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OpenDate;
		///成交编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TradeID;
		///数量
		int	Volume;
		///开仓价
		double	OpenPrice;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///成交类型
		EnumTradeTypeType	TradeType;
		///组合合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	CombInstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///逐日盯市平仓盈亏
		double	CloseProfitByDate;
		///逐笔对冲平仓盈亏
		double	CloseProfitByTrade;
		///逐日盯市持仓盈亏
		double	PositionProfitByDate;
		///逐笔对冲持仓盈亏
		double	PositionProfitByTrade;
		///投资者保证金
		double	Margin;
		///交易所保证金
		double	ExchMargin;
		///保证金率
		double	MarginRateByMoney;
		///保证金率(按手数)
		double	MarginRateByVolume;
		///昨结算价
		double	LastSettlementPrice;
		///结算价
		double	SettlementPrice;
		///平仓量
		int	CloseVolume;
		///平仓金额
		double	CloseAmount;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///资金账户口令域
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingAccountPasswordField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///交易所行情报盘机
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMDTraderOfferField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///交易所交易员连接状态
		EnumTraderConnectStatusType	TraderConnectStatus;
		///发出连接请求的日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectRequestDate;
		///发出连接请求的时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectRequestTime;
		///上次报告日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LastReportDate;
		///上次报告时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	LastReportTime;
		///完成连接日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectDate;
		///完成连接时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ConnectTime;
		///启动日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	StartDate;
		///启动时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	StartTime;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///本席位最大成交编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MaxTradeID;
		///本席位最大报单备拷
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	MaxOrderMessageReference;
	};

	///查询行情报盘机
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryMDTraderOfferField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
	};

	///查询客户通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryNoticeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///客户通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcNoticeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///消息正文
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
String^	Content;
		///经纪公司通知内容序列号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
String^	SequenceLabel;
	};

	///用户权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserRightField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///客户权限类型
		EnumUserRightTypeType	UserRightType;
		///是否禁止
		int	IsForbidden;
	};

	///查询结算信息确认域
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySettlementInfoConfirmField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///装载结算信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcLoadSettlementInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///经纪公司可提资金算法表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerWithdrawAlgorithmField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///可提资金算法
		EnumAlgorithmType	WithdrawAlgorithm;
		///资金使用率
		double	UsingRatio;
		///可提是否包含平仓盈利
		EnumIncludeCloseProfitType	IncludeCloseProfit;
		///本日无仓且无成交客户是否受可提比例限制
		EnumAllWithoutTradeType	AllWithoutTrade;
		///可用是否包含平仓盈利
		EnumIncludeCloseProfitType	AvailIncludeCloseProfit;
		///是否启用用户事件
		int	IsBrokerUserEvent;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///货币质押比率
		double	FundMortgageRatio;
		///权益算法
		EnumBalanceAlgorithmType	BalanceAlgorithm;
	};

	///资金账户口令变更域
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingAccountPasswordUpdateV1Field
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///原来的口令
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	OldPassword;
		///新的口令
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewPassword;
	};

	///资金账户口令变更域
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingAccountPasswordUpdateField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///原来的口令
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	OldPassword;
		///新的口令
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewPassword;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///查询组合合约分腿
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCombinationLegField
	{
		///组合合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	CombInstrumentID;
		///单腿编号
		int	LegID;
		///单腿合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	LegInstrumentID;
	};

	///查询组合合约分腿
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySyncStatusField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
	};

	///组合交易合约的单腿
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCombinationLegField
	{
		///组合合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	CombInstrumentID;
		///单腿编号
		int	LegID;
		///单腿合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	LegInstrumentID;
		///买卖方向
		EnumDirectionType	Direction;
		///单腿乘数
		int	LegMultiple;
		///派生层数
		int	ImplyLevel;
	};

	///数据同步状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSyncStatusField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///数据同步状态
		EnumDataSyncStatusType	DataSyncStatus;
	};

	///查询联系人
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryLinkManField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///联系人
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcLinkManField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///联系人类型
		EnumPersonTypeType	PersonType;
		///证件类型
		EnumIdCardTypeType	IdentifiedCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	PersonName;
		///联系电话
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///通讯地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮政编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///优先级
		int	Priority;
		///开户邮政编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	UOAZipCode;
		///全称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	PersonFullName;
	};

	///查询经纪公司用户事件
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBrokerUserEventField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户事件类型
		EnumUserEventTypeType	UserEventType;
	};

	///查询经纪公司用户事件
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerUserEventField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户事件类型
		EnumUserEventTypeType	UserEventType;
		///用户事件序号
		int	EventSequenceNo;
		///事件发生日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	EventDate;
		///事件发生时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	EventTime;
		///用户事件信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 1025)]
String^	UserEventInfo;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///查询签约银行请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryContractBankField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分中心代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBrchID;
	};

	///查询签约银行响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcContractBankField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分中心代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBrchID;
		///银行名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	BankName;
	};

	///投资者组合持仓明细
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorPositionCombineDetailField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///开仓日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OpenDate;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///结算编号
		int	SettlementID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///组合编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ComTradeID;
		///撮合编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TradeID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///买卖
		EnumDirectionType	Direction;
		///持仓量
		int	TotalAmt;
		///投资者保证金
		double	Margin;
		///交易所保证金
		double	ExchMargin;
		///保证金率
		double	MarginRateByMoney;
		///保证金率(按手数)
		double	MarginRateByVolume;
		///单腿编号
		int	LegID;
		///单腿乘数
		int	LegMultiple;
		///组合持仓合约编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	CombInstrumentID;
		///成交组号
		int	TradeGroupID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///预埋单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcParkedOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///报单价格条件
		EnumOrderPriceTypeType	OrderPriceType;
		///买卖方向
		EnumDirectionType	Direction;
		///组合开平标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombOffsetFlag;
		///组合投机套保标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombHedgeFlag;
		///价格
		double	LimitPrice;
		///数量
		int	VolumeTotalOriginal;
		///有效期类型
		EnumTimeConditionType	TimeCondition;
		///GTD日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	GTDDate;
		///成交量类型
		EnumVolumeConditionType	VolumeCondition;
		///最小成交量
		int	MinVolume;
		///触发条件
		EnumContingentConditionType	ContingentCondition;
		///止损价
		double	StopPrice;
		///强平原因
		EnumForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		int	IsAutoSuspend;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///请求编号
		int	RequestID;
		///用户强评标志
		int	UserForceClose;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///预埋报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ParkedOrderID;
		///用户类型
		EnumUserTypeType	UserType;
		///预埋单状态
		EnumParkedOrderStatusType	Status;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///互换单标志
		int	IsSwapOrder;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///输入预埋单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcParkedOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报单操作引用
		int	OrderActionRef;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///价格
		double	LimitPrice;
		///数量变化
		int	VolumeChange;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///预埋撤单单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ParkedOrderActionID;
		///用户类型
		EnumUserTypeType	UserType;
		///预埋撤单状态
		EnumParkedOrderStatusType	Status;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///查询预埋单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryParkedOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询预埋撤单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryParkedOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///删除预埋单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRemoveParkedOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///预埋报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ParkedOrderID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///删除预埋撤单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRemoveParkedOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///预埋撤单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ParkedOrderActionID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///经纪公司可提资金算法表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorWithdrawAlgorithmField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///可提资金比例
		double	UsingRatio;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///货币质押比率
		double	FundMortgageRatio;
	};

	///查询组合持仓明细
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestorPositionCombineDetailField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///组合持仓合约编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	CombInstrumentID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///成交均价
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarketDataAveragePriceField
	{
		///当日均价
		double	AveragePrice;
	};

	///校验投资者密码
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcVerifyInvestorPasswordField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
	};

	///用户IP
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserIPField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///IP地址掩码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPMask;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///用户事件通知信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingNoticeInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///发送时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SendTime;
		///消息正文
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
String^	FieldContent;
		///序列系列号
		short	SequenceSeries;
		///序列号
		int	SequenceNo;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///用户事件通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingNoticeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者范围
		EnumInvestorRangeType	InvestorRange;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///序列系列号
		short	SequenceSeries;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///发送时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SendTime;
		///序列号
		int	SequenceNo;
		///消息正文
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
String^	FieldContent;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询交易事件通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTradingNoticeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询错误报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryErrOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///错误报单
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcErrOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///报单价格条件
		EnumOrderPriceTypeType	OrderPriceType;
		///买卖方向
		EnumDirectionType	Direction;
		///组合开平标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombOffsetFlag;
		///组合投机套保标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombHedgeFlag;
		///价格
		double	LimitPrice;
		///数量
		int	VolumeTotalOriginal;
		///有效期类型
		EnumTimeConditionType	TimeCondition;
		///GTD日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	GTDDate;
		///成交量类型
		EnumVolumeConditionType	VolumeCondition;
		///最小成交量
		int	MinVolume;
		///触发条件
		EnumContingentConditionType	ContingentCondition;
		///止损价
		double	StopPrice;
		///强平原因
		EnumForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		int	IsAutoSuspend;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///请求编号
		int	RequestID;
		///用户强评标志
		int	UserForceClose;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///互换单标志
		int	IsSwapOrder;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///查询错误报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcErrorConditionalOrderField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///报单价格条件
		EnumOrderPriceTypeType	OrderPriceType;
		///买卖方向
		EnumDirectionType	Direction;
		///组合开平标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombOffsetFlag;
		///组合投机套保标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
String^	CombHedgeFlag;
		///价格
		double	LimitPrice;
		///数量
		int	VolumeTotalOriginal;
		///有效期类型
		EnumTimeConditionType	TimeCondition;
		///GTD日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	GTDDate;
		///成交量类型
		EnumVolumeConditionType	VolumeCondition;
		///最小成交量
		int	MinVolume;
		///触发条件
		EnumContingentConditionType	ContingentCondition;
		///止损价
		double	StopPrice;
		///强平原因
		EnumForceCloseReasonType	ForceCloseReason;
		///自动挂起标志
		int	IsAutoSuspend;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///请求编号
		int	RequestID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///合约在交易所的代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ExchangeInstID;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///报单提交状态
		EnumOrderSubmitStatusType	OrderSubmitStatus;
		///报单提示序号
		int	NotifySequence;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///报单来源
		EnumOrderSourceType	OrderSource;
		///报单状态
		EnumOrderStatusType	OrderStatus;
		///报单类型
		EnumOrderTypeType	OrderType;
		///今成交数量
		int	VolumeTraded;
		///剩余数量
		int	VolumeTotal;
		///报单日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertDate;
		///委托时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	InsertTime;
		///激活时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActiveTime;
		///挂起时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SuspendTime;
		///最后修改时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	UpdateTime;
		///撤销时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelTime;
		///最后修改交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ActiveTraderID;
		///结算会员编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClearingPartID;
		///序号
		int	SequenceNo;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///用户强评标志
		int	UserForceClose;
		///操作用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ActiveUserID;
		///经纪公司报单编号
		int	BrokerOrderSeq;
		///相关报单
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	RelativeOrderSysID;
		///郑商所成交数量
		int	ZCETotalTradedVolume;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///互换单标志
		int	IsSwapOrder;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///资金账号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
	};

	///查询错误报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryErrOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///错误报单操作
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcErrOrderActionField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///报单操作引用
		int	OrderActionRef;
		///报单引用
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	OrderRef;
		///请求编号
		int	RequestID;
		///前置编号
		int	FrontID;
		///会话编号
		int	SessionID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	OrderSysID;
		///操作标志
		EnumActionFlagType	ActionFlag;
		///价格
		double	LimitPrice;
		///数量变化
		int	VolumeChange;
		///操作日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionDate;
		///操作时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ActionTime;
		///交易所交易员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	TraderID;
		///安装编号
		int	InstallID;
		///本地报单编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	OrderLocalID;
		///操作本地编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	ActionLocalID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///客户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ClientID;
		///业务单元
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	BusinessUnit;
		///报单操作状态
		EnumOrderActionStatusType	OrderActionStatus;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///状态信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	StatusMsg;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///营业部编号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	BranchID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///查询交易所状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryExchangeSequenceField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///交易所状态
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcExchangeSequenceField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///序号
		int	SequenceNo;
		///合约交易状态
		EnumInstrumentStatusType	MarketStatus;
	};

	///根据价格查询最大报单数量
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQueryMaxOrderVolumeWithPriceField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///买卖方向
		EnumDirectionType	Direction;
		///开平标志
		EnumOffsetFlagType	OffsetFlag;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///最大允许报单数量
		int	MaxVolume;
		///报单价格
		double	Price;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询经纪公司交易参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBrokerTradingParamsField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
	};

	///经纪公司交易参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerTradingParamsField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///保证金价格类型
		EnumMarginPriceTypeType	MarginPriceType;
		///盈亏算法
		EnumAlgorithmType	Algorithm;
		///可用是否包含平仓盈利
		EnumIncludeCloseProfitType	AvailIncludeCloseProfit;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///期权权利金价格类型
		EnumOptionRoyaltyPriceTypeType	OptionRoyaltyPriceType;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
	};

	///查询经纪公司交易算法
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBrokerTradingAlgosField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
	};

	///经纪公司交易算法
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerTradingAlgosField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///持仓处理算法编号
		EnumHandlePositionAlgoIDType	HandlePositionAlgoID;
		///寻找保证金率算法编号
		EnumFindMarginRateAlgoIDType	FindMarginRateAlgoID;
		///资金处理算法编号
		EnumHandleTradingAccountAlgoIDType	HandleTradingAccountAlgoID;
	};

	///查询经纪公司资金
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQueryBrokerDepositField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///经纪公司资金
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerDepositField
	{
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///会员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///上次结算准备金
		double	PreBalance;
		///当前保证金总额
		double	CurrMargin;
		///平仓盈亏
		double	CloseProfit;
		///期货结算准备金
		double	Balance;
		///入金金额
		double	Deposit;
		///出金金额
		double	Withdraw;
		///可提资金
		double	Available;
		///基本准备金
		double	Reserve;
		///冻结的保证金
		double	FrozenMargin;
	};

	///查询保证金监管系统经纪公司密钥
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCFMMCBrokerKeyField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
	};

	///保证金监管系统经纪公司密钥
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCFMMCBrokerKeyField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///经纪公司统一编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///密钥生成日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CreateDate;
		///密钥生成时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CreateTime;
		///密钥编号
		int	KeyID;
		///动态密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CurrentKey;
		///动态密钥类型
		EnumCFMMCKeyKindType	KeyKind;
	};

	///保证金监管系统经纪公司资金账户密钥
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCFMMCTradingAccountKeyField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///经纪公司统一编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///密钥编号
		int	KeyID;
		///动态密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CurrentKey;
	};

	///请求查询保证金监管系统经纪公司资金账户密钥
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCFMMCTradingAccountKeyField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///用户动态令牌参数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerUserOTPParamField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///动态令牌提供商
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
String^	OTPVendorsID;
		///动态令牌序列号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	SerialNumber;
		///令牌密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	AuthKey;
		///漂移值
		int	LastDrift;
		///成功值
		int	LastSuccess;
		///动态令牌类型
		EnumOTPTypeType	OTPType;
	};

	///手工同步用户动态令牌
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcManualSyncBrokerUserOTPField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///动态令牌类型
		EnumOTPTypeType	OTPType;
		///第一个动态密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	FirstOTP;
		///第二个动态密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	SecondOTP;
	};

	///投资者手续费率模板
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCommRateModelField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///手续费率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	CommModelID;
		///模板名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	CommModelName;
	};

	///请求查询投资者手续费率模板
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCommRateModelField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///手续费率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	CommModelID;
	};

	///投资者保证金率模板
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMarginModelField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///保证金率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	MarginModelID;
		///模板名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	MarginModelName;
	};

	///请求查询投资者保证金率模板
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryMarginModelField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///保证金率模板代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	MarginModelID;
	};

	///仓单折抵信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcEWarrantOffsetField
	{
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///买卖方向
		EnumDirectionType	Direction;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///数量
		int	Volume;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询仓单折抵信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryEWarrantOffsetField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///合约代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	InstrumentID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询投资者品种/跨品种保证金
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryInvestorProductGroupMarginField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///品种/跨品种标示
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductGroupID;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///投资者品种/跨品种保证金
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcInvestorProductGroupMarginField
	{
		///品种/跨品种标示
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductGroupID;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///结算编号
		int	SettlementID;
		///冻结的保证金
		double	FrozenMargin;
		///多头冻结的保证金
		double	LongFrozenMargin;
		///空头冻结的保证金
		double	ShortFrozenMargin;
		///占用的保证金
		double	UseMargin;
		///多头保证金
		double	LongUseMargin;
		///空头保证金
		double	ShortUseMargin;
		///交易所保证金
		double	ExchMargin;
		///交易所多头保证金
		double	LongExchMargin;
		///交易所空头保证金
		double	ShortExchMargin;
		///平仓盈亏
		double	CloseProfit;
		///冻结的手续费
		double	FrozenCommission;
		///手续费
		double	Commission;
		///冻结的资金
		double	FrozenCash;
		///资金差额
		double	CashIn;
		///持仓盈亏
		double	PositionProfit;
		///折抵总金额
		double	OffsetAmount;
		///多头折抵总金额
		double	LongOffsetAmount;
		///空头折抵总金额
		double	ShortOffsetAmount;
		///交易所折抵总金额
		double	ExchOffsetAmount;
		///交易所多头折抵总金额
		double	LongExchOffsetAmount;
		///交易所空头折抵总金额
		double	ShortExchOffsetAmount;
		///投机套保标志
		EnumHedgeFlagType	HedgeFlag;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///查询监控中心用户令牌
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQueryCFMMCTradingAccountTokenField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///投资单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	InvestUnitID;
	};

	///监控中心用户令牌
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCFMMCTradingAccountTokenField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///经纪公司统一编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
String^	ParticipantID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///密钥编号
		int	KeyID;
		///动态令牌
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	Token;
	};

	///查询产品组
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryProductGroupField
	{
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
	};

	///投资者品种/跨品种保证金产品组
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcProductGroupField
	{
		///产品代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductID;
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///产品组代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	ProductGroupID;
	};

	///交易所公告
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBulletinField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///公告编号
		int	BulletinID;
		///序列号
		int	SequenceNo;
		///公告类型
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
String^	NewsType;
		///紧急程度
char	NewsUrgency;
		///发送时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	SendTime;
		///消息摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
String^	Abstract;
		///消息来源
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	ComeFrom;
		///消息正文
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 501)]
String^	Content;
		///WEB地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 201)]
String^	URLLink;
		///市场代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	MarketID;
	};

	///查询交易所公告
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryBulletinField
	{
		///交易所代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
String^	ExchangeID;
		///公告编号
		int	BulletinID;
		///序列号
		int	SequenceNo;
		///公告类型
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
String^	NewsType;
		///紧急程度
		char	NewsUrgency;
	};

	///转帐开户请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqOpenAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///汇钞标志
		EnumCashExchangeCodeType	CashExchangeCode;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///交易ID
		int	TID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///转帐销户请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqCancelAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///汇钞标志
		EnumCashExchangeCodeType	CashExchangeCode;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///交易ID
		int	TID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///变更银行账户请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqChangeAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///新银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewBankAccount;
		///新银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewBankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易ID
		int	TID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///转账请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqTransferField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///期货公司流水号
		int	FutureSerial;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///转帐金额
		double	TradeAmount;
		///期货可取金额
		double	FutureFetchAmount;
		///费用支付标志
		EnumFeePayFlagType	FeePayFlag;
		///应收客户费用
		double	CustFee;
		///应收期货公司费用
		double	BrokerFee;
		///发送方给接收方的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///转账交易状态
		EnumTransferStatusType	TransferStatus;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///银行发起银行资金转期货响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspTransferField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///期货公司流水号
		int	FutureSerial;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///转帐金额
		double	TradeAmount;
		///期货可取金额
		double	FutureFetchAmount;
		///费用支付标志
		EnumFeePayFlagType	FeePayFlag;
		///应收客户费用
		double	CustFee;
		///应收期货公司费用
		double	BrokerFee;
		///发送方给接收方的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///转账交易状态
		EnumTransferStatusType	TransferStatus;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///冲正请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqRepealField
	{
		///冲正时间间隔
		int	RepealTimeInterval;
		///已经冲正次数
		int	RepealedTimes;
		///银行冲正标志
		EnumBankRepealFlagType	BankRepealFlag;
		///期商冲正标志
		EnumBrokerRepealFlagType	BrokerRepealFlag;
		///被冲正平台流水号
		int	PlateRepealSerial;
		///被冲正银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankRepealSerial;
		///被冲正期货流水号
		int	FutureRepealSerial;
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///期货公司流水号
		int	FutureSerial;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///转帐金额
		double	TradeAmount;
		///期货可取金额
		double	FutureFetchAmount;
		///费用支付标志
		EnumFeePayFlagType	FeePayFlag;
		///应收客户费用
		double	CustFee;
		///应收期货公司费用
		double	BrokerFee;
		///发送方给接收方的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///转账交易状态
		EnumTransferStatusType	TransferStatus;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///冲正响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspRepealField
	{
		///冲正时间间隔
		int	RepealTimeInterval;
		///已经冲正次数
		int	RepealedTimes;
		///银行冲正标志
		EnumBankRepealFlagType	BankRepealFlag;
		///期商冲正标志
		EnumBrokerRepealFlagType	BrokerRepealFlag;
		///被冲正平台流水号
		int	PlateRepealSerial;
		///被冲正银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankRepealSerial;
		///被冲正期货流水号
		int	FutureRepealSerial;
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///期货公司流水号
		int	FutureSerial;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///转帐金额
		double	TradeAmount;
		///期货可取金额
		double	FutureFetchAmount;
		///费用支付标志
		EnumFeePayFlagType	FeePayFlag;
		///应收客户费用
		double	CustFee;
		///应收期货公司费用
		double	BrokerFee;
		///发送方给接收方的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///转账交易状态
		EnumTransferStatusType	TransferStatus;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///查询账户信息请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqQueryAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///期货公司流水号
		int	FutureSerial;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///查询账户信息响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspQueryAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///期货公司流水号
		int	FutureSerial;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///银行可用金额
		double	BankUseAmount;
		///银行可取金额
		double	BankFetchAmount;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///期商签到签退
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcFutureSignIOField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
	};

	///期商签到响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspFutureSignInField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///PIN密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	PinKey;
		///MAC密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	MacKey;
	};

	///期商签退请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqFutureSignOutField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
	};

	///期商签退响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspFutureSignOutField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///查询指定流水号的交易结果请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqQueryTradeResultBySerialField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///流水号
		int	Reference;
		///本流水号发布者的机构类型
		EnumInstitutionTypeType	RefrenceIssureType;
		///本流水号发布者机构编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	RefrenceIssure;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///转帐金额
		double	TradeAmount;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///查询指定流水号的交易结果响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspQueryTradeResultBySerialField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///流水号
		int	Reference;
		///本流水号发布者的机构类型
		EnumInstitutionTypeType	RefrenceIssureType;
		///本流水号发布者机构编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	RefrenceIssure;
		///原始返回代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	OriginReturnCode;
		///原始返回码描述
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	OriginDescrInfoForReturnCode;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///转帐金额
		double	TradeAmount;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
	};

	///日终文件就绪请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqDayEndFileReadyField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///文件业务功能
		EnumFileBusinessCodeType	FileBusinessCode;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
	};

	///返回结果
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReturnResultField
	{
		///返回代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ReturnCode;
		///返回码描述
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	DescrInfoForReturnCode;
	};

	///验证期货资金密码
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcVerifyFuturePasswordField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///安装编号
		int	InstallID;
		///交易ID
		int	TID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///验证客户信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcVerifyCustInfoField
	{
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///验证期货资金密码和客户信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcVerifyFuturePasswordAndCustInfoField
	{
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///验证期货资金密码和客户信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcDepositResultInformField
	{
		///出入金流水号，该流水号为银期报盘返回的流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
String^	DepositSeqNo;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///入金金额
		double	Deposit;
		///请求编号
		int	RequestID;
		///返回代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ReturnCode;
		///返回码描述
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	DescrInfoForReturnCode;
	};

	///交易核心向银期报盘发出密钥同步请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqSyncKeyField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易核心给银期报盘的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
	};

	///交易核心向银期报盘发出密钥同步响应
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspSyncKeyField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易核心给银期报盘的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///查询账户信息通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcNotifyQueryAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///期货公司流水号
		int	FutureSerial;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///银行可用金额
		double	BankUseAmount;
		///银行可取金额
		double	BankFetchAmount;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///银期转账交易流水表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTransferSerialField
	{
		///平台流水号
		int	PlateSerial;
		///交易发起方日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///交易代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///会话编号
		int	SessionID;
		///银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///期货公司编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///期货公司帐号类型
		EnumFutureAccTypeType	FutureAccType;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
		///期货公司流水号
		int	FutureSerial;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///交易金额
		double	TradeAmount;
		///应收客户费用
		double	CustFee;
		///应收期货公司费用
		double	BrokerFee;
		///有效标志
		EnumAvailabilityFlagType	AvailabilityFlag;
		///操作员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
String^	OperatorCode;
		///新银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankNewAccount;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///请求查询转帐流水
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryTransferSerialField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///期商签到通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcNotifyFutureSignInField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///PIN密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	PinKey;
		///MAC密钥
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	MacKey;
	};

	///期商签退通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcNotifyFutureSignOutField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///交易核心向银期报盘发出密钥同步处理结果的通知
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcNotifySyncKeyField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///安装编号
		int	InstallID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易核心给银期报盘的消息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 129)]
String^	Message;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///请求编号
		int	RequestID;
		///交易ID
		int	TID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///请求查询银期签约关系
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryAccountregisterField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///客户开销户信息表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcAccountregisterField
	{
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDay;
		///银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///期货公司编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期货公司分支机构编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///开销户类别
		EnumOpenOrDestroyType	OpenOrDestroy;
		///签约日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	RegDate;
		///解约日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OutDate;
		///交易ID
		int	TID;
		///客户类型
		EnumCustTypeType	CustType;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///银期开户信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcOpenAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///汇钞标志
		EnumCashExchangeCodeType	CashExchangeCode;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///交易ID
		int	TID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///银期销户信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCancelAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///汇钞标志
		EnumCashExchangeCodeType	CashExchangeCode;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///渠道标志
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 3)]
		String^	DeviceID;
		///期货单位帐号类型
		EnumBankAccTypeType	BankSecuAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///期货单位帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankSecuAcc;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易柜员
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^	OperNo;
		///交易ID
		int	TID;
		///用户标识
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///银期变更银行账号信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcChangeAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///新银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewBankAccount;
		///新银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	NewBankPassWord;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///银行密码标志
		EnumPwdFlagType	BankPwdFlag;
		///期货资金密码核对标志
		EnumPwdFlagType	SecuPwdFlag;
		///交易ID
		int	TID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
		///长客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	LongCustomerName;
	};

	///二级代理操作员银期权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcSecAgentACIDMapField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///境外中介机构资金帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	BrokerSecAgentID;
	};

	///二级代理操作员银期权限查询
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySecAgentACIDMapField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///资金账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///币种
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///灾备中心交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserRightsAssignField
	{
		///应用单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///交易中心代码
		int	DRIdentityID;
	};

	///经济公司是否有在本标示的交易权限
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcBrokerUserRightAssignField
	{
		///应用单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///交易中心代码
		int	DRIdentityID;
		///能否交易
		int	Tradeable;
	};

	///灾备交易转换报文
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcDRTransferField
	{
		///原交易中心代码
		int	OrigDRIdentityID;
		///目标交易中心代码
		int	DestDRIdentityID;
		///原应用单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	OrigBrokerID;
		///目标易用单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	DestBrokerID;
	};

	///Fens用户信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcFensUserInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///登录模式
		EnumLoginModeType	LoginMode;
	};

	///当前银期所属交易中心
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCurrTransferIdentityField
	{
		///交易中心代码
		int	IdentityID;
	};

	///禁止登录用户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcLoginForbiddenUserField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
	};

	///查询禁止登录用户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryLoginForbiddenUserField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///UDP组播组信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcMulticastGroupInfoField
	{
		///组播组IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	GroupIP;
		///组播组IP端口
		int	GroupPort;
		///源地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	SourceIP;
	};

	///资金账户基本准备金
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcTradingAccountReserveField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///基本准备金
		double	Reserve;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///查询禁止登录IP
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryLoginForbiddenIPField
	{
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
	};

	///查询IP列表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryIPListField
	{
		///IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	IPAddress;
	};

	///查询用户下单权限分配表
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryUserRightsAssignField
	{
		///应用单元代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///银期预约开户确认请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReserveOpenAccountConfirmField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易ID
		int	TID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///期货密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///预约开户银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankReserveOpenSeq;
		///预约开户日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	BookDate;
		///预约开户验证密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BookPsw;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///银期预约开户
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReserveOpenAccountField
	{
		///业务功能码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
		String^	TradeCode;
		///银行代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^	BankBranchID;
		///期商代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///期商分支机构代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
String^	BrokerBranchID;
		///交易日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeDate;
		///交易时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradeTime;
		///银行流水号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	BankSerial;
		///交易系统日期 
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///银期平台消息流水号
		int	PlateSerial;
		///最后分片标志
		EnumLastFragmentType	LastFragment;
		///会话号
		int	SessionID;
		///客户姓名
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 161)]
String^	CustomerName;
		///证件类型
		EnumIdCardTypeType	IdCardType;
		///证件号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
String^	IdentifiedCardNo;
		///性别
		EnumGenderType	Gender;
		///国家代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	CountryCode;
		///客户类型
		EnumCustTypeType	CustType;
		///地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	Address;
		///邮编
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 7)]
String^	ZipCode;
		///电话号码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Telephone;
		///手机
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
String^	MobilePhone;
		///传真
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	Fax;
		///电子邮件
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
String^	EMail;
		///资金账户状态
		EnumMoneyAccountStatusType	MoneyAccountStatus;
		///银行帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankPassWord;
		///安装编号
		int	InstallID;
		///验证客户证件号码标志
		EnumYesNoIndicatorType	VerifyCertNoFlag;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
		///摘要
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
String^	Digest;
		///银行帐号类型
		EnumBankAccTypeType	BankAccType;
		///期货公司银行编码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
String^	BrokerIDByBank;
		///交易ID
		int	TID;
		///预约开户状态
		EnumReserveOpenAccStasType	ReserveOpenAccStas;
		///错误代码
		int	ErrorID;
		///错误信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^	ErrorMsg;
	};

	///银行账户属性
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcAccountPropertyField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	AccountID;
		///银行统一标识类型
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^	BankID;
		///银行账户
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	BankAccount;
		///银行账户的开户人名称
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	OpenName;
		///银行账户的开户行
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 101)]
String^	OpenBank;
		///是否活跃
		int	IsActive;
		///账户来源
		EnumAccountSourceTypeType	AccountSourceType;
		///开户日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OpenDate;
		///注销日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	CancelDate;
		///录入员代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 65)]
String^	OperatorID;
		///录入日期
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OperateDate;
		///录入时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	OperateTime;
		///币种代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
String^	CurrencyID;
	};

	///查询当前交易中心
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQryCurrDRIdentityField
	{
		///交易中心代码
		int	DRIdentityID;
	};

	///当前交易中心
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcCurrDRIdentityField
	{
		///交易中心代码
		int	DRIdentityID;
	};

	///查询二级代理商资金校验模式
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySecAgentCheckModeField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///查询二级代理商信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQrySecAgentTradeInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///境外中介机构资金帐号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^	BrokerSecAgentID;
	};

	///用户系统信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcUserSystemInfoField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///用户端系统内部信息长度
		int	ClientSystemInfoLen;
		///用户端系统内部信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 273)]
String^	ClientSystemInfo;
		///用户公网IP
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ClientPublicIP;
		///终端IP端口
		int	ClientIPPort;
		///登录成功时间
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	ClientLoginTime;
		///App代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 33)]
		String^	ClientAppID;
	};

	///用户发出获取安全安全登陆方法请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqUserAuthMethodField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///用户发出获取安全安全登陆方法回复
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspUserAuthMethodField
	{
		///当前可以用的认证模式
		int	UsableAuthMethod;
	};

	///用户发出获取安全安全登陆方法请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqGenUserCaptchaField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///生成的图片验证码信息
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspGenUserCaptchaField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///图片信息长度
		int	CaptchaInfoLen;
		///图片信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2561)]
String^	CaptchaInfo;
	};

	///用户发出获取安全安全登陆方法请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqGenUserTextField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
	};

	///短信验证码生成的回复
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspGenUserTextField
	{
		///短信验证码序号
		int	UserTextSeq;
	};

	///用户发出带图形验证码的登录请求请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqUserLoginWithCaptchaField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///接口端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	InterfaceProductInfo;
		///协议信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ProtocolInfo;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///终端IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ClientIPAddress;
		///登录备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
		///图形验证码的文字内容
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Captcha;
		///终端IP端口
		int	ClientIPPort;
	};

	///用户发出带短信验证码的登录请求请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqUserLoginWithTextField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///接口端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	InterfaceProductInfo;
		///协议信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ProtocolInfo;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///终端IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ClientIPAddress;
		///登录备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
		///短信验证码文字内容
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Text;
		///终端IP端口
		int	ClientIPPort;
	};

	///用户发出带动态验证码的登录请求请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqUserLoginWithOTPField
	{
		///交易日
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^	TradingDay;
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	Password;
		///用户端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	UserProductInfo;
		///接口端产品信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	InterfaceProductInfo;
		///协议信息
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	ProtocolInfo;
		///Mac地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^	MacAddress;
		///终端IP地址
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	ClientIPAddress;
		///登录备注
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^	LoginRemark;
		///OTP密码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^	OTPPassword;
		///终端IP端口
		int	ClientIPPort;
	};

	///api握手请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqApiHandshakeField
	{
		///api与front通信密钥版本号
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^	CryptoKeyVersion;
	};

	///front发给api的握手回复
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcRspApiHandshakeField
	{
		///握手回复数据长度
		int	FrontHandshakeDataLen;
		///握手回复数据
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 301)]
		String^	FrontHandshakeData;
		///API认证是否开启
		int	IsApiAuthEnabled;
	};

	///api给front的验证key的请求
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcReqVerifyApiKeyField
	{
		///握手回复数据长度
		int	ApiHandshakeDataLen;
		///握手回复数据
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 301)]
		String^	ApiHandshakeData;
	};

	///操作员组织架构关系
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcDepartmentUserField
	{
		///经纪公司代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^	BrokerID;
		///用户代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^	UserID;
		///投资者范围
		EnumDepartmentRangeType	InvestorRange;
		///投资者代码
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
String^	InvestorID;
	};

	///查询频率，每秒查询比数
	[StructLayout(LayoutKind::Sequential)]
	[Serializable]
	public ref struct ThostFtdcQueryFreqField
	{
		///查询频率
		int	QueryFreq;
	};


};
