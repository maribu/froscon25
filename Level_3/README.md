RIOT@FrOSCon25: Third Dungeon - Beware of the Dragon
====================================================

Introduction
------------

After completing the spell, the magical guard lets you pass and you are free to enter the third dungeon.
The guard provides you with a warning an and advice:
"Beware of the Dragon that awaits you in the next dungeon.
The dragons breath of fire will kill you in an instant, if you get to close to it.
You must keep your distance to survive.
However, the dragon is invisible to the human eye.
But you can still feel the warmth of the dragon on your skin when it gets close."

You decided to make use of your magical board to guide you past the dragon.

Task
----

Create a spell that will detect a rise in temperature and will warn you when the temperature increased by at least 1 °C within 2s.

Steps
-----

1. Grab a temperature sensor and connect it to your board using jumper wires
2. Enable the driver for the temperature sensor by adding `USEMODULE += <DRIVER_NAME>` to the `Makefile` of your app.
3. Overwrite the default configuration of the driver
    - A quick and dirty way is to add something along the lines of `CFLAGS += -DTEMPDRIVER_PARAMS_I2C=I2C_BUS(2)`
    - A more elegant way is to add a copy of the board spec and adapt it to your needs. Make this board using `EXTERNAL_BOARD_DIRS` available to your application.
4. Use the `ZTIMER_MSEC` module to keep track of time
5. Poll the temperature periodically and keep track of temperature changes
6. Turn on the LED light when the threshold is exceeded.

