
void moveForward() {
  setMotorDirectionForward(motorRight);
  setMotorDirectionForward(motorLeft);
  fullMotorsSpeed();
}

void moveLeft() {
  setMotorDirectionBackward(motorLeft);
  setMotorDirectionForward(motorRight);
  fullMotorsSpeed();
}

void moveRight() {
  setMotorDirectionBackward(motorRight);
  setMotorDirectionForward(motorLeft);
  fullMotorsSpeed();
}

void unsetMotorDirection(motor &motor)
{
  motor.direction.input1 = LOW;
  motor.direction.input2 = LOW;
}

void setMotorDirectionForward(motor &motor)
{
  motor.direction.input1 = HIGH;
  motor.direction.input2 = LOW;
}

void setMotorDirectionBackward(motor &motor)
{
  motor.direction.input1 = LOW;
  motor.direction.input2 = HIGH;
}

bool isMotorDirectionUnset(motor &motor)
{
  return motor.direction.input1 == LOW && motor.direction.input2 == LOW;
}

bool isMotorDirectionForward(motor &motor)
{
  return motor.direction.input1 == HIGH && motor.direction.input2 == LOW;
}

bool isMotorDirectionBackward(motor &motor)
{
  return motor.direction.input1 == LOW && motor.direction.input2 == HIGH;
}
