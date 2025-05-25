
void sendToMotorRight()
{
  sendToMotor(motorRight, ENA_PIN, IN1_PIN, IN2_PIN);
}

void sendToMotorLeft()
{
  sendToMotor(motorLeft, ENB_PIN, IN3_PIN, IN4_PIN);
}

void fullMotorsSpeed()
{
  setMotorSpeed(motorRight, TOP_SPEED);
  setMotorSpeed(motorLeft, TOP_SPEED);

  sendToMotorRight();
  sendToMotorLeft();
}

void stopMotors()
{
  setMotorSpeed(motorRight, 0);
  setMotorSpeed(motorLeft, 0);

  sendToMotorRight();
  sendToMotorLeft();
}

// Send to motor with jumper (no speed)
void sendToMotor(motor motor, int directionPin1, int directionPin2)
{
  // Set direction
  digitalWrite(directionPin1, motor.direction.input1);
  digitalWrite(directionPin2, motor.direction.input2);
}

// Send to motor without jumper
void sendToMotor(motor motor, int speedPin, int directionPin1, int directionPin2)
{
  // Set speed
  analogWrite(speedPin, motor.speed);

  // Set direction
  digitalWrite(directionPin1, motor.direction.input1);
  digitalWrite(directionPin2, motor.direction.input2);
}

