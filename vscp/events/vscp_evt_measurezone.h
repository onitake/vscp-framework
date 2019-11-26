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
@brief  Measurement with zone
@file   vscp_evt_measurezone.h
@author Andreas Merkle, http://www.blue-andi.de

@section desc Description
Measurements with zone information. This class mirrors the standard measurement events is
CLASS1.MEASUREMENT=10 with the difference that index, zone, and sub-zone is added. This in turn
limits the data-coding options to normalized integer (see Data-coding for a description). The
default unit for the measurement should always be used.

This file is automatically generated. Don't change it manually.

*******************************************************************************/

#ifndef __VSCP_EVT_MEASUREZONE_H__
#define __VSCP_EVT_MEASUREZONE_H__

/*******************************************************************************
    INCLUDES
*******************************************************************************/
#include <stdint.h>
#include "vscp_platform.h"

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
extern BOOL vscp_evt_measurezone_sendGeneralEvent(void);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendCount(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendLengthDistance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendMass(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendTime(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricCurrent(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendTemperature(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendAmountOfSubstance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendLuminousIntensityIntensityOfLight(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendFrequency(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendRadioactivityAndOtherRandomEvents(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendForce(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendPressure(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendEnergy(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendPower(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricalCharge(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricalPotentialVoltage(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricalCapacitance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricalResistance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricalConductance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendMagneticFieldStrength(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendMagneticFlux(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendMagneticFluxDensity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendInductance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendLuminousFlux(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendIlluminance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendRadiationDose(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendCatalyticActivity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendVolume(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSoundIntensity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendAngle(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendPositionWgs84(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSpeed(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendAcceleration(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendTension(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendDampMoistHygrometerReading(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendFlow(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendThermalResistance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendRefractiveOpticalPower(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendDynamicViscosity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSoundImpedance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSoundResistance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendElectricElastance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendLuminousEnergy(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendLuminance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendChemicalConcentration(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/* "Reserved" not supported. No frame defined. */

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendDoseEquivalent(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/* "Reserved" not supported. No frame defined. */

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendDewPoint(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendRelativeLevel(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendAltitude(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendArea(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendRadiantIntensity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendRadiance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendIrradianceExitanceRadiosity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSpectralRadiance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSpectralIrradiance(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSoundPressureAcousticPressure(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSoundEnergyDensity(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

/**
 * Count
 * 
 * @param[in] index Index for sensor.
 * @param[in] zone Zone for which event applies to (0-255). 255 is all zones.
 * @param[in] subZone Sub-zone for which event applies to (0-255). 255 is all sub-zones.
 * @param[in] data The data as signed integer.
 * @param[in] exp The exponent of the data (10^exponent).
 * 
 * @return If event is sent, it will return TRUE otherwise FALSE.
 */
extern BOOL vscp_evt_measurezone_sendSoundLevel(uint8_t index, uint8_t zone, uint8_t subZone, int32_t data, int8_t exp);

#endif	/* __VSCP_EVT_MEASUREZONE_H__ */
