// #include <Zumo32U4.h>
// #include <Wire.h>
#include<ZumoMotors.h>

ZumoMotors motors;
//Zumo32U4Motors motors;
//Zumo32U4ButtonA buttonA;

void setup() {
  // put your setup code here, to run once:
  delay(1000);
  // 先亮灯，如果zumo机器人有灯的话
  // ledYellow(1);
  go();
  // 直行60厘米
  delay(4000);   
  stop();
  // 后退30厘米
  refund();      
  delay(2000);
  //   原地转一圈,再左转
  goLeft();      
  delay(4500);
  stop();
  delay(500);
  // 慢慢提速,然后以0.15米/秒前行
  for (int speed = 0; speed <= 100; speed++)
  {
    motors.setLeftSpeed(speed);
    motors.setRightSpeed(speed);
    delay(2);
  }
  delay(5200);
  stop();
  delay(500);
  // 右转
  goRight();
  delay(1500);
  stop();
  delay(500);
  go();
  delay(2000);
  stop();
}

void loop() {
  // put your main code here, to run repeatedly:

}
void go() {
  motors.setLeftSpeed(100);
  motors.setRightSpeed(100);
}
void stop() {
  motors.setLeftSpeed(0);
  motors.setRightSpeed(0);
}

void goLeft() {
  motors.setLeftSpeed(0);
  motors.setRightSpeed(100);
}
void goRight() {
  motors.setLeftSpeed(100);
  motors.setRightSpeed(0);
}
void refund() {
  motors.setLeftSpeed(-100);
  motors.setRightSpeed(-100);
}
