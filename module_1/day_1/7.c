#include <stdio.h>

char grade(int marks)
{
    if(marks<=100 && marks >=90)
    {
        return 'A';
    }
    
    else if(marks<=89 && marks >=75)
    {
        return 'B';
    }
    
    else if(marks<=74 && marks >=60)
    {
        return 'C';
    }
    
    else if(marks<=59 && marks >=50)
    {
        return 'D';
    }
    
    else if(marks<=49 && marks >=36)
    {
        return 'E';
    }
    
    else
    {
        return 'F';
    }
}

int main()
{
    int marks;
    printf("Enter the mark ");
    scanf("%d",&marks);
    char ch=grade(marks);
    switch(ch)
    {
        case 'A':
            printf("65");
            break;
            
        case 'B':
            printf("66");
            break;
            
        case 'C':
            printf("67");
            break;
            
        case 'D':
            printf("68");
            break;
            
        case 'E':
            printf("69");
            break;
            
        case 'F':
            printf("70");
            break;
    }
}
