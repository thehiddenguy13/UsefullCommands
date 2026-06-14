# UsefullCommands

A small Arduino library for the Raspberry Pi Pico that provides simple
functions to play tones, sweep frequencies, and map letters to tones
using a buzzer.

## Functions

- `toneFreq(pin, frequency)` — plays a tone at the given frequency
- `noToneFreq(pin)` — stops the tone
- `sweep(pin, startFreq, endFreq, step)` — sweeps between two frequencies
- `playLetter(letter, pin)` — plays a tone based on a letter (A, B, C...)

## Example

See the `examples/BasicUsage` folder for a working sketch.
