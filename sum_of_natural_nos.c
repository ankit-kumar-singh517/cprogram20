#include<stdio.h>
#include<conio.h>
 int main(int argc, char const *argv[])
 {
     int i,j,n,sum=0; /* code */
     printf("enter the value of n\n");
     scanf("%d",&n);
     for(i=0;i<=n;i++)
     {
         sum=sum+i;
         }
       
     printf(" the sum of  natural no. %d is %d ",n,sum);
     

     return 0;
 }
 