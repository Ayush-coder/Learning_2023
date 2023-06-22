#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

// Function to swap the fields of two structures using pointers
void swapFields(struct Student *s1, struct Student *s2) {
    struct Student temp;

    // Swap the name field
    strcpy(temp.name, s1->name);
    strcpy(s1->name, s2->name);
    strcpy(s2->name, temp.name);

    // Swap the age field
    temp.age = s1->age;
    s1->age = s2->age;
    s2->age = temp.age;
}

int main() {
    struct Student student1, student2;

    // Read data for student 1
    printf("Enter details for student 1:\n");
    printf("Enter name: ");
    scanf("%s", student1.name);
    printf("Enter age: ");
    scanf("%d", &(student1.age));

    // Read data for student 2
    printf("\nEnter details for student 2:\n");
    printf("Enter name: ");
    scanf("%s", student2.name);
    printf("Enter age: ");
    scanf("%d", &(student2.age));

    printf("\nBefore swapping:\n");
    printf("Student 1 - Name: %s, Age: %d\n", student1.name, student1.age);
    printf("Student 2 - Name: %s, Age: %d\n", student2.name, student2.age);

    // Swap the fields of student 1 and student 2 using pointers
    swapFields(&student1, &student2);

    printf("\nAfter swapping:\n");
    printf("Student 1 - Name: %s, Age: %d\n", student1.name, student1.age);
    printf("Student 2 - Name: %s, Age: %d\n", student2.name, student2.age);

    return 0;
}
