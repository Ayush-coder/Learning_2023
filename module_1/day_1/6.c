#include <stdio.h>

void greatest(int num1,int num2, int num3)
{
    if(num1>num2 && num1>num3)
    {
        printf("Number 1 is greatest");
    }
    
    else if(num2>num1 && num2>num3)
    {
        printf("Number 2 is greatest");
    }
    
    else if(num3>num1 && num3>num2)
    {
        printf("Number 3 is greatest");
    }
    
    else
    {
        printf("All nmumbers are same");   
    }
}

int main()
{
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    greatest(num1,num2,num3);
}
