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
*                                         FILE SYSTEM DEVICE DRIVER
*
*                                          NAND FLASH ONFI DEVICES
*
* Filename : fs_dev_nand_part_onfi.h
* Version  : V4.08.01
*********************************************************************************************************
*/

/*
*********************************************************************************************************
*                                               MODULE
*********************************************************************************************************
*/

#ifndef  FS_NAND_ONFI_MODULE_PRESENT
#define  FS_NAND_ONFI_MODULE_PRESENT


/*
*********************************************************************************************************
*                                            INCLUDE FILES
*********************************************************************************************************
*/

#include  "../fs_dev_nand.h"


/*
*********************************************************************************************************
*                                               EXTERNS
*********************************************************************************************************
*/

#ifdef   FS_NAND_ONFI_MODULE
#define  FS_NAND_ONFI_EXT
#else
#define  FS_NAND_ONFI_EXT  extern
#endif


/*
*********************************************************************************************************
*                                        DEFAULT CONFIGURATION
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                               DEFINES
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                              DATA TYPES
*********************************************************************************************************
*/


/*
**********************************************************************************************************
*                          NAND FLASH DEVICE ONFI PART CONFIGURATION DATA TYPE
**********************************************************************************************************
*/

#define  FS_NAND_PART_ONFI_CFG_FIELDS \
    FS_NAND_PART_ONFI_CFG_FIELD(FS_NAND_FREE_SPARE_DATA, *FreeSpareMap, DEF_NULL /* Pointer to the map of available bytes in spare area. */)

#define  FS_NAND_PART_ONFI_CFG_FIELD(type, name, dflt_val)  type name;
typedef  struct  fs_nand_part_onfi_cfg {
    FS_NAND_PART_ONFI_CFG_FIELDS
} FS_NAND_PART_ONFI_CFG;
#undef   FS_NAND_PART_ONFI_CFG_FIELD

extern  const  FS_NAND_PART_ONFI_CFG  FS_NAND_PartONFI_DfltCfg;


/*
*********************************************************************************************************
*                                          GLOBAL VARIABLES
*********************************************************************************************************
*/

extern  const       FS_NAND_PART_API  FS_NAND_PartONFI;
FS_NAND_ONFI_EXT    FS_CTR            FS_NAND_PartONFI_UnitCtr;


/*
*********************************************************************************************************
*                                               MACROS
*********************************************************************************************************
*/


/*
*********************************************************************************************************
*                                         FUNCTION PROTOTYPES
*********************************************************************************************************
*/


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

#endif

