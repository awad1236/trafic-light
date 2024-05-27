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
void setup() {
  for(int i = 0; i <= 13; i++)
  {
    pinMode(i,OUTPUT);
  }
  digitalWrite(11,1);
  digitalWrite(12,0);
  
  pinMode(10,INPUT);
 

}
int time = 30;

bool flag=true;






void loop() {

  if(digitalRead(open1)==1 && !analogRead(open2))
  {
    road1();
    flag = false;
    return;
  }

  else if (analogRead(open2) > 512  && !digitalRead(open1))
  {
    road2();
    flag = false;
    return;
  }
  
  else{
    if(!flag)
    {
      flag = true;
      swith_status(11);
      swith_status(12);
    }
    
      
       
  for(int i = time; i >= 0; i--)
  {
    if (((digitalRead(open1) && !analogRead(open2))&&digitalRead(12)==1)|| ((!digitalRead(open1) && analogRead(open2) > 512 ) && digitalRead(12)==0))
  {
    return;
  }
  
    display(i);
    if(i<6 && i>0)
    {
      digitalWrite(13,1);
    }
    else
    {
      digitalWrite(13,0);
    }
    if(i==0)
    {
      swith_status(11);
      swith_status(12);
    }
  }
  
}
}

void road1 ()
{
    digitalWrite(11,1);
   digitalWrite(12,0);
    for(int i = time; i >= 0; i--)
  {
    if (analogRead(open2) > 512 && !digitalRead(open1))
  {
    return;
  }
  
    display(i);
    delay(3);
    if(i<7 && i>0)
    {
      digitalWrite(13,1);
    }
    else
    {
      digitalWrite(13,0);
    }
  }
  
}
void road2 ()
{
    digitalWrite(11,0);
   digitalWrite(12,1);
    for(int i = time; i >= 0; i--)
  {
      if (digitalRead(open1) && !analogRead(open2))
  {
    
    return;
  }
  
    display(i);

    if(i<7 && i>0)
    {
      digitalWrite(13,1);
    }
    else
    {
      digitalWrite(13,0);
    }
  }
  flag = false;
  
}
void swith_status(int x)
{
  if(digitalRead(x)==1)
  {
    digitalWrite(x,0);
  }
  else
  {
    digitalWrite(x,1);
  }
}




 void display(int x)
 {
  if(x==0)
  {
 for(int i = 0; i < 500; i++) {
   digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);}
  }
  if(x==1)
  {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
    if(x==2)
    {
 for(int i = 0; i < 500; i++) 
 {
   digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);}
  }
 
    if(x==3)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==4)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==5)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
   digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1); 
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==6)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
   
  if(x==7)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
  if(x==8)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==9)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==10)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
  if(x==11)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==12)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
  if(x==13)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
    if(x==14)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
      if(x==15)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
   digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
        if(x==16)
    {
 for(int i = 0; i < 500; i++) {
     digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
    if(x==17)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
      if(x==18)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==19)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    }
  }
   if(x==20)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
     if(x==21)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(en2,1);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
       if(x==22)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
         if(x==23)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
      if(x==24)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,0);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
        if(x==25)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
   digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
      if(x==26)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,0);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
    if(x==27)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,0);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
     if(x==28)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
    if(x==29)
    {
 for(int i = 0; i < 500; i++) {
    digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,1);
    digitalWrite(g,1);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,0);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
   if(x==30)
    {
 for(int i = 0; i < 500; i++) {
      digitalWrite(en1,0);
    digitalWrite(en2,1);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,1);
    digitalWrite(f,1);
    digitalWrite(g,0);
    delay(1);
    digitalWrite(en1,1);
    digitalWrite(en2,0);
    digitalWrite(a,1);
    digitalWrite(b,1);
    digitalWrite(c,1);
    digitalWrite(d,1);
    digitalWrite(e,0);
    digitalWrite(f,0);
    digitalWrite(g,1);
    delay(1);
    }
  }
 }
