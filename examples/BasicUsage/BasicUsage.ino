#include <UsefullCommands.h>

int buzzerPin = 9;

void setup() {
  // Play a tone at 440 Hz for half a second
  toneFreq(buzzerPin, 440);
  delay(500);
  noToneFreq(buzzerPin);

  delay(500);

  // Sweep from 200 Hz to 1000 Hz in steps of 10
  sweep(buzzerPin, 200, 1000, 10);

  delay(500);

  // Play the tone associated with the letter 'A'
  playLetter('A', buzzerPin);
}

void loop() {
}