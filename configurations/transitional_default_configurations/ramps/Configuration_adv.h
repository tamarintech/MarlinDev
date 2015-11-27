// These are the parameters for which Ramps does not use the global default value

// @section homing

//homing hits the endstop, then retracts by this distance, before it tries to slowly bump again:
#define Z_HOME_BUMP_MM 2
#define HOMING_BUMP_DIVISOR {2, 2, 4}  // Re-Bump Speed Divisor (Divides the Homing Feedrate)

// @section lcd

#if ENABLED(ULTIPANEL)
  #define MANUAL_FEEDRATE {50*60, 50*60, 4*60, 60} // Feedrates for manual moves along X, Y, Z, E from panel
  #define ULTIPANEL_FEEDMULTIPLY  // Comment to disable setting feedrate multiplier via encoder
#endif

// If defined the movements slow down when the look ahead buffer is only half full
#define SLOWDOWN

// Add support for experimental filament exchange support M600; requires display
#if ENABLED(ULTIPANEL)
  #if ENABLED(FILAMENTCHANGEENABLE)
    #define AUTO_FILAMENT_CHANGE                //This extrudes filament until you press the button on LCD
    #define AUTO_FILAMENT_CHANGE_LENGTH 0.04    //Extrusion length on automatic extrusion loop
    #define AUTO_FILAMENT_CHANGE_FEEDRATE 300   //Extrusion feedrate (mm/min) on automatic extrusion loop
  #endif
#endif

#include "configurations/transitional_default_configurations/default/Configuration_adv.h"