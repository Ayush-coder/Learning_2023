#include <stdio.h>

void grade(int marks)
{
    if(marks<=100 && marks >=90)
    {
        printf("Grade A");
    }
    
    else if(marks<=89 && marks >=75)
    {
        printf("Grade B");
    }
    
    else if(marks<=74 && marks >=60)
    {
        printf("Grade C");
    }
    
    else if(marks<=59 && marks >=50)
    {
        printf("Grade D");
    }
    
    else if(marks<=49 && marks >=0)
    {
        printf("Grade F");
    }
}

int main()
{
    int marks;
    printf("Enter the mark ");
    scanf("%d",&marks);
    grade(marks);
}
