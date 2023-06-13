#include <stdio.h>

struct Student
{
    int roll_no;
    char name[100];
    int marks[3];
};

float percentage(struct Student *s)
{
    int sum=s->marks[0]+s->marks[1]+s->marks[2];
    float avg=sum/3;
    return avg;
}

int main()
{
    struct Student s;
    printf("Enter roll number:\n");
    scanf("%d", &s.roll_no);
    printf("Enter Name:\n");
    scanf(" %[^\n]s", s.name);
    printf("Enter marks in physics, chemistry, and maths:\n");
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &s.marks[i]);
    }
    
    float avg=percentage(&s);
    
    
    printf("Roll number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Percentage: %.2f% \n",avg);
    
    return 0;
}
