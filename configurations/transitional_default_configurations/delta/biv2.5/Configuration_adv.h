#include "Conditionals.h"

// @section temperature
#if ENABLED(THERMAL_PROTECTION_BED)
  #define THERMAL_PROTECTION_BED_PERIOD 120   // Seconds
  #define THERMAL_PROTECTION_BED_HYSTERESIS 4 // Degrees Celsius
#endif

// Default stepper release if idle. Set to 0 to deactivate.
#define DEFAULT_STEPPER_DEACTIVE_TIME 0

// @section lcd

#if ENABLED(ULTIPANEL)
  #define MANUAL_FEEDRATE_XYZ 50*60
  #define MANUAL_FEEDRATE { MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, MANUAL_FEEDRATE_XYZ, 60 } // Feedrates for manual moves along X, Y, Z, E from panel
  #define ULTIPANEL_FEEDMULTIPLY  // Comment to disable setting feedrate multiplier via encoder
#endif

// @section fwretract

// Firmware based and LCD controlled retract
// M207 and M208 can be used to define parameters for the retraction.
// The retraction can be called by the slicer using G10 and G11
// until then, intended retractions can be detected by moves that only extrude and the direction.
// the moves are than replaced by the firmware controlled ones.

#define FWRETRACT  //ONLY PARTIALLY TESTED
#if ENABLED(FWRETRACT)
  #define RETRACT_LENGTH 5               //default retract length (positive mm)
  #define RETRACT_FEEDRATE 100            //default feedrate for retracting (mm/s)
  #define RETRACT_RECOVER_FEEDRATE 100     //default feedrate for recovering from retraction (mm/s)
#endif

#include "configurations/transitional_default_configurations/delta/generic/Configuration_adv.h"
