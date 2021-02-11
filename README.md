# Timer
Timer.c is a little program that contains an algorithm to limit the number of calls of a function per second. It works only on UNIX based OS.

# Purpose
The purpose of the algorithm is to control the numbers of calls of an API. It will be ported to microcontrollers, mainly ATMEGAs and ESPs.

## Compilation
gcc timer.c -o timer

## Use
timer <time of calls per second>
