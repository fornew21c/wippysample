//
//  StaticValues.h
//  WiseTracker
//
//  Created by inha jang on 2015. 3. 17..
//  Copyright (c) 2015년 WiseTracker. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StaticValues : NSObject


+(NSString*) BS_CONFIG_TRK_DOC;
+(NSString*) BS_CONFIG_DEBUG;
+(NSString*) BS_CONFIG_CERT_CODE;
+(NSString*) BS_CONFIG_SERVICE_NO;
+(NSString*) BS_CONFIG_CUSTOMER_NO;
+(NSString*) BS_CONFIG_SLOT_COUNT;
+(NSString*) BS_CONFIG_RETURN_VISIT_DATE;
+(NSString*) BS_CONFIG_TARGET_URI;
+(NSString*) BS_CONFIG_REFERER_EXPIRE_DATE;
+(NSString*) BS_CONFIG_TIMER;
+(NSString*) BS_CONFIG_USE_RETENTION;

//로컬 설정 정보
+(NSString*) BS_CONFIG_SESSION_TIME;
+(NSString*) BS_CONFIG_REPORT_TIME;
+(NSString*) BS_CONFIG_ALARM_TIME;
+(NSString*) BS_CONFIG_RETRY_TIME;



+(NSString*) PROFILE_DB_NAME;
+(NSString*) ANALYTICS_DB;

+(NSString*) PARAM_G;
+(NSString*) PARAM_TYPE;
+(NSString*) PARAM_NAME;
+(NSString*) PARAM_VALUE;
+(NSString*) PARAM_REFERER;
+(NSString*) PARAM_STATUS;
+(NSString*) PARAM_RESPONSE_TP;

+(NSString*) CLICK_FILE_PREFIX;
+(NSString*) PAGES_FILE_PREFIX;
+(NSString*) REVENUE_FILE_PREFIX;
+(NSString*) CAMPAIGN_FILE_PREFIX;
+(NSString*) VIEW_FILE_PREFIX;
+(NSString*) EVENT_FILE_PREFIX;
+(NSString*) GOAL_FILE_PREFIX;
+(NSString*) PUSH_FILE_PREFIX;
+(NSString*) POSTBACK_FILE_PREFIX;

+(NSString*) START_VIEW;
+(NSString*) PAUSE_VIEW;
+(NSString*) RESUME_VIEW;
+(NSString*) END_VIEW;
+(NSString*) RECENT_ORDER_PTM;
+(NSString*) SESSION_FILE_PREFIX;
+(NSString*) PARAM_PNC_TP;

//2019.08.26 by Woncheol
+(NSString*) PARAM_PNC_TP2;
+(NSString*) PARAM_PNC_TP3;
+(NSString*) PARAM_PNC_TP4;
+(NSString*) PARAM_PNC_TP5;

+(NSString*) PARAM_MTV;
+(NSString*) START_TIME;
+(NSString*) END_TIME;
+(NSString*) PARAM_EXTRA;
+(NSString*) LAST_DATE_STRING;
+(NSString*) LAST_MONTH_STRING;
+(NSString*) LAST_WEEK_INT;
+(NSString*) PARAM_REF;

+(BOOL) BS_MODE_DEBUG;

+(NSString*) BS_CONFIG_FILE_NAME;

+(NSString*) DEBUG_TAG;

+(NSString*) PKG_CLASS_NAME;

/* 서비스 엑션별 목록  시작*/
+(NSString*) INSTALL_REFERRER;
+(NSString*) APP_OPEN_FLAG;
/* 서비스 엑션별 목록  종료*/

+(NSString*) SHARED_PREFRENCE_NAME;

/* 파라미터 목록  시작*/
+(NSString*) PARAM_DEBUG;
+(NSString*) PARAM_AK;
+(NSString*) PARAM_PFNO;
+(NSString*) PARAM_UUID;
+(NSString*) PARAM_IMEI;
+(NSString*) PARAM_ADVID;
+(NSString*) PARAM_ADVID_FLAG;
// IDFA 변경 추적 플래그
+(NSString*) PARAM_AID_CHANGE;
+(NSString*) PARAM_VENID;
// KeyChain에 저장하는 UUID
+(NSString*) PARAM_KEYCHAIN_UUID;
+(NSString*) PARAM_UPTAfV;
+(NSString*) PARAM_SID;
+(NSString*) PARAM_INSTALL_DATE;
+(NSString*) PARAM_INSTALL_TIMEMILLIS;
+(NSString*) PARAM_SLOT_NO;
+(NSString*) PARAM_VISIT_NEW;
+(NSString*) PARAM_VT_TZ;
+(NSString*) PARAM_IS_UNI_VT;
+(NSString*) PARAM_IS_WEEKELY_US;
+(NSString*) PARAM_AP_VR;
+(NSString*) PARAM_OS;
+(NSString*) PARAM_PHONE;
+(NSString*) PARAM_MACHINE;
+(NSString*) PARAM_TEL_COM;
+(NSString*) PARAM_WIFI_TP;
+(NSString*) PARAM_SR;
+(NSString*) PARAM_CNTR;
+(NSString*) PARAM_LNG;
+(NSString*) PARAM_INCH;
+(NSString*) PARAM_TZ;
+(NSString*) PARAM_LTVT;
+(NSString*) PARAM_LTVI;
+(NSString*) PARAM_UD_VT;
+(NSString*) PARAM_LTRVNC;
+(NSString*) PARAM_LTRVNI;
+(NSString*) PARAM_UD_RVNC;
+(NSString*) PARAM_MBR;
+(NSString*) PARAM_MBR_LVL;
+(NSString*) PARAM_MBR_CD;
+(NSString*) PARAM_GENDER;
+(NSString*) PARAM_AGE;
+(NSString*) PARAM_UVP1;
+(NSString*) PARAM_UVP2;
+(NSString*) PARAM_UVP3;
+(NSString*) PARAM_UVP4;
+(NSString*) PARAM_UVP5;
+(NSString*) PARAM_UVP6;
+(NSString*) PARAM_UVP7;
+(NSString*) PARAM_UVP8;
+(NSString*) PARAM_UVP9;
+(NSString*) PARAM_UVP10;
+(NSString*) PARAM_UVP11;
+(NSString*) PARAM_UVP12;
+(NSString*) PARAM_UVP13;
+(NSString*) PARAM_UVP14;
+(NSString*) PARAM_UVP15;
+(NSString*) PARAM_UVP16;
+(NSString*) PARAM_UVP17;
+(NSString*) PARAM_UVP18;
+(NSString*) PARAM_UVP19;
+(NSString*) PARAM_UVP20;
+(NSString*) PARAM_UVP21;
+(NSString*) PARAM_UVP22;
+(NSString*) PARAM_UVP23;
+(NSString*) PARAM_UVP24;
+(NSString*) PARAM_UVP25;
+(NSString*) PARAM_UVP26;
+(NSString*) PARAM_UVP27;
+(NSString*) PARAM_UVP28;
+(NSString*) PARAM_UVP29;
+(NSString*) PARAM_UVP30;
+(NSString*) PARAM_UVP31;
+(NSString*) PARAM_UVP32;
+(NSString*) PARAM_UVP33;
+(NSString*) PARAM_UVP34;
+(NSString*) PARAM_UVP35;
+(NSString*) PARAM_UVP36;
+(NSString*) PARAM_UVP37;
+(NSString*) PARAM_UVP38;
+(NSString*) PARAM_UVP39;
+(NSString*) PARAM_UVP40;
+(NSString*) PARAM_UVP41;
+(NSString*) PARAM_UVP42;
+(NSString*) PARAM_UVP43;
+(NSString*) PARAM_UVP44;
+(NSString*) PARAM_UVP45;
+(NSString*) PARAM_UVP46;
+(NSString*) PARAM_UVP47;
+(NSString*) PARAM_UVP48;
+(NSString*) PARAM_UVP49;
+(NSString*) PARAM_UVP50;

+(NSString*) PARAM_SRVC_LANG;

+(NSString*) PARAM_USER_ID; // USER_ID

+(NSString*) PARAM_MAT_SOURCE;
+(NSString*) PARAM_MAT_MEDIUM;
+(NSString*) PARAM_MAT_KWD;
+(NSString*) PARAM_MAT_CAMPAIGN;
+(NSString*) PARAM_MAT_PERIOD;
+(NSString*) PARAM_IAT_SOURCE;
+(NSString*) PARAM_IAT_MEDIUM;
+(NSString*) PARAM_IAT_KWD;
+(NSString*) PARAM_IAT_CAMPAIGN;

+(NSString*) PARAM_MAT_AFFILIATE;
+(NSString*) PARAM_IAT_AFFILIATE;

+(NSString*) PARAM_MAT_AFFILIATE_SUB;
+(NSString*) PARAM_IAT_AFFILIATE_SUB; 

+(NSString*) PARAM_CONV_TP;
+(NSString*) PARAM_FB_SOURCE;

+(NSString*) PARAM_UTM_SOURCE;
+(NSString*) PARAM_UTM_MEDIUM;
+(NSString*) PARAM_UTM_CAMPAIGN;
+(NSString*) PARAM_UTM_TERM;
+(NSString*) PARAM_UTM_CONTENT;
+(NSString*) PARAM_GCLID;

/* WA Custom Paramter */
+(NSString*) PARAM_WA_CAMPAIGN;
+(NSString*) PARAM_WA_SOURCE;
+(NSString*) PARAM_WA_APP;
+(NSString*) PARAM_WA_CLASSIFICATION;
+(NSString*) PARAM_WA_AD;
+(NSString*) PARAM_WA_LOCATION;
+(NSString*) PARAM_WA_KEYWORD;

+(NSString*) PARAM_ORDNO;
+(NSString*) PARAM_AMT;
+(NSString*) PARAM_EA;
+(NSString*) PARAM_PNC;
+(NSString*) PARAM_EXHIBIT;
+(NSString*) PARAM_PNG;
+(NSString*) PARAM_VS;
+(NSString*) PARAM_CS_P_V;
+(NSString*) PARAM_CP;
+(NSString*) PARAM_PI;

+(NSString*) PARAM_BF_PG;

+(NSString*) PARAM_PNC_NM;
+(NSString*) PARAM_PNG_NM;
+(NSString*) PARAM_RECENT_VISIT_PTM;
/* 파라미터 목록  종료*/

+(NSString*) PREF_INSTALL_DATE;
+(NSString*) PREF_INSTALL_TIMEMILLIS;

+(NSString*) RETRY_COUNT;
+(NSString*) BS_WEB_TRACKER;
+(NSString*) CREATE_TIME;
+(NSString*) DEBUG_FLAG;
+(NSString*) BS_CONFIG_DATA_SEND_MODE;
+(NSString*) BS_CONFIG_MAX_DATA_LIFE_TIME;
+(NSString*) BS_CONFIG_MAX_DATA_SEND_LENGTH;
+(NSString*) BS_CONFIG_HASH_KEY;
+(NSString*) BS_CONFIG_ICMP_TYPE;
+(NSString*) ST_SEND_TIME;
+(NSString*) RESPONSE_CODE;
+(NSString*) RES001;
+(NSString*) RES002;
+(NSString*) RES003;
+(NSString*) RES004;
+(NSString*) LOCK_CODE;
+(NSString*) KEY_DOC_ID;


+(NSString*) PARAM_MVT1;
+(NSString*) PARAM_MVT2;
+(NSString*) PARAM_MVT3;

+(NSString*) BS_SESSION;
+(NSString*) BS_SESSION_MAP;

+(NSString*) EXPIRE_TIME_DAILY;
+(NSString*) EXPIRE_TIME_WEEKLY;
+(NSString*) EXPIRE_TIME_MONTHLY;
+(NSString*) EXPIRE_TIME_WEEKLY_MS;

+(NSString*) PARAM_MAT_UPDATE_TIME;
+(NSString*) PARAM_MAT_UPDATE_SID;
+(NSString*) PARAM_FB_UPDATE_TIME;
+(NSString*) PARAM_FB_UPDATE_SID;


+(NSString*) PARAM_UTM_UPDATE_TIME;
+(NSString*) PARAM_UTM_UPDATE_SID;

+(NSString*) PARAM_GOAL_ACCEPT_PUSH;

+(NSString*) DOCUMENT_DB_NAME;
+(NSString*) POSTBACK_DB_NAME;

+(NSString*) PARAM_GOAL_1  ;
+(NSString*) PARAM_GOAL_2  ;
+(NSString*) PARAM_GOAL_3  ;
+(NSString*) PARAM_GOAL_4  ;
+(NSString*) PARAM_GOAL_5  ;
+(NSString*) PARAM_GOAL_6  ;
+(NSString*) PARAM_GOAL_7  ;
+(NSString*) PARAM_GOAL_8  ;
+(NSString*) PARAM_GOAL_9  ;
+(NSString*) PARAM_GOAL_10 ;

+(NSString*) PARAM_PDTK;

//검색 키워드 로직
+(NSString*) PARAM_IKWD;
+(NSString*) PARAM_IKWD_RS;
+(NSString*) PARAM_IKWD_GRP;


+(NSString*) PARAM_GOAL_APP_INSTALL;

+(NSString*) IS_INSTALL_REFERRER_SET;
+(NSString*) IS_FACEBOOK_REFERRER_SET;

+(int) MAT_CONVERSION_TP_DIRECT;
+(int) MAT_CONVERSION_TP_NON_DIRECT;

// ICMP 내부 이벤트 분석 기능 항목 추가 ( 인앱 분석 )
+(NSString*) PARAM_ICMP;
+(NSString*) PARAM_ICMP_TRACE;
+(NSString*) PARAM_ICMP_PERIOD;
+(NSString*) PARAM_ICMP_UPDATE_TIME;
+(NSString*) PARAM_ICMP_UPDATE_SID;
 
+(NSString*) PARAM_MAT_SOURCE_TRACE;
+(NSString*) PARAM_MAT_CAMPAIGN_TRACE;


+(NSString*) PARAM_PUSH_MESSAGE_KEY;
+(NSString*) PARAM_PUSH_MESSAGE_UPDATE_TIME;
+(NSString*) PARAM_PUSH_MESSAGE_UPDATE_SID;

+(NSString*) PARAM_PROFILE_ID;
+(NSString*) SDK_BUNDLE;

+(NSString*) PUSH_TITLE;
+(NSString*) PUSH_DESC;
+(NSString*) PARAM_PUSH_NO;
+(NSString*) PUSH_PERIOD;


+(NSString*) APS;
+(NSString*) ALERT;
+(NSString*) TITLE;
+(NSString*) BODY;
+(NSString*) BADGE;

+(NSString*) VISIT_NEW_SERVER_TIME;

+(NSString*) MARK_REVENUE;

+(NSString*) PARAM_SDK_VERSION;
+(NSString*) WT_SOURCE_UPDATE_TIME;
+(NSString*) WT_SOURCE_UPDATE_SID;
+(NSString*) WT_SOURCE_CLICK_TIME;

+(NSString*) PARAM_ORDER_DATE;

+(NSString*) PARAM_USE_LAST_IKWD;
+(NSString*) PARAM_USE_LAST_MVT1;
+(NSString*) PARAM_USE_LAST_MVT2;
+(NSString*) PARAM_USE_LAST_MVT3;
+(NSString*) PURCHASE;
+(NSString*) CONVERSION;
+(NSString*) ALL;

+(NSString*) SAR_INFO;

+(NSString*) PARAM_WEBVIEW_URL;
+(NSString*) PARAM_WEBVIEW_LOAD_TIME;
+(NSString*) PARAM_NPAY_ID;

+(NSString*) PARAM_LAUNCHOPTIONS;
+(NSString*) OPEN_DL;
+(NSString*) LATEST_GCM_PID;
+(NSString*) GCM_PID_UPDATE_TIME;

//AdServices Attribution
+(NSString*) AAA_TK;
+(NSString*) AAA_TK_TIME;
@end
