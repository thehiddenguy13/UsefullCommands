#include "UsefullCommands.h"

void toneFreq(int pin, int f) {
  analogWriteFreq(f);
  analogWrite(pin, 128);
}

void noToneFreq(int pin) {
  analogWrite(pin, 0);
}

void sweep(int pin, int f1, int f2, int step) {
  int steps = abs(f2 - f1) / step;
  int direction = (f2 > f1) ? 1 : -1;
  for (int i = 0; i <= steps; i++) {
    int f = f1 + direction * step * i;
    analogWriteFreq(f);
    analogWrite(pin, 128);
    delay(10);
  }
}

void playLetter(char c, int buzzerPin) {
  int base = 300;
  int freq = base + (c - 'A') * 30;
  toneFreq(buzzerPin, freq);
  delay(200);
  noToneFreq(buzzerPin);
}