/* 
 *  출처 - 메카솔루션
     MQ-3 - arduino
     VCC  - 5V
     GND  - GND
      A0  - A0
      D0  - D2
     A0나 D0는 하나만 연결하셔도 됩니다.
   아날로그만 읽고 싶다면 A0만 연결하고
    디지털로만 읽고 싶다면 D0만 연결합니다.
    감도는 제품 뒷면의 가변 저항(파란색 상자의 십자 모양)을 회전시키면 됩니다.
*/

int MQ3Digi = 2;
int MQ3Anal = A0;

void setup() {
  pinMode(MQ3Digi, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.print("Analog Read : ");
  Serial.print(analogRead(MQ3Anal));
  Serial.print("    ");
  Serial.print("Digital Read : ");
  if (digitalRead(MQ3Digi) == HIGH) {
    Serial.print("HIGH");
  }
  else {
    Serial.print("LOW");
  }
}
