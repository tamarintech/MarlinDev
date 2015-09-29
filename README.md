# How to install Marlin?

## Via Arduino IDE Boards Manager

* Add the URL to the Cosa package definition file to the Arduino IDE
Preferences>Additional Boards Manager URLs field.
https://raw.githubusercontent.com/Wackerbarth/MarlinDev/platform/package_index.json

* Open the Arduino IDE Boards Manager in the Tools>Board menu.

* Select Cosa and install.


## Via GIT

```shell
cd <custom_path>/sketchbook
mkdir hardware # Create the hardware folder if missing
cd hardware
git clone Wackerbarth/MarlinDev.git
```

Then you can update the library by using:

```shell
git pull origin master
```
