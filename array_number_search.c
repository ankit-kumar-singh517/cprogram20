#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
   int data[10]={0,1,2,3,4,5,6,7,8,9};
    int value,position=-1;
   printf(" enter the value=>");
   scanf("%d",&value);
  
   
    for(i=0;i<10;i++)
    {
        if (data[i]==value)
        {
            position=i+1;
        }
    }
    if(position>-1)
    {
        printf(" value found at the position=>%d",position);
    }
        else
        {
            printf(" sorry ! value not found");
        }
        
    
    return 0;
}
