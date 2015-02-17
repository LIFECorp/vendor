#if !defined __DRVBD_EXT_H__
#define __DRVBD_EXT_H__

#define NUM_DEVINFO_ENTRIES            26 

#define DISP_DEVNODE_IDX     0
#define ISP_DEVNODE_IDX      1
#define DRAM_DEVNODE_IDX     2
#define CKGEN_DEVNODE_IDX    3

#define DEVINFO_SYSFS_SUPPORT
//#define DEVINFO_LEGACY

/**************************************************************************
 * DISPLAY RELATED VARIABLES
 **************************************************************************/
typedef struct
{
    unsigned int width;
    unsigned int height;
} DISP_CONFIG;


/**************************************************************************
 * DRAM RELATED VARIABLES
 **************************************************************************/
typedef struct
{
    unsigned int     dram_type;
} DRAM_READ_PARAM;

#endif /* __DRVBD_EXT_H__ */
