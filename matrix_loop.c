#include<stdio.h>
int main(int argc, char const *argv[])
{
    /* code*/
    int A[2][2];
    int B[2][2];
    int sub[2][2];
    printf("enter the mtrix A(2*2)=>\n");
    for(int i=0;i<2;i++)
    {
        for( int j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
     printf("matrix A(2*2)=>\n");
      for(int i=0;i<2;i++)
    {
        for( int j=0;j<2;j++)
        {
        printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     printf("enter the mtrix B(2*2)=>\n");
    for(int i=0;i<2;i++)
    {
        for( int j=0;j<2;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
     printf("matrix B(2*2)=>\n");
      for(int i=0;i<2;i++)
    {
        for( int j=0;j<2;j++)
        {
        printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    //matrix substraction
    printf("sub of the matrix A and B is :\n");
    for( int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            sub[i][j]= A[i][j]-B[i][j];      
        }
    }
    for( int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
           printf("%d ",sub[i][j]);
        }
        printf("\n");
    }
    return 0;
    }