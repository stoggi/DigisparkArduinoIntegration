#include "VolumeControl.h"

void setup() {
  pinMode(1, OUTPUT);
}

void Blink(byte n) {
  while (n > 0) {
    digitalWrite(1, HIGH);
    DigiVolumeControl.delay(50);
    digitalWrite(1, LOW);
    DigiVolumeControl.delay(50);
    n--;
  }
}

void loop() {
  // Volume Up
  Blink(1);
  DigiVolumeControl.sendData(VOLUME_UP);
  DigiVolumeControl.delay(2000);

  // Volume Down
  Blink(1);
  DigiVolumeControl.sendData(VOLUME_DOWN);
  DigiVolumeControl.delay(2000);

  // Mute
  Blink(1);
  DigiVolumeControl.sendData(VOLUME_MUTE);
  DigiVolumeControl.delay(2000);
}
