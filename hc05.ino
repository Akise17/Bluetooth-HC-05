#include <SoftwareSerial.h>

SoftwareSerial hc05(2, 3); // RX, TX

#define   atas      70
#define   bawah     66
#define   kiri      76
#define   kanan     82
#define   berhenti  83


void setup()
{
  // Open serial communications and wait for port to open:
  Serial.begin(57600);
  Serial.println("Bluetooth Controller");
  
  hc05.begin(9600);
}

void loop() // run over and over
{
  baca_hc05();
}

void baca_hc05()
{
  if(hc05.available())
  {
    int nilai;
    nilai=hc05.read();
    switch(nilai)
    {
      case atas: {Serial.println("maju");break;}
      case bawah: {Serial.println("mundur");break;}
      case kiri: {Serial.println("belok kiri");break;}
      case kanan:{Serial.println("belok kanan");break;}
      case berhenti: {Serial.println("berhenti");break;}
    }
  }
}


