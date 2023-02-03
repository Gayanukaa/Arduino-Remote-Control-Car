#define IN1 8
#define IN2 9
#define IN3 10
#define IN4 11

void setup() {
  Serial.begin(9600);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  if (Serial. available ()>0) { 
    char ch = Serial.read();
    if (ch=='F') {  //FORWARD
      digitalWrite (IN1, HIGH); digitalWrite (IN4, HIGH); digitalWrite (IN2, LOW); digitalWrite (IN3, LOW);
    }
    else if (ch=='B'){  //BACKWORD
      digitalWrite (IN2, HIGH); digitalWrite (IN3, HIGH); digitalWrite (IN1, LOW); digitalWrite (IN4, LOW);
    }
    else if (ch=='R'){  //RIGHT
      digitalWrite (IN1, HIGH); digitalWrite (IN3, LOW); digitalWrite (IN2, LOW); digitalWrite (IN4, LOW);
    }
    else if (ch=='L'){  //LEFT
      digitalWrite (IN4, HIGH); digitalWrite (IN3, LOW); digitalWrite (IN1, LOW); digitalWrite (IN2, LOW);
    }
    else if (ch=='S'){  //STOP
      digitalWrite (IN4, LOW); digitalWrite (IN3, LOW); digitalWrite (IN1, LOW); digitalWrite (IN2, LOW);
    }
    else {
      Serial.print (ch) ; Serial.println(" is not Valid!");
    }
  }
}
