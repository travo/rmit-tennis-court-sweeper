

void increaseMotorsSpeed()
{
  for (int speed = 0; speed <= TOP_SPEED; speed++) {
    setMotorSpeed(motorRight, speed);
    setMotorSpeed(motorLeft, speed);

    sendToMotorRight();
    sendToMotorLeft();

    delay(20); // Add small delay between changes
  }
}


void decreaseMotorsSpeed()
{
  for (int speed = TOP_SPEED; speed >= 0; speed--) {
    setMotorSpeed(motorRight, speed);
    setMotorSpeed(motorLeft, speed);

    sendToMotorRight();
    sendToMotorLeft();

    delay(20); // Add small delay between changes
  }
}


void setMotorSpeed(motor &motor, int speed)
{
  motor.speed = constrain(speed, 0, TOP_SPEED); // Force values between 0-255 (PWM)
}

void minMotorSpeed(motor &motor)
{
  setMotorSpeed(motor, 0);
}

void maxMotorSpeed(motor &motor)
{
  setMotorSpeed(motor, TOP_SPEED);
}

byte getMotorSpeed(motor &motor)
{
  return motor.speed;
}
