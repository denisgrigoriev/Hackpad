#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(D3, INPUT_PULLUP);
  pinMode(D1, INPUT_PULLUP);
  pinMode(D2, INPUT_PULLUP);
  pinMode(D0, INPUT_PULLUP);
  Keyboard.begin();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(D3) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('c');
    delay(100);
    Keyboard.releaseAll();
  }

  if (digitalRead(D1) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('v');
    delay(100);
    Keyboard.releaseAll();
  }

  if (digitalRead(D2) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_RIGHT_SHIFT);
    Keyboard.press(3);
    delay(100);
    Keyboard.releaseAll();
  }

  if (digitalRead(D0) == LOW) {
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press(KEY_RIGHT_SHIFT);
    Keyboard.press(4);
    delay(100);
    Keyboard.releaseAll();
  }

}
