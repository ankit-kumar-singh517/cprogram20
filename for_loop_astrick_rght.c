#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,rows,j,a=1;
    printf("enter the number of rows =>");
    scanf("%d",&rows);
    printf("right triangle is =>\n");
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        
    { 
        printf(" %d",a++);
    }
        printf(" \n");
    }
        return 0;

}
