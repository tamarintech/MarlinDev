# Marlin 3D Printer Firmware
<img align="top" width=175 src="Documentation/Logo/Marlin%20Logo%20GitHub.png" />
 Documentation has moved to [marlinfirmware.org](http://www.marlinfirmware.org).

## Arduino IDE 1.6.6 Support Branch

The code in this branch provides the build infrastructure to build and install the Marlin Firmware using the [Arduino 1.6.6 IDE](https://www.arduino.cc/en/Main/Software) toolset.
Other methods of building and installing may be supported in other branches.
In each case, you will also need to separately checkout the source code for the firmware itself.

## Creating a Build Environment

Please see ????????

(Temporarily) The easiest way would be:
1) Download and install the Arduino IDE 1.6.5 from https://www.arduino.cc/en/Main/Software
2) Download this IDE_1.6.5 branch and install it as an alternate platform in the hardware folder
3) Download our dev branch as a library
4) Install your customizations in an appropriate Customization.h file in the configurations/uuid/ folder
5) Reference that file in FirmwareCustomization.h (I'm working on an alternative that, instead, will allow you to do this from the IDE menus)
6) Compile the MarlinFirmware.ino found in examples/MarlinFirmware

## License

Marlin is published under the [GPL license](/LICENSE) because we believe in open development. The GPL comes with both rights and obligations. Whether you use Marlin firmware as the driver for your open or closed-source product, you must keep Marlin open, and you must provide your compatible Marlin source code to end users upon request. The most straightforward way to comply with the Marlin license is to make a fork of Marlin on Github, perform your modifications, and direct users to your modified fork.

While we can't prevent the use of this code in products (3D printers, CNC, etc.) that are closed source or crippled by a patent, we would prefer that you choose another firmware or, better yet, make your own.

[![Flattr this git repo](http://api.flattr.com/button/flattr-badge-large.png)](https://flattr.com/submit/auto?user_id=ErikZalm&url=https://github.com/MarlinFirmware/Marlin&title=Marlin&language=&tags=github&category=software)
