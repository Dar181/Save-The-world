void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT); 
  pinMode(1, OUTPUT);

  
  Serial.begin(9600);
  Serial.println("Setup Complete.");

}

void red_on() {
    int button = digitalRead(2);
    if (button == HIGH) {
      return;
    }
    digitalWrite(13, HIGH);
    button = digitalRead(2);
    if (button == HIGH) {
      return;
    }
    digitalWrite(8, LOW);
    button = digitalRead(2);
    if (button == HIGH) {
      return;
    }
    delay(200);
    digitalWrite(10, LOW);
    delay(200);
    button = digitalRead(2);
    if (button == HIGH) {
      return;
    }
    digitalWrite(11, LOW);
    delay(200);
    button = digitalRead(2);
    if (button == HIGH) {
      return;
    }
    digitalWrite(12, LOW);
    
  }

void red_off() {
    int button = digitalRead(2);
    if (button == LOW) {
      return;
      Serial.print("before");
    }
    digitalWrite(13, LOW);
    button = digitalRead(2);
    if (button == LOW) {
      return;
    }
    digitalWrite(12, HIGH);
    delay(200);
    button = digitalRead(2);
    if (button == LOW) {
      return;
    }
    digitalWrite(11, HIGH);
    delay(200);
    button = digitalRead(2);
    if (button == LOW) {
      return;
    }
    digitalWrite(10, HIGH);
    delay(200);
    button = digitalRead(2);
    if (button == LOW) {
      return;
    }
    digitalWrite(8, HIGH);
  }

void green_on() {
    int button_2 = digitalRead(3);
    if (button_2 == HIGH) {
      return;
    }
    digitalWrite(7, HIGH);
    button_2 = digitalRead(3);
    if (button_2 == HIGH) {
      return;
    }
    digitalWrite(9, LOW);
    delay(200);
    button_2 = digitalRead(3);
    if (button_2 == HIGH) {
      return;
    }
    digitalWrite(6, LOW);
    delay(200);
    button_2 = digitalRead(3);
    if (button_2 == HIGH) {
      return;
    }
    digitalWrite(5, LOW);
    delay(200);
    button_2 = digitalRead(3);
    if (button_2 == HIGH) {
      return;
    }
    digitalWrite(4, LOW);
  }

void green_off() {
    int button_2 = digitalRead(3);
    if (button_2 == LOW) {
      return;
    }
    digitalWrite(7, LOW);
    button_2 = digitalRead(3);
    if (button_2 == LOW) {
      return;
    }
    digitalWrite(4, HIGH);
    delay(200);
    button_2 = digitalRead(3);
    if (button_2 == LOW) {
      return;
    }
    digitalWrite(5, HIGH);
    delay(200);
    button_2 = digitalRead(3);
    if (button_2 == LOW) {
      return;
    }
    digitalWrite(6, HIGH);
    delay(200);
    button_2 = digitalRead(3);
    if (button_2 == LOW) {
      return;
    }
    digitalWrite(9, HIGH);
  }


void loop() {
  int button = digitalRead(2);
  int button_2 = digitalRead(3);
  if (button_2 == LOW && button == HIGH) {
   green_on();  
   digitalWrite(1, LOW); 
  }

  else {
    green_off();
    Serial.println("Green_on");
  }

  button = digitalRead(2);
  button_2 = digitalRead(3);
  if (button == LOW && button_2 == HIGH) {
    red_on(); 
    digitalWrite(1, HIGH);
  }

  else {
    red_off();
    Serial.println("Red_on");
    digitalWrite(1, LOW);
  }
}