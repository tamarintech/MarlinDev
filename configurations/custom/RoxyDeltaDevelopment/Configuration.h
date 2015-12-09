// The following define selects which electronics board you have.
// Please choose the name from boards.h that matches your setup
#ifndef MOTHERBOARD
  #define MOTHERBOARD BOARD_ULTIMAKER
#endif

// Optional custom name for your RepStrap or other custom machine
// Displayed in the LCD "Ready" message
//#define CUSTOM_MACHINE_NAME "G2s"

// Define this to set a unique identifier for this printer, (Used by some programs to differentiate between machines)
// You can use an online service to generate a random UUID. (eg http://www.uuidgenerator.net/version4)
//#define MACHINE_UUID "00000000-0000-0000-0000-000000000000"

// This defines the number of extruders
#define EXTRUDERS 2

// Offset of the extruders (uncomment if using more than one and relying on firmware to position when changing).
// The offset has to be X=0, Y=0 for the extruder 0 hotend (default extruder).
// For the other hotends it is their distance from the extruder 0 hotend.
#define EXTRUDER_OFFSET_X {0.0, 18.9}  // (in mm) for each extruder, offset of the hotend on the X axis
#define EXTRUDER_OFFSET_Y {0.0, 11.0}  // (in mm) for each extruder, offset of the hotend on the Y axis

//===========================================================================
//============================= Thermal Settings ============================
//===========================================================================

// 0 is not used
// 1 is 100k thermistor - best choice for EPCOS 100k (4.7k pullup)
#define TEMP_SENSOR_0 1
#define TEMP_SENSOR_1 1
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_BED 1

// When temperature exceeds max temp, your heater will be switched off.
// This feature exists to protect your hotend from overheating accidentally, but *NOT* from thermistor short/failure!
// You should use MINTEMP for thermistor short/failure protection.
#define HEATER_0_MAXTEMP 240
#define HEATER_1_MAXTEMP 240
#define HEATER_2_MAXTEMP 240
#define HEATER_3_MAXTEMP 240

//===========================================================================
//============================== Delta Settings =============================
//===========================================================================
// Enable DELTA kinematics and most of the default configuration for Deltas
#define DELTA
#define Z_PROBE_ALLEN_KEY
#define MANUAL_ALLEN_KEY_DEPLOYMENT
#define IGNORE_STOWED_Z_PROBE

#if ENABLED(DELTA)

  // Make delta curves from many straight lines (linear interpolation).
  // This is a trade-off between visible corners (not enough segments)
  // and processor overload (too many expensive sqrt calls).
  #define DELTA_SEGMENTS_PER_SECOND 160

  // Center-to-center distance of the holes in the diagonal push rods.
  #define DELTA_DIAGONAL_ROD 	198.5			// Was >>>---> 196.0 // mm

  // Horizontal offset from middle of printer to smooth rod center.
  #define DELTA_SMOOTH_ROD_OFFSET 160.0 // mm

  // Horizontal offset of the universal joints on the end effector.
  #define DELTA_EFFECTOR_OFFSET 34.0 // mm

  // Horizontal offset of the universal joints on the carriages.
  #define DELTA_CARRIAGE_OFFSET 25.0 // mm

  // Horizontal distance bridged by diagonal push rods when effector is centered.
  //#define DELTA_RADIUS (DELTA_SMOOTH_ROD_OFFSET-DELTA_EFFECTOR_OFFSET-DELTA_CARRIAGE_OFFSET+1.5)  // was 1.6
  //#define DELTA_RADIUS (DELTA_SMOOTH_ROD_OFFSET-DELTA_EFFECTOR_OFFSET-DELTA_CARRIAGE_OFFSET+1.00)  //Total value currently needs to be 102.00
  #define DELTA_RADIUS (DELTA_SMOOTH_ROD_OFFSET-DELTA_EFFECTOR_OFFSET-DELTA_CARRIAGE_OFFSET+0.00)  //Total value at 101.00

  // Print surface diameter/2 minus unreachable space (avoid collisions with vertical towers).
  #define DELTA_PRINTABLE_RADIUS 90

  // Effective X/Y positions of the three vertical towers.
  #define SIN_60 0.8660254037844386
  #define COS_60 0.5
  #define DELTA_TOWER1_X -SIN_60*DELTA_RADIUS // front left tower
  #define DELTA_TOWER1_Y -COS_60*DELTA_RADIUS
  #define DELTA_TOWER2_X SIN_60*DELTA_RADIUS // front right tower
  #define DELTA_TOWER2_Y -COS_60*DELTA_RADIUS
  #define DELTA_TOWER3_X 0.0 // back middle tower
  #define DELTA_TOWER3_Y DELTA_RADIUS

  // Diagonal rod squared
  //#define DELTA_DIAGONAL_ROD_2 pow(DELTA_DIAGONAL_ROD,2)
  #define DELTA_DIAGONAL_ROD_2 (DELTA_DIAGONAL_ROD*DELTA_DIAGONAL_ROD)

#endif

// Enable this option for Toshiba steppers
//#define CONFIG_STEPPERS_TOSHIBA

// @section homing

// coarse Endstop Settings
#define ENDSTOPPULLUPS // Comment this out (using // at the start of the line) to disable the endstop pullup resistors

#if DISABLED(ENDSTOPPULLUPS)
  // fine endstop settings: Individual pullups. will be ignored if ENDSTOPPULLUPS is defined
  //#define ENDSTOPPULLUP_XMAX
  //#define ENDSTOPPULLUP_YMAX
  //#define ENDSTOPPULLUP_ZMAX
  //#define ENDSTOPPULLUP_XMIN
  //#define ENDSTOPPULLUP_YMIN
  //#define ENDSTOPPULLUP_ZMIN
  //#define ENDSTOPPULLUP_ZMIN_PROBE
#endif

// Mechanical endstop with COM to ground and NC to Signal uses "false" here (most common setup).
const bool X_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Y_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Z_MIN_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool X_MAX_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Y_MAX_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Z_MAX_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
const bool Z_MIN_PROBE_ENDSTOP_INVERTING = false; // set to true to invert the logic of the endstop.
//#define DISABLE_MIN_ENDSTOPS

// Invert the stepper direction. Change (or reverse the motor connector) if an axis goes the wrong way.
#define INVERT_X_DIR true
#define INVERT_Y_DIR true
#define INVERT_Z_DIR true

// @section extruder

// For direct drive extruder v9 set to true, for geared extruder set to false.
#define INVERT_E0_DIR true

// Travel limits after homing (units are in mm)
#define X_MIN_POS (-DELTA_PRINTABLE_RADIUS)
#define Y_MIN_POS (-DELTA_PRINTABLE_RADIUS)

#define X_MAX_LENGTH (X_MAX_POS - X_MIN_POS)
#define Y_MAX_LENGTH (Y_MAX_POS - Y_MIN_POS)
#define Z_MAX_LENGTH (Z_MAX_POS - Z_MIN_POS)

//===========================================================================
//============================ Bed Auto Leveling ============================
//===========================================================================

#define AUTO_BED_LEVELING_FEATURE // Delete the comment to enable (remove // at the start of the line)
#define DEBUG_LEVELING_FEATURE
#define Z_MIN_PROBE_REPEATABILITY_TEST  // If not commented out, Z-Probe Repeatability test will be included if Auto Bed Leveling is Enabled.

#if ENABLED(AUTO_BED_LEVELING_FEATURE)

  #define AUTO_BED_LEVELING_GRID  // Deltas only support grid mode.

  #if ENABLED(AUTO_BED_LEVELING_GRID)

    // set the rectangle in which to probe
    #define DELTA_PROBABLE_RADIUS (DELTA_PRINTABLE_RADIUS-15)
    #define LEFT_PROBE_BED_POSITION (-DELTA_PROBABLE_RADIUS+40)
    #define RIGHT_PROBE_BED_POSITION (DELTA_PROBABLE_RADIUS+10)
    #define FRONT_PROBE_BED_POSITION (-DELTA_PROBABLE_RADIUS+25)
    #define BACK_PROBE_BED_POSITION (DELTA_PROBABLE_RADIUS-25)

    #define MIN_PROBE_EDGE 5 // The Z probe square sides can be no smaller than this.

    // Non-linear bed leveling will be used.
    // Compensate by interpolating between the nearest four Z probe values for each point.
    // Useful for deltas where the print surface may appear like a bowl or dome shape.
    // Works best with ACCURATE_BED_LEVELING_POINTS 5 or higher.
    #define AUTO_BED_LEVELING_GRID_POINTS 5

//  #else  // !AUTO_BED_LEVELING_GRID	// Roxy change to always define the 3 points

      // Arbitrary points to probe.
      // A simple cross-product is used to estimate the plane of the bed.
      #define ABL_PROBE_PT_1_X (54+19)
      #define ABL_PROBE_PT_1_Y (61-16)

      #define ABL_PROBE_PT_2_X (-75+19)
      #define ABL_PROBE_PT_2_Y (50-16)

      #define ABL_PROBE_PT_3_X (-22+19)
      #define ABL_PROBE_PT_3_Y (-77-16)

  #endif // AUTO_BED_LEVELING_GRID

  // Offsets to the Z probe relative to the nozzle tip.
  // X and Y offsets must be integers.
  #define X_PROBE_OFFSET_FROM_EXTRUDER  36.0 		//	16.5
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -11.0		//	-24.7
  #define Z_PROBE_OFFSET_FROM_EXTRUDER  -2.8

  #define Z_RAISE_BEFORE_HOMING 20       // (in mm) Raise Z axis before homing (G28) for Z probe clearance.
                                        // Be sure you have this distance over your Z_MAX_POS in case.

  #define XY_TRAVEL_SPEED 3000         // X and Y axis travel speed between probes, in mm/min.

  #define Z_RAISE_BEFORE_PROBING 15   // How much the Z axis will be raised before traveling to the first probing point.
  #define Z_RAISE_BETWEEN_PROBINGS 20 // How much the Z axis will be raised when traveling from between next probing points.
  #define Z_RAISE_AFTER_PROBING 20    // How much the Z axis will be raised after the last probing point.

  //#define Z_PROBE_END_SCRIPT "G1 Z10 F12000\nG1 X15 Y330\nG1 Z0.5\nG1 Z10" // These commands will be executed in the end of G29 routine.
                                                                            // Useful to retract a deployable Z probe.

  //#define Z_PROBE_SLED // Turn on if you have a Z probe mounted on a sled like those designed by Charles Bell.
  //#define SLED_DOCKING_OFFSET 5 // The extra distance the X axis must travel to pickup the sled. 0 should be fine but you can push it further if you'd like.


  //If you have enabled the Bed Auto Leveling and are using the same Z Probe for Z Homing,
  //it is highly recommended you let this Z_SAFE_HOMING enabled!!!

  #define Z_SAFE_HOMING   // This feature is meant to avoid Z homing with Z probe outside the bed area.
                          // When defined, it will:
                          // - Allow Z homing only after X and Y homing AND stepper drivers still enabled.
                          // - If stepper drivers timeout, it will need X and Y homing again before Z homing.
                          // - Position the Z probe in a defined XY point before Z Homing when homing all axis (G28).
                          // - Block Z homing only when the Z probe is outside bed area.

  #if ENABLED(Z_SAFE_HOMING)

    #define Z_SAFE_HOMING_X_POINT ((X_MIN_POS + X_MAX_POS) / 2)    // X point for Z homing when homing all axis (G28).
    #define Z_SAFE_HOMING_Y_POINT ((Y_MIN_POS + Y_MAX_POS) / 2)    // Y point for Z homing when homing all axis (G28).

  #endif

  // Support for a dedicated Z probe endstop separate from the Z min endstop.
  // If you would like to use both a Z probe and a Z min endstop together,
  // uncomment #define Z_MIN_PROBE_ENDSTOP and read the instructions below.
  // If you still want to use the Z min endstop for homing, disable Z_SAFE_HOMING above.
  // Example: To park the head outside the bed area when homing with G28.
  //
  // WARNING:
  // The Z min endstop will need to set properly as it would without a Z probe
  // to prevent head crashes and premature stopping during a print.
  //
  // To use a separate Z probe endstop, you must have a Z_MIN_PROBE_PIN
  // defined in the pins_XXXXX.h file for your control board.
  // If you are using a servo based Z probe, you will need to enable NUM_SERVOS,
  // Z_ENDSTOP_SERVO_NR and SERVO_ENDSTOP_ANGLES in the R/C SERVO support below.
  // RAMPS 1.3/1.4 boards may be able to use the 5V, Ground and the D32 pin
  // in the Aux 4 section of the RAMPS board. Use 5V for powered sensors,
  // otherwise connect to ground and D32 for normally closed configuration
  // and 5V and D32 for normally open configurations.
  // Normally closed configuration is advised and assumed.
  // The D32 pin in Aux 4 on RAMPS maps to the Arduino D32 pin.
  // Z_MIN_PROBE_PIN is setting the pin to use on the Arduino.
  // Since the D32 pin on the RAMPS maps to D32 on Arduino, this works.
  // D32 is currently selected in the RAMPS 1.3/1.4 pin file.
  // All other boards will need changes to the respective pins_XXXXX.h file.
  //
  // WARNING:
  // Setting the wrong pin may have unexpected and potentially disastrous outcomes.
  // Use with caution and do your homework.
  //
  #define Z_MIN_PROBE_ENDSTOP

#endif // AUTO_BED_LEVELING_FEATURE
#define BED_CENTER_AT_0_0  // If defined, the center of the bed is at (X=0, Y=0)

// Manual homing switch locations:
// For deltabots this means top and center of the Cartesian print volume.
#define MANUAL_Z_HOME_POS 203.85	// #define MANUAL_Z_HOME_POS 204.3

// delta homing speeds must be the same on xyz
#define HOMING_FEEDRATE_XYZ (200*10)

// delta speeds must be the same on xyz
#define DEFAULT_AXIS_STEPS_PER_UNIT   {80, 80, 80, 93}
#define DEFAULT_MAX_FEEDRATE          {1500, 1500, 1500, 45}    // (mm/sec)

#define DEFAULT_MAX_ACCELERATION      {5000,5000,5000,5000}

#define DEFAULT_ACCELERATION          1000    // X, Y, Z and E acceleration in mm/s^2 for printing moves
#define DEFAULT_RETRACT_ACCELERATION  2000    // E acceleration in mm/s^2 for retracts
#define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration in mm/s^2 for travel (non printing) moves

// EEPROM
// The microcontroller can store settings in the EEPROM, e.g. max velocity...
// M500 - stores parameters in EEPROM
// M501 - reads parameters from EEPROM (if you need reset them after you changed them temporarily).
// M502 - reverts to the default "factory settings".  You still need to store them in EEPROM afterwards if you want to.
#define EEPROM_SETTINGS

// The RepRapDiscount Smart Controller (white PCB)
// http://reprap.org/wiki/RepRapDiscount_Smart_Controller
#define REPRAP_DISCOUNT_SMART_CONTROLLER

// The GADGETS3D G3D LCD/SD Controller (blue PCB)
// http://reprap.org/wiki/RAMPS_1.3/1.4_GADGETS3D_Shield_with_Panel
//#define G3D_PANEL

// The RepRapDiscount FULL GRAPHIC Smart Controller (quadratic white PCB)
// http://reprap.org/wiki/RepRapDiscount_Full_Graphic_Smart_Controller
//
// ==> REMEMBER TO INSTALL U8glib to your ARDUINO library folder: https://github.com/olikraus/U8glib_Arduino
//#define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER

// The RepRapWorld REPRAPWORLD_KEYPAD v1.1
// http://reprapworld.com/?products_details&products_id=202&cPath=1591_1626
//#define REPRAPWORLD_KEYPAD
//#define REPRAPWORLD_KEYPAD_MOVE_STEP 10.0 // how much should be moved when a key is pressed, eg 10.0 means 10mm per click

// The Elefu RA Board Control Panel
// http://www.elefu.com/index.php?route=product/product&product_id=53
// REMEMBER TO INSTALL LiquidCrystal_I2C.h in your ARDUINO library folder: https://github.com/kiyoshigawa/LiquidCrystal_I2C
//#define RA_CONTROL_PANEL

// Delta calibration menu
// uncomment to add three points calibration menu option.
// See http://minow.blogspot.com/index.html#4918805519571907051
// If needed, adjust the X, Y, Z calibration coordinates
// in ultralcd.cpp@lcd_delta_calibrate_menu()
//#define DELTA_CALIBRATION_MENU

// The MakerLab Mini Panel with graphic controller and SD support
// http://reprap.org/wiki/Mini_panel
//#define MINIPANEL

/**
 * I2C Panels
 */

//#define LCD_I2C_SAINSMART_YWROBOT

// PANELOLU2 LCD with status LEDs, separate encoder and click inputs
//
// This uses the LiquidTWI2 library v1.2.3 or later ( https://github.com/lincomatic/LiquidTWI2 )
// Make sure the LiquidTWI2 directory is placed in the Arduino or Sketchbook libraries subdirectory.
// (v1.2.3 no longer requires you to define PANELOLU in the LiquidTWI2.h library header file)
// Note: The PANELOLU2 encoder click input can either be directly connected to a pin
//       (if BTN_ENC defined to != -1) or read through I2C (when BTN_ENC == -1).
//#define LCD_I2C_PANELOLU2

// Panucatt VIKI LCD with status LEDs, integrated click & L/R/U/P buttons, separate encoder inputs
//#define LCD_I2C_VIKI

// SSD1306 OLED generic display support
// ==> REMEMBER TO INSTALL U8glib to your ARDUINO library folder: https://github.com/olikraus/U8glib_Arduino
//#define U8GLIB_SSD1306

// Shift register panels
// ---------------------
// 2 wire Non-latching LCD SR from:
// https://bitbucket.org/fmalpartida/new-liquidcrystal/wiki/schematics#!shiftregister-connection
// LCD configuration: http://reprap.org/wiki/SAV_3D_LCD
//#define SAV_3DLCD

// @section extras

// Increase the FAN pwm frequency. Removes the PWM noise but increases heating in the FET/Arduino
//#define FAST_PWM_FAN

// Use software PWM to drive the fan, as for the heaters. This uses a very low frequency
// which is not as annoying as with the hardware PWM. On the other hand, if this frequency
// is too low, you should also increment SOFT_PWM_SCALE.
//#define FAN_SOFT_PWM

// Incrementing this by 1 will double the software PWM frequency,
// affecting heaters, and the fan if FAN_SOFT_PWM is enabled.
// However, control resolution will be halved for each increment;
// at zero value, there are 128 effective control positions.
#define SOFT_PWM_SCALE 0

// Temperature status LEDs that display the hotend and bet temperature.
// If all hotends and bed temperature and temperature setpoint are < 54C then the BLUE led is on.
// Otherwise the RED led is on. There is 1C hysteresis.
//#define TEMP_STAT_LEDS

// M240  Triggers a camera by emulating a Canon RC-1 Remote
// Data from: http://www.doc-diy.net/photo/rc-1_hacked/
//#define PHOTOGRAPH_PIN     23

// SkeinForge sends the wrong arc g-codes when using Arc Point as fillet procedure
//#define SF_ARC_FIX

// Support for the BariCUDA Paste Extruder.
//#define BARICUDA

//define BlinkM/CyzRgb Support
//#define BLINKM

/*********************************************************************\
* R/C SERVO support
* Sponsored by TrinityLabs, Reworked by codexmas
**********************************************************************/

// Number of servos
//
// If you select a configuration below, this will receive a default value and does not need to be set manually
// set it manually if you have more servos than extruders and wish to manually control some
// leaving it undefined or defining as 0 will disable the servo subsystem
// If unsure, leave commented / disabled
//
//#define NUM_SERVOS 3 // Servo index starts with 0 for M280 command

// Servo Endstops
//
// This allows for servo actuated endstops, primary usage is for the Z Axis to eliminate calibration or bed height changes.
// Use M851 to set the Z probe vertical offset from the nozzle. Store that setting with M500.
//
//#define X_ENDSTOP_SERVO_NR 1
//#define Y_ENDSTOP_SERVO_NR 2
//#define Z_ENDSTOP_SERVO_NR 0
//#define SERVO_ENDSTOP_ANGLES {{0,0}, {0,0}, {70,0}} // X,Y,Z Axis Extend and Retract angles

// Servo deactivation
//
// With this option servos are powered only during movement, then turned off to prevent jitter.
//#define DEACTIVATE_SERVOS_AFTER_MOVE

#if ENABLED(DEACTIVATE_SERVOS_AFTER_MOVE)
  // Delay (in microseconds) before turning the servo off. This depends on the servo speed.
  // 300ms is a good value but you can try less delay.
  // If the servo can't reach the requested position, increase it.
  #define SERVO_DEACTIVATION_DELAY 300
#endif

/**********************************************************************\
 * Support for a filament diameter sensor
 * Also allows adjustment of diameter at print time (vs  at slicing)
 * Single extruder only at this point (extruder 0)
 *
 * Motherboards
 * 34 - RAMPS1.4 - uses Analog input 5 on the AUX2 connector
 * 81 - Printrboard - Uses Analog input 2 on the Exp1 connector (version B,C,D,E)
 * 301 - Rambo  - uses Analog input 3
 * Note may require analog pins to be defined for different motherboards
 **********************************************************************/
// Uncomment below to enable
//#define FILAMENT_SENSOR

#define FILAMENT_SENSOR_EXTRUDER_NUM 0   //The number of the extruder that has the filament sensor (0,1,2)
#define MEASUREMENT_DELAY_CM        14   //measurement delay in cm.  This is the distance from filament sensor to middle of barrel

#define DEFAULT_NOMINAL_FILAMENT_DIA 3.00  //Enter the diameter (in mm) of the filament generally used (3.0 mm or 1.75 mm) - this is then used in the slicer software.  Used for sensor reading validation
#define MEASURED_UPPER_LIMIT         3.30  //upper limit factor used for sensor reading validation in mm
#define MEASURED_LOWER_LIMIT         1.90  //lower limit factor for sensor reading validation in mm
#define MAX_MEASUREMENT_DELAY       20     //delay buffer size in bytes (1 byte = 1cm)- limits maximum measurement delay allowable (must be larger than MEASUREMENT_DELAY_CM  and lower number saves RAM)

//defines used in the code
#define DEFAULT_MEASURED_FILAMENT_DIA  DEFAULT_NOMINAL_FILAMENT_DIA  //set measured to nominal initially

//When using an LCD, uncomment the line below to display the Filament sensor data on the last line instead of status.  Status will appear for 5 sec.
//#define FILAMENT_LCD_DISPLAY

#include "configurations/custom/RoxyDeltaDevelopment/Configuration_adv.h"
#include "thermistortables.h"

#endif //CONFIGURATION_H
