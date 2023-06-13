#include <stdio.h>

void find_big(int num1, int num2)
{
    num1>num2?printf("Number 1 is greater"):printf("Number 2 is greater");
}

int main()
{
    int num1,num2;
    printf("Enter the number 1 and number 2\n");
    scanf("%d %d",&num1,&num2);
    find_big(num1,num2);
}
