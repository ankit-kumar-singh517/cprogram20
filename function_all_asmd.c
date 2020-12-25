#include<stdio.h>
#include<conio.h>
  float substraction(float,float);
  float sum(float,float);
  float multiply(float,float);
  float division(float a,float b);
  float main(float argc, char const *argv[])
  {   
      float num1,num2,add,sub,multi,div;
      printf("enter the value of number1=");
      scanf("%f",&num1);
      printf("enter the value of number 2=");
      scanf("%f",&num2);
      sub=substraction(num1,num2);
      printf("\nvalue of substrataction=%f",sub);
      add=sum(num1,num2);
      printf("\nvalue of addition=%f",add);
      multi=multiply(num1,num2);
      printf("\nvalue of multiply=%f",multi);
      div=division(num1,num2);
      printf("\nvalue of division=%f",div);

      return 0;
  }
   float substraction(float num1,float num2)
   {
       return(num1-num2);
   }
   float sum(float num1,float num2)
   {
       return(num1+num2);
   }
   float multiply(float num1,float num2)
   {
       return(num1*num2);

   }
   float division(float num1,float num2)
   {
       return(num1/num2);
   }

  