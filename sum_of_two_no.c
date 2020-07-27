#include<stdio.h>
int main()
{ 
    int num1=10,num2=4,sum1,sum2;
    float num3=4.0,num4=2.0,sum3,sum4;
    sum1=num1+num2;
    printf("%d ",sum1);
    sum2=num1-num2;
    printf("%d\n",sum2);
    sum3=num3+num4;
    printf("%.1f ",sum3);
    sum4=num3-num4;
    printf("%.1f\n",sum4);
    return 0;
}
