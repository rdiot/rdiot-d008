/* RGB LED Module SMD (KY-009) [D008] : http://rdiot.tistory.com/201 [RDIoT Demo] */

int B = 9; // OUTPUT PIN blue
int R = 11; // OUTPUT PIN red
int G = 10; // OUTPUT PIN green
 
void setup()
{
 Serial.begin(115200); 
 Serial.println("Arduino Examples - RGB LED");
 pinMode(R, OUTPUT);
 pinMode(G, OUTPUT);
 pinMode(B, OUTPUT);
}
 
void loop()
{ 
 // RED
 digitalWrite(R, LOW);
 digitalWrite(G, HIGH);
 digitalWrite(B, HIGH);
 delay(1000);
 
 // GREEN
 digitalWrite(R, HIGH);
 digitalWrite(G, LOW);
 delay(1000);
 
 // BLUE
 digitalWrite(G, HIGH);
 digitalWrite(B, LOW);
 delay(1000);
 
 // RED + GREEN = YELLOW
 digitalWrite(B, HIGH);
 digitalWrite(R, LOW);
 digitalWrite(G, LOW);
 delay(1000);
 
 // RED + BLUE = MAGENTA
 digitalWrite(B, LOW);
 digitalWrite(R, LOW);
 digitalWrite(G, HIGH);
 delay(1000);
 
 // GREEN + BLUE = CYON
 digitalWrite(B, LOW);
 digitalWrite(R, HIGH);
 digitalWrite(G, LOW);
 delay(1000);
 
 // RED + GREEN + BLUE = WHITE
 digitalWrite(B, LOW);
 digitalWrite(R, LOW);
 digitalWrite(G, LOW);
 delay(1000);
 
 // ALL OFF
 digitalWrite(B, HIGH);
 digitalWrite(R, HIGH);
 digitalWrite(G, HIGH);
 delay(1000);
}
