#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student
{
    int rollno;
    char name[20];
    float marks;
} student;

void datainit(student*, int);
int increasesize(student*, int, int);
void displaydata(student*, int);
void sort(student*, int);
void swap(student*, int, int);
void search(student*, int);
int old = 0;

int main()
{
    student* stu;
    int size;
    printf("Enter number of entries: \n");
    scanf("%d", &size);
    stu = (student*)malloc(sizeof(student) * size);

    jump:
    printf("Enter 1 if you want to add data\n");
    printf("Enter 2 if you want to enter more entries\n");
    printf("Enter 3 if you want to print entries\n");
    printf("Enter 4 if you want to sort based on marks\n");
    printf("Enter 5 if you want to search by name\n");
    printf("Enter 6 if you want to exit\n");
    int choice, oldsize;
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            datainit(stu, size); // Call the data initialization function
            goto jump;

        case 2:
            oldsize = size;
            size = increasesize(stu, size, oldsize); // Call the function to increase the size of the array
            goto jump;

        case 3:
            displaydata(stu, size); // Call the function to display data
            goto jump;

        case 4:
            sort(stu, size); // Call the function to sort data based on marks
            goto jump;

        case 5:
            search(stu, size); // Call the function to search by name
            goto jump;

        case 6:
            exit(0); // Exit the program
            break;
    }
}

void datainit(student* ptr, int size)
{
    printf("Enter roll number, marks, name\n");
    for (int i = old; i < size; i++)
    {
        scanf("%d", &ptr[i].rollno); // Input roll number
        scanf("%f", &ptr[i].marks); // Input marks
        gets(ptr[i].name); // Input name (including spaces)
    }
    old = size; // Update the old size to mark the initialized data
}

int increasesize(student* ptr, int size, int oldsize)
{
    student* stu;
    printf("Enter how many more records to enter: \n");
    scanf("%d", &size);
    stu = realloc(ptr, (oldsize + size) * sizeof(student)); // Reallocate memory to increase the size of the array
    
    if (stu == NULL)
    {
        printf("Memory not available\n");
    }
    else
    {
        printf("Memory successfully allocated\n");
        ptr = stu;
        stu = NULL;
    }

    return oldsize + size; // Return the updated size of the array
}

void displaydata(student* ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d %s %.2f\n", ptr[i].rollno, ptr[i].name, ptr[i].marks); // Print roll number, name, and marks
    }
}

void swap(student* ptr, int a, int b)
{
    int temp_rollno;
    char temp_name[20];
    float temp_marks;

    temp_rollno = ptr[a].rollno; // Swap roll numbers
    ptr[a].rollno = ptr[b].rollno;
    ptr[b].rollno = temp_rollno;

    strcpy(temp_name, ptr[a].name); // Swap names
    strcpy(ptr[a].name, ptr[b].name);
    strcpy(ptr[b].name, temp_name);

    temp_marks = ptr[a].marks; // Swap marks
    ptr[a].marks = ptr[b].marks;
    ptr[b].marks = temp_marks;
}

void sort(student* ptr, int size)
{
    student* stu;
    stu = (student*)malloc(sizeof(student));
    stu = ptr;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (stu[j].marks > stu[j + 1].marks)
            {
                swap(stu, j, j + 1); // Call the swap function to swap data if marks are in the wrong order
            }
        }
    }

    displaydata(stu, size); // Display the sorted data
}

void search(student* ptr, int size)
{
    char find[20];
    printf("Enter the full name you want to search\n");
    gets(find); // Input the name to search

    for (int i = 0; i < size; i++)
    {
        if (strcmp(find, ptr[i].name) == 0) // Compare the input name with the names in the array
        {
            printf("%d %s %f", ptr[i].rollno, ptr[i].name, ptr[i].marks); // Print the matching record
        }
    }
}

