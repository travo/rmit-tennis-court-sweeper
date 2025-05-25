// -------------------------------------------------
// Copyright (c) 2023 HiBit <https://www.hibit.dev>
// -------------------------------------------------

// Motor A
#define ENA_PIN 10 //PWM
#define IN1_PIN 8
#define IN2_PIN 9

// Motor B
#define IN3_PIN 12
#define IN4_PIN 13
#define ENB_PIN 11 //PWM

#define TOP_SPEED 255 
#define HALF_SPEED 125 

#define IR_RIGHT_OUTSIDE_PIN 2
#define IR_RIGHT_MIDDLE_PIN 3
#define IR_RIGHT_INSIDE_PIN 4

#define IR_LEFT_OUTSIDE_PIN 7
#define IR_LEFT_MIDDLE_PIN 6
#define IR_LEFT_INSIDE_PIN 5

#define LINE 0
#define GRND 1

struct motor {
  byte speed = 0;

  struct {
    byte input1 = LOW;
    byte input2 = LOW;
  } direction;
};

motor motorRight, motorLeft;

void setup()
{
  Serial.begin(115200);

  // Set PWM & direction pins to output for both motor
  pinMode(ENA_PIN, OUTPUT);
  pinMode(IN1_PIN, OUTPUT);
  pinMode(IN2_PIN, OUTPUT);

  pinMode(ENB_PIN, OUTPUT);
  pinMode(IN3_PIN, OUTPUT);
  pinMode(IN4_PIN, OUTPUT);

  pinMode(IR_RIGHT_OUTSIDE_PIN, INPUT);
  pinMode(IR_RIGHT_MIDDLE_PIN, INPUT);
  pinMode(IR_RIGHT_INSIDE_PIN, INPUT);

  pinMode(IR_LEFT_OUTSIDE_PIN, INPUT);
  pinMode(IR_LEFT_MIDDLE_PIN, INPUT);
  pinMode(IR_LEFT_INSIDE_PIN, INPUT);

  // Init with default values
  sendToMotorRight();
  sendToMotorLeft();
}

void loop()
{
  if (centreLineDetected())
  {
    Serial.println("CENTRE LINE detected");
    moveForward();
  } 
  else if (leftLineDetected())
  {
    Serial.println("LEFT LINE detected");
    moveLeft();
  }
  else if (rightLineDetected())
  {
    Serial.println("RIGHT LINE detected");
    moveRight();
  }
  else if (noLineDetected())
  {
    Serial.println("NO LINE detected");
    stopMotors();
  }

}

