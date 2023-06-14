#include <stdio.h>

int check(char ch)
{
    if(ch>='a' && ch<='z')
    return 2;
    
    else if(ch>='A' && ch<='Z')
    return 1;
    
    else if(ch>='1' && ch<='9')
    return 3;
    
    else if((ch>='!' && ch<='@') || (ch>='[' && ch<='~'))
    return 4;
    
    else
    return 5;
    
}

int main()
{
    char ch;
    scanf("%c",&ch);
    int n=check(ch);
    
    printf("%d",n);
}
