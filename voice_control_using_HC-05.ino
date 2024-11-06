const int relay = 2, LED = 13;
char data;
char buff[30];
int index=0;
bool key = 0;
long int waktu;





void setup() {

  
 Serial.begin(9600);
 pinMode(relay,OUTPUT);
 pinMode(LED,OUTPUT);


}

void loop() {
  // jika data diterima
  if(Serial.available() > 0){
  // simpan data ke variable data
  data = Serial.read();


// variable agar datanya tersimpan dari nol (optional)
  if(key = 0){
    buff[index] = data;
    key = 1;
  }
  else{
// algoritma agar data nya tersimpan ke buffer 
// Note : jika tidak diterapkan data hanya akan tersimpan satu per satu
    buff[index++] = data;
  }
// memberi char null di akhir data
buff[index] = '\0';
// print variabel tersebut ke serial monitor
Serial.println(buff);
}


// algo perbandingan string 
// jika sesuai dengan string yang kita buat, maka akan memasuki percabangan yang kita buat
// variable indeks di reset agar data pada buff akan tereset ketika berhasil memasuki percabangan
if(strcmp (buff,"menyala") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
if(strcmp (buff,"nyalakan") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
if(strcmp (buff,"on") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
if(strcmp (buff,"kasih menyala") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
if(strcmp (buff,"Turn on the lamp") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
if(strcmp (buff,"aktifkan lampu") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
if(strcmp (buff,"Hidupkan lampu") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }
  if(strcmp (buff,"Positif") == 0){
  digitalWrite(relay,1);
  digitalWrite(LED,1);  
    index = 0;
  }






// algoritma masih sama, tapi untuk mematikan lampu
else if(strcmp (buff,"mati") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }

 
else if(strcmp (buff,"matikan") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }



else if(strcmp (buff,"Matikan lampu") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }

else if(strcmp (buff,"Turn off the lamp") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }

else if(strcmp (buff,"Turn it Off") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }

else if(strcmp (buff,"Kasih mati") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }

else if(strcmp (buff,"Kurn off the lamp") == 0){
  digitalWrite(relay,0);
  digitalWrite(LED,0);  
    index = 0;
  }



  // sistem pengaman: mereset isi buffer setiap 10 detik
if(millis() - waktu >= 10000){
  for(int i; i < 30; i++){
    buff[i] = 0;
    waktu = millis();
    index = 0;
  }
// note: jika buffer tidak di reset setiap 10 detik, maka datanya akan tertumpuk dan tidak dapat di baca oleh mikrokontroler

  }
}





//author: @anxxre_z
