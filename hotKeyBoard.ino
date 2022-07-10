

const int BlueLEDbulitIn = 24;
const int dipSwitch4 = A0;
const int dipSwitch3 = A1; 
const int dipSwitch2 = A2; 
const int dipSwitch1 = A3; 
const int mode2 = 11; 
const int mode1 = 12; 
const int sw20 = D2;
const int sw18 = D3;
const int sw19 = D4;
const int sw12 = D5;
const int sw13 = D6;
const int sw14 = D7;
const int sw4 = D8;
const int sw5 = D9;
const int sw6 = D10;

boolean canPressKey1 = true;
boolean canPressKey2 = true;
boolean canPressKey3 = true;
boolean canPressKey4 = true;
boolean canPressKey5 = true;
boolean canPressKey6 = true;
boolean canPressKey7 = true;
boolean canPressKey8 = true;
boolean canPressKey9 = true;

void setup()
{
  pinMode(dipSwitch4, INPUT);

  digitalWrite(dipSwitch4, LOW);

  pinMode(mode2, OUTPUT);

  pinMode(sw20, INPUT);

}

void loop()
{
  if(digitalRead(dipSwitch4) == HIGH)  
  {
    digitalWrite(mode2, HIGH);
  }
  else{
    digitalWrite(mode2, LOW);
  }
  
  if(digitalRead(dipSwitch3) == HIGH)  
  {
    digitalWrite(mode1, HIGH);
  }
  else digitalWrite(mode1, LOW);
  
  if(digitalRead(dipSwitch2) == HIGH)  
  {
    digitalWrite(mode1, HIGH);
    digitalWrite(mode2, HIGH);
  }
  else{
    digitalWrite(mode1, LOW);
    digitalWrite(mode2, LOW);
  }

  if(digitalRead(sw20) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey1){
      Serial.print("1\n");
      canPressKey1 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey1){
    canPressKey1 = true;
   }
  }
  if(digitalRead(sw18) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey2){
      Serial.print("2\n");
      canPressKey2 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey2){
    canPressKey2 = true;
   }
  }
  if(digitalRead(sw19) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey3){
      Serial.print("3\n");
      canPressKey3 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey3){
    canPressKey3 = true;
   }
  }
  if(digitalRead(sw12) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey4){
      Serial.print("4\n");
      canPressKey4 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey4){
    canPressKey4 = true;
   }
  }
  if(digitalRead(sw13) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey5){
      Serial.print("5\n");
      canPressKey5 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey5){
    canPressKey5 = true;
   }
  }
  if(digitalRead(sw14) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey6){
      Serial.print("6\n");
      canPressKey6 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey6){
    canPressKey6 = true;
   }
  }
  if(digitalRead(sw4) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey7){
      Serial.print("7\n");
      canPressKey7 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey7){
    canPressKey7 = true;
   }
  }
  if(digitalRead(sw5) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey8){
      Serial.print("8\n");
      canPressKey8 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey8){
    canPressKey8 = true;
   }
  }
  if(digitalRead(sw6) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey9){
      Serial.print("9\n");
      canPressKey9 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey9){
    canPressKey9 = true;
   }
  }
  
}
