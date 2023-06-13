#include <stdio.h>

int main()
{
int num1, num2;
char ch;

printf("Enter Number 1: ");
scanf("%d", &num1);

printf("Enter which operator to use (+, -, *, /): ");
scanf(" %c", &ch);

printf("Enter Number 2: ");
scanf("%d", &num2);

if (ch == '+') {
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
} else if (ch == '-') {
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
} else if (ch == '*') {
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
} else if (ch == '/') {
    if (num2 != 0) {
        printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
} else {
    printf("Error: Invalid operator.\n");
}

return 0;
}