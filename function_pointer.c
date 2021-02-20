#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main(int argc, char const *argv[])
{   
    int (*psum)(int,int);
    int num1 , num2;
    psum=sum;
    printf("enter number 1=>");
    scanf("%d",&num1);
    printf("enter number 2=>");
    scanf("%d",&num2);
    printf("\nsum of two number using function =>%d",sum(num1,num2));
    printf("\nsum of the number using function pointer=>%d",psum(num1,num2));
    
    return 0;
}
int sum(int num1, int num2)
{
   return(num1+num2);
}
