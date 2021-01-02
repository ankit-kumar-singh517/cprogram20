#include<stdio.h>
#include<conio.h>
 float division(float,float);
 float multiply(float,float);
 float substraction(float,float);
 float main(float argc, char const *argv[])

 {
     float num1,num2,dividend,multi,sub;
   
     printf("enter the value of the num1=");
     scanf("%f",&num1);
     printf("enter the value of the num2=");
     scanf("%f",&num2);
     dividend= division(num1,num2);
     printf("\nthe value of dividend=%f",dividend);
     multi= multiply(num1,num2);
     printf("\nthe value of multiplier=%f",multi);
     sub=substraction(num1,num2);
     printf("\nvalue of substraction %f=",sub);
     
     return 0;
 }
  float division(float num1,float num2)
 
  {
   return(num1/num2);

  }
   float multiply(float x,float y)
   {
          return(x*y);
   }
 float substraction(float a,float b)
 {
     return(a-b);
 }