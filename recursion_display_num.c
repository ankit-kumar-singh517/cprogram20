#include<stdio.h>
#include<conio.h>
int displaynum(int);
int main(int argc, char const *argv[])
{
  int n;
  printf("enter the value of n=>");
  scanf("%d",&n);
  int r=displaynum(n);

  return 0;
}
int displaynum(int n)
{
    if(n<1)
    return 1;
    printf("\nvalue of n=>%d",n);
    displaynum(n-1);
}

