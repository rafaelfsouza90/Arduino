#define ldr A0
#define led 2
int vldr=0; //Variável global, pode ser usada tanto no setup quanto no loop


void setup() {
  
  //Módulo dos pinos
pinMode(ldr, INPUT); //SINAL QUE ENTRA NO ARDUINO
pinMode(led, OUTPUT); //SINAL QUE SAI DO ARDUINO PARA O LED
Serial.begin(9600); 

}

void loop() {
  vldr=analogRead(ldr);
  if(vldr<700){
    digitalWrite(led, HIGH);
  }else{
      digitalWrite(led, LOW); 
  }
  Serial.println(vldr);
  delay(1000);
}
