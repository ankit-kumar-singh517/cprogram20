#include<stdio.h>
#include<conio.h>
int main()
{
int i=0;
int j=0;
int y=0;
char ch ='*';
for ( i = 0; i<= 10; i++)
{
 for(y=i; y<=10;y++)   /* code */
 printf(" ");
 for(j=1;j<=10-i;j++)
 {
     printf("%c",ch);
 }
 printf("\n");
}

    return 0;
}