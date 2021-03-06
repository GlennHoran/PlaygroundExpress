#include <Adafruit_CircuitPlayground.h>
 
void setup() {
  // Initialize the circuit playground
  CircuitPlayground.begin();
  Serial.begin(9600);
}
 
void loop() {
  for (int i=0; i<10; i++){
    CircuitPlayground.setPixelColor(i,convertAccToInt(CircuitPlayground.motionX()), convertAccToInt(CircuitPlayground.motionY()),convertAccToInt(CircuitPlayground.motionZ()));
  Serial.print("\n X: ");
  Serial.print(convertAccToInt(CircuitPlayground.motionX()));
  Serial.print("\n Y: ");
  Serial.print(convertAccToInt(CircuitPlayground.motionY()));
  
  
  }
}

int convertAccToInt(float x){
  int neoPixelValue;
  int i;
  //converts accelerometer value into a positive number then multiplies by 100 to keep resolution
  float accelerometerValueAsInt = ((x+10) *100);
  //converts float into int
  i = int (accelerometerValueAsInt);
  //converts into value 0-255 for neoplixel input
  neoPixelValue = i/18;
return neoPixelValue; 
 

}


