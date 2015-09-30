# How to install Marlin Support?

## Via Arduino IDE Boards Manager

* Add the URL to the MarlinFirmware package definition file to the Arduino IDE
Preferences>Additional Boards Manager URLs field.
https://raw.githubusercontent.com/Wackerbarth/MarlinDev/platform/package_marlinfirmware_index.json

* Open the Arduino IDE Boards Manager in the Tools>Board menu.

* Select Marlin and install.


## Via GIT

```shell
cd <custom_path>/sketchbook
mkdir hardware # Create the hardware folder if missing
cd hardware
git clone http://github.com/Wackerbarth/MarlinDev.git
```

Then you can update the library by using:

```shell
git pull origin dev
```
