/* The MIT License (MIT)
 *
 * Copyright (c) 2014 - 2019, Andreas Merkle
 * http://www.blue-andi.de
 * vscp@blue-andi.de
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/*******************************************************************************
    DESCRIPTION
*******************************************************************************/
/**
@brief  Alert On LAN
@file   vscp_evt_aol.c
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
@see vscp_evt_aol.h

This file is automatically generated. Don't change it manually.

*******************************************************************************/

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include "vscp_evt_aol.h"
#include "vscp_core.h"
#include "vscp_class_l1.h"
#include "vscp_type_aol.h"

/*******************************************************************************
    COMPILER SWITCHES
*******************************************************************************/

/*******************************************************************************
    CONSTANTS
*******************************************************************************/

/*******************************************************************************
    MACROS
*******************************************************************************/

/*******************************************************************************
    TYPES AND STRUCTURES
*******************************************************************************/

/*******************************************************************************
    VARIABLES
*******************************************************************************/

/*******************************************************************************
    FUNCTIONS
*******************************************************************************/

/**
 * General event
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_protocol_sendGeneralEvent(void)
{
	vscp_TxMessage	txMsg;

	vscp_core_prepareTxMessage(&txMsg, VSCP_CLASS_L1_AOL, VSCP_TYPE_AOL_GENERAL, VSCP_PRIORITY_3_NORMAL);

	txMsg.dataNum = 0;

	return vscp_core_sendEvent(&txMsg);
}

/* "System unplugged from power source" not supported. No frame defined. */

/* "System unplugged from network" not supported. No frame defined. */

/* "Chassis intrusion" not supported. No frame defined. */

/* "Processor removal" not supported. No frame defined. */

/* "System environmental errors" not supported. No frame defined. */

/* "High temperature" not supported. No frame defined. */

/* "Fan speed problem" not supported. No frame defined. */

/* "Voltage fluctuations" not supported. No frame defined. */

/* "Operating system errors" not supported. No frame defined. */

/* "System power-on error" not supported. No frame defined. */

/* "System is hung" not supported. No frame defined. */

/* "Component failure" not supported. No frame defined. */

/* "Remote system reboot upon report of a critical failure" not supported. No frame defined. */

/* "Repair Operating System" not supported. No frame defined. */

/* "Update BIOS image" not supported. No frame defined. */

/* "Update Perform other diagnostic procedures" not supported. No frame defined. */
