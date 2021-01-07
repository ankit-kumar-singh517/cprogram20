#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,n,sum=0;
    float avg;
    
    printf("enter the value of the number=>");
    scanf("%d",&n);
    printf("odd numbers are=>\n");
    for(i=1;i<=n;i++)
    {
        printf("%d\n",2*i-1);
        sum=sum+2*i-1;

    }
    printf("sum of numbers is odds numbers is=> %d \n",sum); 
    {
        avg=sum/n;
    }
    printf("avg of the given odd numbers is=>%f \n",avg);
    return 0;
}
