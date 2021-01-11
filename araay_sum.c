#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{

    int num[10];
    int i,j,sum=0;
    printf("enter he value of number that too be sum=>\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+num[i];
    }
    printf(" sum=>%d",sum);
    return 0;
}
