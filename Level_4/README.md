RIOT@FrOSCon25: Forth Dungeon - Defending the Treasure
======================================================

Introduction
------------

Word as already spreading that you, oh brave adventurer, are now in possession of the great treasure of the dragon.
It is only a matter of time until thieves try to steal your hard-earne treasure.
But fear not, your magical board never sleeps and can be tasked to guard you treasure.

Task
----

Create a spell that will detect a movement and aleart you of a potential theft with magical light.

Steps
-----

1. Grab an acceleration sensor and connect it to your board using jumper wires
2. Enable the driver for the temperature sensor by adding `USEMODULE += <DRIVER_NAME>` to the `Makefile` of your app.
3. Overwrite the default configuration of the driver
    - A quick and dirty way is to add something along the lines of `CFLAGS += -DACCELDRIVER_PARAMS_I2C=I2C_BUS(2)`
    - A more elegant way is to add a copy of the board spec and adapt it to your needs. Make this board using `EXTERNAL_BOARD_DIRS` available to your application.
4. Use the `ZTIMER_USEC` module to keep track of time
5. Poll the acceleration sensor periodically and keep track of movements
    - Many acceleration sensors also can signal a movement above a threshold via an interrupt, which is way more elegant. The trivial polling strategy will however work just fine here.
6. Turn on the LED light when movement exceeds a given threshold.

