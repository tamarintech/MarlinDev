# Marlin 3D Printer Firmware
<img align="top" width=175 src="Documentation/Logo/Marlin%20Logo%20GitHub.png" />
 Documentation has moved to [marlinfirmware.org](http://www.marlinfirmware.org).

## This is the library version of the code which produces the Marlin Firmware
In order to build the firmware, you will also need a build environment. The official build environment is based on recent version of the [Arduino IDE 1.6.5](https://github.com/MarlinFirmware/MarlinDev/tree/IDE_1.6.5) and [later](https://github.com/MarlinFirmware/MarlinDev/tree/IDE_1.6.6). Start by following instructions found in those branches and then return here to add the actual source code for the firmware.

## Development Only

__Not for production use – use with caution!__

## In Transition

The files that make up the Marlin firmware are being reorganized to provide a more managable structure.

Since the 1.1RC1, the following changes have been made:

1) File Layout --
   The bulk of the code is moved into the hardware/marlin/avr/libraries/marlin/ folder.
   A trivial sketch that can be used to compile and upload the firmware is located at hardware/marlin/avr/libraries/marlin/examples/MarlinFirmware/MarlinFirmware.ino

2) Configuration Files --
   The configuration files are being reorganized. The configuration files from the Marlin 1.1 series are still available in the configurations folder.
   The procedure that you use to customize your configuration has changed. Please see hardware/marlin/avr/libraries/marlin/examples/MarlinFirmware/FirmwareCustomization.h for more information.

3) Coding Style --
   The formatting of the source code is now controlled by the [astyle](http://astyle.sourceforge.net/astyle.html) program.
   The options which specify the style in use are found in the .astylerc file which is located in the top level folder of this repository.
   To reformat a file, run ```astyle --options=.astylerc <file_name>```.
   You will need to do this before committing the file to the git repository. Pull requests which do not conform to the specified style will be rejected by the automated tests in our Travis Intgration suite.

4) Compilation Support --
   There are separate branches in this repository to support building using the Arduino IDE 1.6.5 and the (recent hourly build) Arduino IDE 1.6.6  At the present time, this support is incomplete.
   If you need them, you can retrieve earlier support routines from the [RC branch](https://github.com/MarlinFirmware/Marlin/tree/RC) of the [Marlin Release Repository](https://github.com/MarlinFirmware/Marlin).

The [dev branch](https://github.com/MarlinFirmware/MarlinDev/tree/dev) contains the most up-to-date Marlin code. Please remember that this code is for developers only and may well contain non-working situations.

## Testing
The [RC branch](https://github.com/MarlinFirmware/Marlin/tree/RC) contains the latest Marlin 1.1 pre-release candidate.

## Released Code
For the latest tagged version of Marlin (currently 1.0.2 – January 2015) you should switch to the [Release Repository](https://github.com/MarlinFirmware/Marlin). Please see that repository for additional information.

## Current Status: Reorganization of Source Files

Testing of the 1.1 Release Candidate is under way. Marlin development needs to proceed with caution while the structural changes being implemented here are completed.

[![Coverity Scan Build Status](https://scan.coverity.com/projects/2224/badge.svg)](https://scan.coverity.com/projects/2224)
[![Travis Build Status](https://travis-ci.org/MarlinFirmware/MarlinDev.svg)](https://travis-ci.org/MarlinFirmware/MarlinDev)

##### [RepRap.org Wiki Page](http://reprap.org/wiki/Marlin)

## Contact

__Google Hangout:__ <a href="https://plus.google.com/hangouts/_/gxn3wrea5gdhoo223yimsiforia" target="_blank">. Hangout</a> We have a hangout every 2 weeks. Search the issue list for "Hangout" and you will see what time and date the next event is going on.

## Credits

The current Marlin dev team consists of:

 - Scott Lahteine [@thinkyhead] - English
 - Andreas Hardtung [@AnHardt] - Deutsch, English
 - [@Wurstnase] - Deutsch, English
 - F. Malpartida [@fmalpartida] - English, Spanish
 - [@CONSULitAS] - Deutsch, English
 - [@maverikou]
 - Chris Palmer [@nophead]
 - [@paclema]
 - Edward Patel [@epatel] - Swedish, English
 - Erik van der Zalm [@ErikZalm]
 - David Braam [@daid]
 - Bernhard Kubicek [@bkubicek]
 - Richard Wackerbarth [@Wackerbarth] - English
 - Roxanne Neufeld [@Roxy-3DPrintBoard] - English

More features have been added by:
  - Alberto Cotronei [@MagoKimbra]
  - Lampmaker,
  - Bradley Feldman,
  - and others...

## License

Marlin is published under the [GPL license](/Documentation/COPYING.md) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)
