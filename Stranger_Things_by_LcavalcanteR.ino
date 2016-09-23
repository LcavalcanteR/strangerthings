/* Stranger Things' Alphabet Wall
 * Check the schematics here: https://github.com/LcavalcanteR/strangerthings
 * https://youtu.be/L1kkLiMBckQ
 * Please, share with your friends :)
 * Made by Lucas Cavalcante - @LcavalcanteR
 */
 
char str;
int C2 = 2;
int C3 = 3;
int C4 = 4;
int C5 = 5;
int C6 = 6;
int C7 = 7;
int C8 = 8;
int C9 = 9;
int C10 = 10;
int C11 = 11;
int L1 = A0;
int L2 = 12;
int L3 = 13;
int t = 400;

void setup() {
  pinMode(C2, OUTPUT);
  pinMode(C3, OUTPUT);
  pinMode(C4, OUTPUT);
  pinMode(C5, OUTPUT);
  pinMode(C6, OUTPUT);
  pinMode(C7, OUTPUT);
  pinMode(C8, OUTPUT);
  pinMode(C9, OUTPUT);
  pinMode(C10, OUTPUT);
  pinMode(C11, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  str = Serial.read();
  
 if ( Serial.available() > 0){
  Serial.println(str);
 if(str=='a'){
  A(); 
  delay(t);
 }
 if(str=='b'){
  B(); 
  delay(t);
 }
 if(str=='c'){
  C(); 
  delay(t);
 }
 if(str=='d'){
  D(); 
  delay(t);
 }
 if(str=='e'){
  E(); 
  delay(t);
 }
 if(str=='f'){
  LF(); 
  delay(t);
 }
if(str=='g'){
  G(); 
  delay(t);
 }
if(str=='h'){
  H(); 
  delay(t);
 }
if(str=='i'){
  I(); 
  delay(t);
 }
if(str=='j'){
  J(); 
  delay(t);
 }
if(str=='k'){
  K(); 
  delay(t);
 }
 if(str=='l'){
  L(); 
  delay(t);
 }
if(str=='m'){
  M(); 
  delay(t);
 }
if(str=='n'){
  N(); 
  delay(t);
 }
if(str=='o'){
  O(); 
  delay(t);
 }
if(str=='p'){
  P(); 
  delay(t);
 }
if(str=='q'){
  Q(); 
  delay(t);
 }
if(str=='r'){
  R(); 
  delay(t);
 }
if(str=='s'){
  S(); 
  delay(t);
 }
if(str=='t'){
  T(); 
  delay(t);
 }
if(str=='u'){
  U(); 
  delay(t);
 }
if(str=='v'){
  V(); 
  delay(t);
 }
if(str=='w'){
  W(); 
  delay(t);
 }
if(str=='x'){
  X(); 
  delay(t);
 }
if(str=='y'){
  Y(); 
  delay(t);
 }
if(str=='z'){
  Z(); 
  delay(t);
 }
if(str=='?'){
  INTE(); 
  delay(t);
 }
if(str=='!'){
  EX(); 
  delay(t);
 }
if(str=='.'){
  PT(); 
  delay(t);
 }
if(str==' '){
  ESPACO(); 
  delay(t);
 }
else{
  delay(200);
}
}
}
void A(){
digitalWrite(C2,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C2,LOW);
analogWrite(A0,0);
}
void B(){
digitalWrite(C3,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C3,LOW);
analogWrite(A0,0);
}
void C(){
digitalWrite(C4,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C4,LOW);
analogWrite(A0,0);
}
void D(){
digitalWrite(C5,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C5,LOW);
analogWrite(A0,0);
}
void E(){
digitalWrite(C6,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C6,LOW);
analogWrite(A0,0);
}
void LF(){
digitalWrite(C7,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C7,LOW);
analogWrite(A0,0);
}
void G(){
digitalWrite(C8,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C8,LOW);
analogWrite(A0,0);
}
void H(){
digitalWrite(C9,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C9,LOW);
analogWrite(A0,0);
}
void I(){
digitalWrite(C10,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C10,LOW);
analogWrite(A0,0);
}
void J(){
digitalWrite(C11,HIGH);
digitalWrite(A0,255);
delay(t);
digitalWrite(C11,LOW);
analogWrite(A0,0);
}
//FIM DA PRIMEIRA LINHA A0
void K(){
digitalWrite(C2,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C2,LOW);
digitalWrite(12,LOW);
}
void L(){
digitalWrite(C3,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C3,LOW);
digitalWrite(12,LOW);
}
void M(){
digitalWrite(C4,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C4,LOW);
digitalWrite(12,LOW);
}
void N(){
digitalWrite(C5,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C5,LOW);
digitalWrite(12,LOW);
}
void O(){
digitalWrite(C6,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C6,LOW);
digitalWrite(12,LOW);
}
void P(){
digitalWrite(C7,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C7,LOW);
digitalWrite(12,LOW);
}
void Q(){
digitalWrite(C8,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C8,LOW);
digitalWrite(12,LOW);
}
void R(){
digitalWrite(C9,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C9,LOW);
digitalWrite(12,LOW);
}
void S(){
digitalWrite(C10,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C10,LOW);
digitalWrite(12,LOW);
}
void T(){
digitalWrite(C11,HIGH);
digitalWrite(12,HIGH);
delay(t);
digitalWrite(C11,LOW);
digitalWrite(12,LOW);
}
//AQUI ACABA SEGUNDA LINHA D12
void U(){
digitalWrite(C2,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C2,LOW);
digitalWrite(13,LOW);
}
void V(){
digitalWrite(C3,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C3,LOW);
digitalWrite(13,LOW);
}
void W(){
digitalWrite(C4,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C4,LOW);
digitalWrite(13,LOW);
}
void X(){
digitalWrite(C5,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C5,LOW);
digitalWrite(13,LOW);
}
void Y(){
digitalWrite(C6,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C6,LOW);
digitalWrite(13,LOW);
}
void Z(){
digitalWrite(C7,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C7,LOW);
digitalWrite(13,LOW);
}
void INTE(){
digitalWrite(C8,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C8,LOW);
digitalWrite(13,LOW);
}
void EX(){
digitalWrite(C9,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C9,LOW);
digitalWrite(13,LOW);
}
void PT(){
digitalWrite(C10,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C10,LOW);
digitalWrite(13,LOW);
}
void ESPACO(){
digitalWrite(C11,HIGH);
digitalWrite(13,HIGH);
delay(t);
digitalWrite(C11,LOW);
digitalWrite(13,LOW);
}
