int cahaya = 4;  // D2 = GPIO4
int led = 5;      // D1 = GPIO5

void setup() {
    // put your setup code here, to run once:
    pinMode(cahaya,INPUT);  //pin sensor cahaya sebagai input
    pinMode (led,OUTPUT);   //inisial led sebagai output
    Serial.begin(9600);     //serial komunikasi atau baudrate
}

void loop() {
    // put your main code here, to run repeatedly:
    int data = digitalRead(cahaya); //inisial bahwa data sama dengan membaca sensor cahaya
    Serial.println(data);  //menampilkan nilai sensor di serial monitor
  
    if (data == 0){      //jika sensor mendeteksi tidak ada cahaya
      digitalWrite(led,LOW); //led on
    }
    else{       //jika ada cahaya
      digitalWrite(led,HIGH);    //led off
    }
}
