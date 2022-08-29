#include <DFRobot_ZXL.h>




void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(100);
  DFRobot_ZXL zxl;
  zxl.setName("zhuxianglong");zxl.setAge(18);
  Serial.print("name=");Serial.println(zxl.getName());
  Serial.print("age=");Serial.println(zxl.getAge());

}

void loop() {
  // put your main code here, to run repeatedly:

}
