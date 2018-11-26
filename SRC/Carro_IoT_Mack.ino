#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define RightMotorSpeed 4
#define RightMotorDir   0  
#define LeftMotorSpeed  5  
#define LeftMotorDir    2

char auth[] = "c3c2c48a6810490dad793d25e585f8b8";
char ssid[] = "QG_TURCO";
char pass[] = "Bolsonaro17";

int minRange = 312;
int maxRange = 712;

int minSpeed = 450;
int maxSpeed = 1020;

int noSpeed = 0;

void setup()
{
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
 
  // initial settings for motors off and direction forward
  pinMode(RightMotorSpeed, OUTPUT);
  pinMode(LeftMotorSpeed, OUTPUT);
  
  pinMode(RightMotorDir, OUTPUT);
  pinMode(LeftMotorDir, OUTPUT);
 
  digitalWrite(RightMotorSpeed, LOW);
  digitalWrite(LeftMotorSpeed, LOW);
  
  digitalWrite(RightMotorDir, HIGH);
  digitalWrite(LeftMotorDir,HIGH); 
 }


void loop()
{ 
  Blynk.run();
}

BLYNK_WRITE(V1)
{
  int x = param[0].asInt();
  int y = param[1].asInt(); 
  moveControl(x,y);
}

void moveControl(int x, int y)
{

  // move forward 
  if(y >= maxRange && x >= minRange && x <= maxRange)
  {
    digitalWrite(RightMotorDir,HIGH); 
    digitalWrite(LeftMotorDir,HIGH);
    analogWrite(RightMotorSpeed,maxSpeed);
    analogWrite(LeftMotorSpeed,maxSpeed);

    Serial.print("movendo para frente"); 
  }
 
  // move forward right
  else if(x >= maxRange && y >= maxRange)   //zataci R
  {
    digitalWrite(RightMotorDir,HIGH);
    digitalWrite(LeftMotorDir,HIGH);
    analogWrite(RightMotorSpeed,minSpeed);
    analogWrite(LeftMotorSpeed,maxSpeed);

    Serial.print("Movendo para frente a Direita");
  }

  // move forward left
  else if(x <= minRange && y >= maxRange)
  {
    digitalWrite(RightMotorDir,HIGH);
    digitalWrite(LeftMotorDir,HIGH);
    analogWrite(RightMotorSpeed,maxSpeed);
    analogWrite(LeftMotorSpeed,minSpeed);

    Serial.print("Movendo para frente a Esquerda");
  }

  // neutral zone
  else if(y < maxRange && y > minRange && x < maxRange && x > minRange)
  {
    analogWrite(RightMotorSpeed,noSpeed);
    analogWrite(LeftMotorSpeed,noSpeed);

    Serial.print("Zona Neutra!!"); 
  }

 // move back
  else if(y <= minRange && x >= minRange && x <= maxRange)
  {
    digitalWrite(RightMotorDir,LOW);
    digitalWrite(LeftMotorDir,LOW);
    analogWrite(RightMotorSpeed,maxSpeed);
    analogWrite(LeftMotorSpeed,maxSpeed);

    Serial.print("Movendo para tras");
  }

  // move back and right
 else if(y <= minRange && x <= minRange)
  {
    digitalWrite(RightMotorDir,LOW);
    digitalWrite(LeftMotorDir,LOW);
    analogWrite(RightMotorSpeed,minSpeed);
    analogWrite(LeftMotorSpeed,maxSpeed); 

    Serial.print("Movendo para tras a direita"); 
  }

  // move back and left
  else if(y <= minRange && x >= maxRange)
  {
    digitalWrite(RightMotorDir,LOW);
    digitalWrite(LeftMotorDir,LOW);
    analogWrite(RightMotorSpeed,maxSpeed);
    analogWrite(LeftMotorSpeed,minSpeed);
    
    Serial.print("movendo para tras a esquerda");
  }
}
