#ifndef UsefullCommands_h
#define UsefullCommands_h

#include "Arduino.h"

void toneFreq(int pin, int f);
void noToneFreq(int pin);
void sweep(int pin, int f1, int f2, int step);
void playLetter(char c, int buzzerPin);

#endif