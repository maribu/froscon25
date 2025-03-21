RIOT@CLT2025: First Dungeon - Just Getting Started
==================================================

Introduction
------------

While you, dear adventurer, approach the entrance of the first dungeon, you keep wondering whether it is bravery or folly that lead you here.
"Well, time to find out!", you say to yourself and take a leap into the dark.
Just as you are about to vanish into the unknown, a hand on your shoulder pulls you back.

"It's dangerous to go alone! Take this." the old man that dragged you back into the light says while handing you a [Nucleo F303RE][nucleo-f303re].
"This magic board is possessed by a logic daemon, that will do your bidding.", the old man continuous.
"But remember to instruct it precisely and to choose your works carefully, as the daemon will follow your orders meticulously.
Just one careless word, and it might turn on you!"

You closely inspect and admire your board.
When you look back to where the man was standing a just a moment ago, you notice that he is gone.

Task
----

Illuminate the darkness of the dungeon with your new magic board, so that you can find the entrance to the next dungeon.

Steps
-----

1. Clone this repository using `git`, including submodules.
2. Locate the `default` example application and flash it using `make BOARD=nucleo-f303re flash`
3. Experiment with the RIOT shell. The `help` command provides a list of shell commands support by the currently flashed app
4. Turn on the user controllable LED using a shell command

[nucleo-f303re]: https://doc.riot-os.org/group__boards__nucleo-f303re.html
