#ifndef _DRVB_COMMON_ERROR_H_
#define _DRVB_COMMON_ERROR_H_

/**************************************************************************
 *  ERROR CODE
 **************************************************************************/
#define E_OK                                     0x0000
#define E_INVALID_HW_CODE                        0x1000
#define E_CRASH_STACK                            0x1001
#define E_CRE_PATTER_2_FAIL                      0x1002
#define E_CMP_CHALLENGE_FAIL                     0x1003
#define E_READ_DEVNODE_FAIL                      0x1004
#define E_MAP_DEVINFO_FAIL                       0x1005
#define E_READ_MEMNODE_FAIL                      0x1006
#define E_READ_REG_FAIL                          0x1007
#define E_CALLBACK_NOT_EXIST                     0x1008
#define E_DEV_ACCESS_CALLBACK_REGISTERED_BEFORE  0x1009
#define E_DEV_ACCESS_CALLBACK_NOT_EXIST          0x100a
#define E_SOCKET_OPEN_FAIL                       0x100b
#define E_PROTOCOL_ERROR                         0x100c
#define E_BUF_NOT_BIG_ENOUGH                     0x100d
#define E_UNKNOWN_OPERATION                      0x100e
#define E_GET_DEVINFO_FAIL                       0x100f
#define E_SOCKET_PERM_DENIED                     0x1010
#define E_DEVINFO_IDX_OVEFLOW                    0x1011
#define E_DEVINFO_DEV_NOT_SUPPORT                0x1012

#endif //_DRVB_COMMON_ERROR_H_
