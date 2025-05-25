
bool noLineDetected()
{
  return (
    digitalRead(IR_LEFT_OUTSIDE_PIN) == GRND &&
    digitalRead(IR_LEFT_MIDDLE_PIN) == GRND &&
    digitalRead(IR_LEFT_INSIDE_PIN) == GRND &&

    digitalRead(IR_RIGHT_INSIDE_PIN) == GRND &&
    digitalRead(IR_RIGHT_MIDDLE_PIN) == GRND &&
    digitalRead(IR_RIGHT_OUTSIDE_PIN) == GRND
  );
}

bool centreLineDetected()
{
  return (
    digitalRead(IR_LEFT_OUTSIDE_PIN) == GRND &&
    digitalRead(IR_LEFT_MIDDLE_PIN) == GRND &&
    digitalRead(IR_LEFT_INSIDE_PIN) == LINE &&

    digitalRead(IR_RIGHT_INSIDE_PIN) == LINE &&
    digitalRead(IR_RIGHT_MIDDLE_PIN) == GRND &&
    digitalRead(IR_RIGHT_OUTSIDE_PIN) == GRND
  );
}

bool leftLineDetected()
{
  return (
    digitalRead(IR_LEFT_OUTSIDE_PIN) == LINE &&
    digitalRead(IR_LEFT_MIDDLE_PIN) == LINE &&
    digitalRead(IR_LEFT_INSIDE_PIN) == LINE &&

    digitalRead(IR_RIGHT_INSIDE_PIN) == LINE &&
    digitalRead(IR_RIGHT_MIDDLE_PIN) == GRND &&
    digitalRead(IR_RIGHT_OUTSIDE_PIN) == GRND
  );
}

bool rightLineDetected()
{
  return (
    digitalRead(IR_LEFT_OUTSIDE_PIN) == GRND &&
    digitalRead(IR_LEFT_MIDDLE_PIN) == GRND &&
    digitalRead(IR_LEFT_INSIDE_PIN) == LINE &&

    digitalRead(IR_RIGHT_INSIDE_PIN) == LINE &&
    digitalRead(IR_RIGHT_MIDDLE_PIN) == LINE &&
    digitalRead(IR_RIGHT_OUTSIDE_PIN) == LINE
  );
}


