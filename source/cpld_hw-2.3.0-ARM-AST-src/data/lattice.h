/****************************************************************
 **                                                            **
 **    (C)Copyright 2006-2009, American Megatrends Inc.        **
 **                                                            **
 **            All Rights Reserved.                            **
 **                                                            **
 **        5555 Oakbrook Pkwy Suite 200, Norcross              **
 **                                                            **
 **        Georgia - 30093, USA. Phone-(770)-246-8600.         **
 **                                                            **
****************************************************************/

#ifndef _LATTICE_H_
#define _LATTICE_H_

// LC4000 reading data pass, but program CPLD had not test.
// lattice ispVM LC4000 family
#define	LATTICE_CPLD_DEV_NAME	"LATTICE LC 4064V-32IO CPLD"
#define	LATTICE_CPLD_IDCODE	0x01809043
#define	LATTICE_ROWS_LENGTH	95
#define	LATTICE_COLUMN_LENGTH	352
#define	LATTICE_BITS_LENGTH	33440
#define	LATTICE_BSCAN_LENGTH	68

// lattice MachXO family
#define	LATTICE_CPLD_LCMXO256C_DEVNAME	"LATTICE MachXO LCMXO256C CPLD"
#define	LATTICE_CPLD_LCMXO256C_IDCODE	0x01281043
#define	LATTICE_ROWS_LCMXO256C_LENGTH	295
#define	LATTICE_COLS_LCMXO256C_LENGTH	192
#define	LATTICE_BITS_LCMXO256C_LENGTH	56640
#define	LATTICE_BSCAN_LCMXO256C_LENGTH	160
#define	LATTICE_FUSES_LCMXO256C_LENGTH  56640

#define	LATTICE_CPLD_LCMXO640C_DEVNAME	"LATTICE MachXO LCMXO640C CPLD"
#define	LATTICE_CPLD_LCMXO640C_IDCODE	0x01285043
#define	LATTICE_ROWS_LCMXO640C_LENGTH	551
#define	LATTICE_COLS_LCMXO640C_LENGTH	236
#define	LATTICE_BITS_LCMXO640C_LENGTH	130036
#define	LATTICE_BSCAN_LCMXO640C_LENGTH	320
#define	LATTICE_FUSES_LCMXO640C_LENGTH  0 

#define	LATTICE_CPLD_LCMXO1200C_DEVNAME	"LATTICE MachXO LCMXO1200C CPLD"
#define	LATTICE_CPLD_LCMXO1200C_IDCODE	0x01289043
#define	LATTICE_ROWS_LCMXO1200C_LENGTH	796
#define	LATTICE_COLS_LCMXO1200C_LENGTH	348
#define	LATTICE_BITS_LCMXO1200C_LENGTH	277008
#define	LATTICE_BSCAN_LCMXO1200C_LENGTH	424
#define	LATTICE_FUSES_LCMXO1200C_LENGTH 0 

#define	LATTICE_CPLD_LCMXO2280C_DEVNAME	"LATTICE MachXO LCMXO2280C CPLD"
#define	LATTICE_CPLD_LCMXO2280C_IDCODE	0x0128D043
#define	LATTICE_ROWS_LCMXO2280C_LENGTH	1116
#define	LATTICE_COLS_LCMXO2280C_LENGTH	436
#define	LATTICE_BITS_LCMXO2280C_LENGTH	486576
#define	LATTICE_BSCAN_LCMXO2280C_LENGTH	544
#define	LATTICE_FUSES_LCMXO2280C_LENGTH 0 

//MachXO2
#define LATTICE_COLS_LCMXO2_LENGTH 128

#define	LATTICE_CPLD_LCMXO2_1200ZE_DEVNAME	"LATTICE MachXO LCMXO2-1200ZE CPLD"
#define	LATTICE_CPLD_LCMXO2_1200ZE_IDCODE	0x012B2043
#define	LATTICE_ROWS_LCMXO2_1200ZE_LENGTH	2175
#define	LATTICE_COLS_LCMXO2_1200ZE_LENGTH   (LATTICE_COLS_LCMXO2_LENGTH)
#define	LATTICE_BITS_LCMXO2_1200ZE_LENGTH	(LATTICE_COLS_LCMXO2_1200ZE_LENGTH*LATTICE_ROWS_LCMXO2_1200ZE_LENGTH)
#define	LATTICE_BSCAN_LCMXO2_1200ZE_LENGTH	208
#define	LATTICE_FUSES_LCMXO2_1200ZE_LENGTH  343936 

#define	LATTICE_CPLD_LCMXO2_640HC_DEVNAME	"LATTICE MachXO LCMXO2-640HC CPLD"
#define	LATTICE_CPLD_LCMXO2_640HC_IDCODE	0x012B9043
#define	LATTICE_ROWS_LCMXO2_640HC_LENGTH	1151
#define	LATTICE_COLS_LCMXO2_640HC_LENGTH    (LATTICE_COLS_LCMXO2_LENGTH)
#define	LATTICE_BITS_LCMXO2_640HC_LENGTH	(LATTICE_COLS_LCMXO2_640HC_LENGTH*LATTICE_ROWS_LCMXO2_640HC_LENGTH)
#define	LATTICE_BSCAN_LCMXO2_640HC_LENGTH	152
#define	LATTICE_FUSES_LCMXO2_640HC_LENGTH   171904 

// lattice CPLD standard command 
#define	BYPASS			0xff
#define	PLD_ADDRESS_SHIFT	0x01
#define	BULK_ERASE		0x03
#define	DISCHARGE		0x14
#define	PROGRAM_ENABLE		0x15
#define	IDCODE			0x16
#define	UES_READ		0x17
#define	UES_PROGRAM		0x1a
#define	SAMPLE			0x1c
#define	PROGRAM_DISABLE		0x1e
#define	PLD_INIT_ADDR_FOR_PROG	0x21
#define	PLD_PROG_INCR		0x27
#define	PLD_VERIFY_INCR		0x2a
#define	PROGRAM_DONE		0x2f
#define	LSCC_RESET_ADDRESS	0x21
#define	LSCC_READ_INCR_RTI	0x6a
#define	LSCC_PROG_INCR_RTI	0x67
#define	ISC_SRAM_ENABLE		0x55
#define	ISC_DATA_SHIFT		0x02
#define	READ_STATUS		    0xb2
#define	XPROGRAM_ENABLE		0x35

//program mode
#define	LATTICE_CPLD_NOT_PROGRAM_MODE	0
#define	LATTICE_CPLD_NORMAL_MODE        1
#define	LATTICE_CPLD_BACKGROUND_MODE	2

#define OGRAM_MODE LATTICE_CPLD_BACKGROUND_MODE
#define JTAG_PROGRAM_RETRY_MAX          5 
#define JTAG_ERASE_WHEN_PROGRAM_FAIL

//MachXO2 Programming Commands
#define IDCODE_PUB              0xE0
#define ISC_ENABLE_X            0x74 
#define ISC_ENABLE              0xC6
#define LSC_CHECK_BUSY          0xF0
#define LSC_READ_STATUS         0x3C 
#define ISC_ERASE               0x0E
#define LSC_ERASE_TAG           0xCB
#define LSC_INIT_ADDRESS        0x46
#define LSC_WRITE_ADDRESS       0xB4
#define LSC_PROG_INCR_NV        0x70
#define LSC_INIT_ADDR_UFM       0x47
#define LSC_PROG_TAG            0xC9
#define ISC_PROGRAM_USERCODE    0xC2
#define USERCODE                0xC0
#define LSC_PROG_FEATURE        0xE4
#define LSC_READ_FEATURE        0xE7
#define LSC_PROG_FEABITS        0xF8
#define LSC_READ_FEABITS        0xFB
#define LSC_READ_INCR_NV        0x73
#define LSC_READ_UFM            0xCA 
#define ISC_PROGRAM_DONE        0x5E
#define LSC_PROG_OTP            0xF9
#define LSC_READ_OTP            0xFA
#define ISC_DISABLE             0x26
#define ISC_NOOP                0xFF
#define LSC_REFRESH             0x79
#define ISC_PROGRAM_SECURITY    0xCE
#define ISC_PROGRAM_SECPLUS     0xCF
#define UIDCODE_PUB             0x19

// CPLD Device Related Structure
struct DEVICE_INFO{
  int idcode;
  char name[64];
  int (* func)(uint32_t cmd,unsigned int* buf, struct DEVICE_INFO * const);
  int support_loop_func;
};

/* -------------------------------------------------- */
//#define JTAG_PROGRAM_DEBUG_NOT_SVF
#ifdef JTAG_PROGRAM_DEBUG_NOT_SVF
  #define JTAG_PROGRAM_DEBUG
#endif
/* -------------------------------------------------- */

#endif /* _LATTICE_H_ */
