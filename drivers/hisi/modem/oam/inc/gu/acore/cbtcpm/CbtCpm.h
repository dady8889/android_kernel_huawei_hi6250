

/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : cbtcpm.h
  版 本 号   : 初稿
  作    者   : h59254
  生成日期   : 2014年5月31日
  最近修改   :
  功能描述   : cbtcpm.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2014年5月31日
    作    者   : h59254
    修改内容   : 创建文件
******************************************************************************/

#ifndef __CBT_CPM_H__
#define __CBT_CPM_H__

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "omnvinterface.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/



/*****************************************************************************
  3 枚举定义
*****************************************************************************/


/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/



/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/
typedef VOS_UINT32 (*CBTCPM_RCV_FUNC)(VOS_UINT8 *pucData, VOS_UINT32 ulLen);

typedef VOS_UINT32 (*CBTCPM_SEND_FUNC)(VOS_UINT8 *pucVirAddr, VOS_UINT8 *pucPhyAddr, VOS_UINT32 ulLen);

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/
VOS_VOID CBTCPM_PortRcvReg(CBTCPM_RCV_FUNC pRcvFunc);

VOS_VOID CBTCPM_PortSndReg(CBTCPM_SEND_FUNC pSndFunc);

CBTCPM_RCV_FUNC CBTCPM_GetRcvFunc(VOS_VOID);

CBTCPM_SEND_FUNC CBTCPM_GetSndFunc(VOS_VOID);

VOS_UINT32 CBTCPM_NotifyChangePort(AT_PHY_PORT_ENUM_UINT32 enPhyPort);


#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of cbtcpm.h */
