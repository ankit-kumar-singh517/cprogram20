#include<stdio.h>
#include<conio.h>
 int main(int argc, char const *argv[])
 {  int n;
     char ch;
     printf("enter the date you find the day=");
     scanf("%d",&n);
     if(n%7)
     {
         n=n%7;
     }

        switch (n)
     {
         case 1:
          printf("this is sunday");
          break;
          case 2:
          printf("this is monday");
          break;
           case 3:
          printf("this is tuesday");
          break;
           case 4:
          printf("this is wednesday");
          break;
           case 5:
          printf("this is thursday");
          break;
           case 6:
          printf("this is friday");
          break;
           case 7:
          printf("this is saturday");
          break;
          default:
          printf("this is saturaday");


     }
     return 0;
 }
 