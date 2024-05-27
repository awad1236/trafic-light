#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define en1 9
#define en2 1
#define open2 A0
#define open1 10

int time = 30;
bool flag = true;

void setup() {
  for(int i = 0; i <= 13; i++) {
    pinMode(i, OUTPUT);
  }
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  pinMode(open1, INPUT);
}

void loop() {
  if(digitalRead(open1) == HIGH && analogRead(open2) == 0) {
    road1();
    flag = false;
    return;
  }
  else if(analogRead(open2) > 512 && digitalRead(open1) == LOW) {
    road2();
    flag = false;
    return;
  }
  else {
    if(!flag) {
      flag = true;
      switchStatus(11);
      switchStatus(12);
    }

    for(int i = time; i >= 0; i--) {
      if(((digitalRead(open1) && analogRead(open2) == 0) && digitalRead(12) == HIGH) ||
         (digitalRead(open1) == LOW && analogRead(open2) > 512 && digitalRead(12) == LOW)) {
        return;
      }

      display(i);
      if(i < 6 && i > 0) {
        digitalWrite(13, HIGH);
      } else {
        digitalWrite(13, LOW);
      }
      if(i == 0) {
        switchStatus(11);
        switchStatus(12);
      }
    }
  }
}

void road1() {
  digitalWrite(11, HIGH);
  digitalWrite(12, LOW);
  for(int i = time; i >= 0; i--) {
    if(analogRead(open2) > 512 && digitalRead(open1) == LOW) {
      return;
    }

    display(i);
    
    if(i < 7 && i > 0) {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
  }
}

void road2() {
  digitalWrite(11, LOW);
  digitalWrite(12, HIGH);
  for(int i = time; i >= 0; i--) {
    if(digitalRead(open1) && analogRead(open2) == 0) {
      return;
    }

    display(i);
   
    if(i < 7 && i > 0) {
      digitalWrite(13, HIGH);
    } else {
      digitalWrite(13, LOW);
    }
  }
  flag = false;
}

void switchStatus(int x) {
  digitalWrite(x, !digitalRead(x));
}

void display(int x) {
  
  
  const int numPatterns[10][7] = {
    {1, 1, 1, 1, 1, 1, 0}, // 0
    {0, 1, 1, 0, 0, 0, 0}, // 1
    {1, 1, 0, 1, 1, 0, 1}, // 2
    {1, 1, 1, 1, 0, 0, 1}, // 3
    {0, 1, 1, 0, 0, 1, 1}, // 4
    {1, 0, 1, 1, 0, 1, 1}, // 5
    {1, 0, 1, 1, 1, 1, 1}, // 6
    {1, 1, 1, 0, 0, 0, 0}, // 7
    {1, 1, 1, 1, 1, 1, 1}, // 8
    {1, 1, 1, 1, 0, 1, 1}  // 9
  };

  for(int i = 0; i < 500; i++) {
    for(int digit = 0; digit < 2; digit++) {
      int currentDigit = (digit == 0) ? x / 10 : x % 10;
      digitalWrite(en1, digit == 0);
      digitalWrite(en2, digit == 1);
      
      for(int j = 0; j < 7; j++) {
        digitalWrite(2 + j, numPatterns[currentDigit][j]);
      }
      delay(1);
    }
  }
}
