#include<stdio.h>

void swap(int,int);
int main()
{
  int d1,d2;
  printf("enter the number one=>");
  scanf("%d",&d1);
  printf("enter the number two=>");
  scanf("%d",&d2);
  printf("the number before swapping=> %d %d",d1,d2);
  swap (d1,d2);
 // printf("\nnumber after the swapping =>%d %d",a,b);

    return 0;

}
 void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
 printf("\n number after swaping= %d %d",a,b);
  
}