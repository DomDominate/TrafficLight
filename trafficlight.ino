int green = D2;
int yellow = D3;
int red = D4;


void setup()
{
   pinMode(green, OUTPUT);
   pinMode(yellow, OUTPUT);
   pinMode(red, OUTPUT);

   Particle.function("traffic_light",light_control);
  
   digitalWrite(green, LOW);
   digitalWrite(yellow, LOW);
   digitalWrite(red, LOW);

}

int light_control(String command) 
{

    if (command=="green") {
        digitalWrite(green,HIGH);
        digitalWrite(yellow,LOW);
        digitalWrite(red,LOW);
        return 1;
    }
    else if (command=="red") {
        digitalWrite(red,HIGH);
        digitalWrite(green,LOW);
        digitalWrite(yellow,LOW);
         return 2;
    }
    else if (command=="yellow") {
        digitalWrite(yellow,HIGH);
        digitalWrite(green,LOW);
        digitalWrite(red,LOW);
         return 3;
    }
    else if (command=="off") {
        digitalWrite(green,LOW);
        digitalWrite(yellow,LOW);
        digitalWrite(red,LOW);
         return 4;
    }
    else {
        return -1;
    }
}

