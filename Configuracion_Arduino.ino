

#include <SoftwareSerial.h>
SoftwareSerial Serie1 (2, 3);// rx tx

int ct = 15; //Variable de calibracion de pin
int habitacion1 = 6;
int habitacion2 = 12;
int puertaingreso = 11;
int ventanaldepatio = 10;
int puertaestacionamiento = 9;
int puertapatio = 8;
int patiocubierto = 7;
int led =13;

void setup()
{
  Serie1.begin(9600);
  Serial.begin(9600);
  pinMode(habitacion1, INPUT);
  pinMode(habitacion2, INPUT);
  pinMode(puertaingreso, INPUT);
  pinMode(ventanaldepatio, INPUT);
  pinMode(puertaestacionamiento, INPUT);
  pinMode(puertapatio, INPUT);
  pinMode(patiocubierto, INPUT);
  digitalWrite(habitacion1,LOW);
  digitalWrite(habitacion2, LOW);
  digitalWrite(puertaingreso, LOW);
  digitalWrite(ventanaldepatio, LOW);
  digitalWrite(puertaestacionamiento, LOW);
  digitalWrite(puertapatio, LOW);
  digitalWrite(patiocubierto, LOW);
  pinMode(led,OUTPUT);
    
 
    Serial.println("Espere, ahora calibrando el sensor....");
    for(int i = 0; i <= ct; i++){
      Serial.print(((i*100)/ct));
      Serial.print("% ");
      Serial.println("COMPLETADO.....");
      delay(1000);
      }
    Serial.println("Calibracion Completada Satisfactoriamente.");
    Serial.println("** SENSOR ACTIVO **");
    delay(50);
  }

  
void loop(){
    if (digitalRead (habitacion1)== HIGH)
{
  digitalWrite (habitacion1, HIGH);
  int lectura = digitalRead(habitacion1);
  Serial.print("HAY MOVIMIENTO EN HABITACION 1");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (habitacion1, LOW);
  digitalWrite(led,LOW);
}
    if (digitalRead (habitacion2)== HIGH)
{
  digitalWrite (habitacion2, HIGH);
  int lectura = digitalRead(habitacion2);
  Serial.print("HAY MOVIMIENTO EN HABITACION 2");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (habitacion2, LOW);
  digitalWrite(led,LOW);
}
    if (digitalRead (puertaingreso)== HIGH)
{
  digitalWrite (puertaingreso, HIGH);
  int lectura = digitalRead(puertaingreso);
  Serial.print("HAY MOVIMIENTO EN LA PUERTA DE INGRESO");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (puertaingreso, LOW);
  digitalWrite(led,LOW);
}
  if (digitalRead (ventanaldepatio)== HIGH)
{
  digitalWrite (ventanaldepatio, HIGH);
  int lectura = digitalRead(ventanaldepatio);
  Serial.print("HAY MOVIMIENTO EN EL VENTANAL DEL PATIO");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (ventanaldepatio, LOW);
  digitalWrite(led,LOW);
}
  if (digitalRead (puertaestacionamiento)== HIGH)
{
  digitalWrite (puertaestacionamiento, HIGH);
  int lectura = digitalRead(puertaestacionamiento);
  Serial.print("HAY MOVIMIENTO EN LA PUERTA DEL ESTACIONAMIENTO");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (puertaestacionamiento, LOW);
  digitalWrite(led,LOW);
}
  if (digitalRead (puertapatio)== HIGH)
{
  digitalWrite (puertapatio, HIGH);
  int lectura = digitalRead(puertapatio);
  Serial.print("HAY MOVIMIENTO EN LA PUERTA DEL PATIO");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (puertapatio, LOW);
  digitalWrite(led,LOW);
}
  if (digitalRead (patiocubierto)== HIGH)
{
  digitalWrite (patiocubierto, HIGH);
  int lectura = digitalRead(patiocubierto);
  Serial.print("HAY MOVIMIENTO EN EL PATIO CUBIERTO");  
  Serial.println();
  digitalWrite(led,HIGH);
  delay (2000);
}
else
{
  digitalWrite (patiocubierto, LOW);
  digitalWrite(led,LOW);
}
}
