#include<stdio.h>
#include<conio.h>
int main(int argc, char const *argv[])
{   char ch;
    printf("for finding the vowel and consonent=");
    scanf("%c",&ch);
    switch(ch)
    {  case 'a':
        printf("A is vowel");
        break;
       case 'e':
        printf("E is vowel");
        break;
        case 'i':
        printf("I is vowel");
        break;
       case 'o':
        printf("o is vowel");
        break;
        case 'u':
        printf("u is vowel");
        break;
        default:
        printf("this albhabet is consonent");
    }
    return 0;
}
