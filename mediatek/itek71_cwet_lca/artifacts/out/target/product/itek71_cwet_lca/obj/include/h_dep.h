#ifndef _H_DEP_ERROR_H_
#define _H_DEP_ERROR_H_

/* platform types */
#define PLATFORM_SP        0x01
#define PLATFORM_TB        0x02

#define E_DISP_CHECK_FAIL           0x2000
#define E_ISP_VIOLATION             0x2001
#define E_DISP_OPEN_FAIL            0x2002
#define E_DISP_IOCTL_FAIL           0x2003
#define E_ISP_OPEN_FAIL             0x2004
#define E_ISP_IOCTL_FAIL            0x2005
#define E_REACH_MAX_CALLBACK_NUM    0x2006
#define E_PLATFORM_TYPE_MISPATCH    0x2007
#define E_DISP_CHECK_FAIL_HDMI      0x2008
#define E_VCODEC_OPEN_FAIL          0x2009
#define E_VCODEC_MMAP_FAIL          0x200a
#define E_DRAM_CHECK_FAIL           0x200b

#define EXT_BITS_MASK               0x20000000
#define RESERVED_MASK               0xc0000000
#define EFUSE_BONDING_BITS_MASK     0x1fffffff

/* MASK definition for extended mask */
#define PLATFORM_TYPE_CHK_MASK      0x20000000

/* MASK definition for bonding mask */
#define DISP_CHK_MASK               0x00000001
#define DUAL_CORE_CHK_MASK          0x00000002
#define DRAM_TYPE_CHK_MASK          0x00000004

#endif
