#include<stdio.h>
#include<conio.h>
 int main(int argc, char const *argv[])
 {
     int x,y,z;
     printf("enter the value of 1st no.=");
     scanf("%d",&x);
     printf("enter the value of 2nd no.=");
     scanf("%d",&y);
     printf("enter the value of 3rd no.=");
     scanf("%d",&z);
     if(x>y && x>z)
     {
         printf("x=%d greater than y=%d and z=%d",x,y,z);

     }
     else if(y>x && y>z)
     {
         printf("y=%d is greater than x=%d and z=%d",y,x,z);

     }
     else
     {
         printf("z=%d is greater than x=%d and y=%d",z,x,y);
     }

     return 0;
 }
 