#include <stdio.h>

int check(char ch)
{
    switch(ch)
    {
        case 'a':
            return 1;
            
        case 'e':
            return 1;
            
        case 'i':
            return 1;
            
        case 'o':
            return 1;
            
        case 'u':
            return 1;
            
        case 'A':
            return 1;
            
        case 'E':
            return 1;
            
        case 'I':
            return 1;
            
        case 'O':
            return 1;
            
        case 'U':
            return 1;
            
        default:
            return 0;
    }
}

int main()
{
    char ch;
    scanf("%c",&ch);
    int n=check(ch);
    if(n==1)
    {
        printf("Vowel");
    }
    else if(n==0)
    {
        printf("Consonent");
    }
}
