
# variables
OUTPUT = -o src/AVRTime.hex
MCU = atmega328p
SRC = -c AVRTimer.c

# executables
COMP = avr-gcc

# Flags
CFLAGS = -Os -mmcu=$(MCU)

all:
	$(COMP) \
	$(SRC) \
	$(CFLAGS) \
	$(OUTPUT) \