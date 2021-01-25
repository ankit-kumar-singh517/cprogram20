#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i;
int num1[10]={1,2,3,4,5,6,7,8,9,0};
int num2[10]={0,9,8,7,6,5,4,3,2,1};

    for(i=0;i<10;i++)
    {
        printf("  %d",num1[i]);
      
    }
    printf(" ");
    for(i=0;i<10;i++)
    {
       printf("  %d",num2[i]);
    }

    return 0;
}
