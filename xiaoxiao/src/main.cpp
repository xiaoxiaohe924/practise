#include<arduino.h>
int arr[8]={15,2,4,5,18,19,21,22};
void setup() {
    for(int i=0;i<8;i++){
        pinMode(arr[i],OUTPUT);
        digitalWrite(arr[i],HIGH);
    }

}
void loop() {
    
    }
    // wait for a second
  // put your main code here, to run repeatedly:
