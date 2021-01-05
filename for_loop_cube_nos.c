#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,n;
    printf("enter the value of the n=>");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        printf("numbers is =%d\n",i);
        printf(" cube of=>%d is %d \n",i,i,i*i*i);
    }
    return 0;
}
