const int BlueLEDbulitIn = 24;
const int RedLEDbulitIn = 22;
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

boolean dipSW4 = false;
boolean dipSW3 = false;
boolean dipSW2 = false;
boolean dipSW1 = false;

int addOn = 0;

const int sw1Num = 1;
const int sw2Num = 2;
const int sw3Num = 3;
const int sw4Num = 4;
const int sw5Num = 5;
const int sw6Num = 6;
const int sw7Num = 7;
const int sw8Num = 8;
const int sw9Num = 9;

void setup()
{
  pinMode(dipSwitch4, INPUT);

  digitalWrite(dipSwitch4, LOW);

  pinMode(mode2, OUTPUT);

  pinMode(sw20, INPUT);

  Serial.begin(9600);
  delay(3000);
  Serial.print("Starting up arduino nano 33 BLE with the hot key program\n");

}

void loop()
{
  if(digitalRead(dipSwitch4) == HIGH)  
  {
    digitalWrite(mode2, HIGH);
    dipSW4 = true;
    addOn = 0;
  }
  else{
    digitalWrite(mode2, LOW);
    dipSW4 = false;
  }
  
  if(digitalRead(dipSwitch3) == LOW)  
  {
    digitalWrite(mode1, LOW);
    dipSW3 = true;
    addOn = 9;
  }
  else {
    dipSW3 = false;
    digitalWrite(mode1, HIGH);
  }
  
  if(digitalRead(dipSwitch2) == LOW)  
  {
    dipSW2 = true;
    digitalWrite(mode1, LOW);
    digitalWrite(mode2, LOW);
    addOn = 18;
  }
  else{
    dipSW2 = false;
    digitalWrite(mode1, HIGH);
    digitalWrite(mode2, HIGH);
  }

  if(digitalRead(dipSwitch1) == LOW)  
  {
    dipSW1 = true;
    digitalWrite(RedLEDbulitIn, LOW);
  }
  else{
    dipSW1 = false;
    digitalWrite(RedLEDbulitIn, HIGH);
  }

  if(!dipSW1){
    
 
  if(digitalRead(sw20) == LOW){
    digitalWrite(BlueLEDbulitIn, LOW);
    if(canPressKey1){
      Serial.print(sw1Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw2Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw3Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw4Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw5Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw6Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw7Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw8Num + addOn);
      Serial.print("\n");
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
      Serial.print(sw9Num + addOn);
      Serial.print("\n");
      canPressKey9 = false;
    }
  }else{
   digitalWrite(BlueLEDbulitIn, HIGH);
   if(!canPressKey9){
    canPressKey9 = true;
   }
  }
  
  }
  
}
