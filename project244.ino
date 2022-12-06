#define buzzer 26
const int VALUE_THRESHOLD=30
int touch_pin_1_value;
int touch_pin_2_value;
int touch_pin_3_value;
int touch_pin_4_value;
int touch_pin_5_value;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzer, OUTPUT);
  Serial.begin(115200);
  delay(2000);
  digitalWrite(buzzer,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  touch_pin_1_value=touchRead(T5);
  touch_pin_2_value=touchRead(T6);
  touch_pin_3_value=touchRead(T7);
  touch_pin_4_value=touchRead(T8);
  touch_pin_5_value=touchRead(T9);

  Serial.print("touch_pin_value_1: ");
  Serial.print(touch_pin_1_value);
  Serial.print("touch_pin_value_2: ");
  Serial.print(touch_pin_2_value);
  Serial.print("touch_pin_value_3: ");
  Serial.print(touch_pin_3_value);
  Serial.print("touch_pin_value_4: ");
  Serial.print(touch_pin_4_value);
  Serial.print("touch_pin_value_5: ");
  Serial.print(touch_pin_5_value);

  delay(500);

  if (touch_pin_1_value<VALUE_THRESHOLD){
    for (int i = 0;i<2;i++){
      digitalWrite(buzzer, HIGH);
      delay(100);
      digitalWrite(buzzer, LOW);
      delay(100);
    }
  }
  if (touch_pin_2_value<VALUE_THRESHOLD){
    for (int i = 0;i<5;i++){
      digitalWrite(buzzer, HIGH);
      delay(75);
      digitalWrite(buzzer, LOW);
      delay(75);
    }
  }
  if (touch_pin_3_value<VALUE_THRESHOLD){
    for (int i = 0;i<8;i++){
      digitalWrite(buzzer, HIGH);
      delay(50);
      digitalWrite(buzzer, LOW);
      delay(50);
    }
  }
  if (touch_pin_4_value<VALUE_THRESHOLD){
    for (int i = 0;i<12;i++){
      digitalWrite(buzzer, HIGH);
      delay(25);
      digitalWrite(buzzer, LOW);
      delay(25);
    }
  }
  if (touch_pin_5_value<VALUE_THRESHOLD){
    for (int i = 0;i<15;i++){
      digitalWrite(buzzer, HIGH);
      delay(15);
      digitalWrite(buzzer, LOW);
      delay(15);
    }
  }
  else{
    digitalWrite(2, LOW);
  }
}
