#ifndef CONFIGURATION_ADV_H
#define CONFIGURATION_ADV_H

#include "Conditionals.h"

/**
 * Thermal Protection parameters
 */
#if ENABLED(THERMAL_PROTECTION_HOTENDS)
  #define THERMAL_PROTECTION_PERIOD 40        // Seconds
  #define THERMAL_PROTECTION_HYSTERESIS 4     // Degrees Celsius

  #define WATCH_TEMP_PERIOD 20                // Seconds
  #define WATCH_TEMP_INCREASE 2               // Degrees Celsius
#endif

//===========================================================================
//=============================Mechanical Settings===========================
//===========================================================================

// @section homing

//#define ENDSTOPS_ONLY_FOR_HOMING // If defined the endstops will only be used for homing

// Default stepper release if idle. Set to 0 to deactivate.
#define DEFAULT_STEPPER_DEACTIVE_TIME (60*5)		// changed by Roxy from 60

// Add support for experimental filament exchange support M600; requires display
#if ENABLED(ULTIPANEL)
  #define FILAMENTCHANGEENABLE
  #if ENABLED(FILAMENTCHANGEENABLE)
    #define AUTO_FILAMENT_CHANGE                //This extrude filament until you press the button on LCD
    #define AUTO_FILAMENT_CHANGE_LENGTH 0.04    //Extrusion length on automatic extrusion loop
    #define AUTO_FILAMENT_CHANGE_FEEDRATE 300   //Extrusion feedrate (mm/min) on automatic extrusion loop
  #endif
#endif
