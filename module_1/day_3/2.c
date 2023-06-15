#include <stdio.h>

void print_bits(int num) {
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int number;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &number);

    printf("Binary representation:\n");
    print_bits(number);

    return 0;
}
