#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{
    int i,j,value;
    int data[10];
    int position=-1;
    printf("enter the list of element=>");
    for(i=0;i<=9;i++)
    {
       
        scanf("%d",&data[i]);
    }
    printf("enter the element in the array =>");
    scanf("%d",&value);
    printf("enter the position that digit to be filled =>");
    scanf("%d",&position);
    printf(" \npresent values of the array =>%d");
   
    {
       data[position-1]=value;
       
    }
    for(i=0;i<=9;i++)
    {
        printf(" %d",data[i]);
    }
    
    return 0;
}
