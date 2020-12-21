#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int n,i;
    printf("enter the number for table =");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        printf("\n %d * %d = %d",n,i,n*i);
    }
    return 0;
}
