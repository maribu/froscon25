RIOT@CLT2025: Second Dungeon - Slaying Bugs
===========================================

Introduction
------------

Now that you have mastered the spell of light, you safely pass through the first dungeon and reach the second dungeon.
Here a magical guard awaits you, that will only let you pass if you solve the following task:

Adapt the spell provided, so that:
For each number from 0 to 14 summon the output `In room <NUMBER> you will find: <SURPRISE>`.
However, `<NUMBER>` needs to be replaced by the number, and `<SURPRISE>` needs to be replaced by:

1. `a dragon`, if the number is a multiple of three
2. `an egg`, if the number is a multiple of two
3. `a dragonegg` if the number is a multiple of both two and three
4. `nothing`, if the number is neither a multiple of two nor of three

Task
----

Fix the bug in the program so that the output will be:

```
In room 0 you will find: a dragonegg
In room 1 you will find: nothing
In room 2 you will find: an egg
In room 3 you will find: a dragon
In room 4 you will find: an egg
In room 5 you will find: nothing
In room 6 you will find: a dragonegg
In room 7 you will find: nothing
In room 8 you will find: an egg
In room 9 you will find: a dragon
In room 10 you will find: an egg
In room 11 you will find: nothing
In room 12 you will find: a dragonegg
In room 13 you will find: nothing
In room 14 you will find: an egg
```

Steps
-----

1. Run the program as is with `make flash term` from within the folder `Level_2`
2. Adapt the program need
