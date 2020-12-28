#include<stdio.h>
#include<conio.h>
 int main(int argc, char const *argv[])
 {
     int x,y;
     printf("enter the number1=");
     scanf("%d",&x);
     printf("enter the number 2=");
     scanf("%d",&y);
     if(x>y)
     {
         printf("x=%d is greater than y=%d:",x,y);
     }
     else if(x==y)
     {
         printf("x=%d and y=%d is equal:",x,y);

     }
     else
     {
         printf("y=%d is greater than x=%d:",y,x);
     }
     
     return 0;
 }
 