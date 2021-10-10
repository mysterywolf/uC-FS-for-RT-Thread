/*
*********************************************************************************************************
*                                                uC/FS
*                                      The Embedded File System
*
*                    Copyright 2008-2021 Silicon Laboratories Inc. www.silabs.com
*
*                                 SPDX-License-Identifier: APACHE-2.0
*
*               This software is subject to an open source license and is distributed by
*                Silicon Laboratories Inc. pursuant to the terms of the Apache License,
*                    Version 2.0 available at www.apache.org/licenses/LICENSE-2.0.
*
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*
*                                      FILE SYSTEM DEVICE DRIVER
*
*                                     USB HOST MASS STORAGE CLASS
*                                           for uC/USB-Host
*
* Filename : fs_dev_msc.h
* Version  : V4.08.01
*********************************************************************************************************
* Note(s)  : (1) Assumes uC/USB-Host V3.10, 3.30 or 3.40 is included in the project build.
*
*                (a) Since version 3.40 of uC/USB-Host, USB_VERSION has been renamed to USBH_VERSION.
*
*            (2) REQUIREs the following uC/USB features :
*
*                (a) Host stack.
*
*                (b) Host Mass Storage Class (MSC) driver.
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  FS_DEV_MSC_PRESENT
#define  FS_DEV_MSC_PRESENT


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   FS_DEV_MSC_MODULE
#define  FS_DEV_MSC_EXT
#else
#define  FS_DEV_MSC_EXT  extern
#endif


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "../../Source/fs_dev.h"
#include  <Class/MSC/usbh_msc.h>


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             DATA TYPES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/

extern          const  FS_DEV_API  FSDev_MSC;


/*
*********************************************************************************************************
*                                               MACRO'S
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/

FS_QTY  FSDev_MSC_DevOpen (USBH_MSC_DEV  *p_msc_dev,
                           FS_ERR        *p_err);

void    FSDev_MSC_DevClose(USBH_MSC_DEV  *p_msc_dev);


/*
*********************************************************************************************************
*                                        CONFIGURATION ERRORS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                             MODULE END
*********************************************************************************************************
*/

#endif                                                          /* End of MSC module include.                           */