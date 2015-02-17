#if !defined __DRVBD_CLIENT_H__
#define __DRVBD_CLIENT_H__

#include "drvbd.h"

int drvb_gen_cmd(DRVBD_CMD *cmd, unsigned int type, unsigned int index, unsigned int op, unsigned int data_len);
int drvb_get_data(DRVBD_CMD *cmd, unsigned char *buf);

#endif /* __DRVBD_CLIENT_H__ */
