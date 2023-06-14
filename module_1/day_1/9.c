#include <stdio.h>

int bit_operations(int num, int oper_type, int pos) {
    int result = num;  // Initialize result with the input number

    if (oper_type == 1) {  // Set 2 bits from nth bit position
        result |= (0x3 << pos);
    } else if (oper_type == 2) {  // Clear 3 bits from nth bit position
        result &= ~(0x7 << pos);
    } else if (oper_type == 3) {  // Toggle MSB
        result ^= (1 << 31);
    } else {
        printf("Invalid operation type\n");
    }

    return result;
}

int main() {
    int num = 123;  // Example input number
    int oper_type = 1;  // Example operation type
    int pos = 5;  // Example bit position

    int result = bit_operations(num, oper_type, pos);
    printf("Result: %d\n", result);

    return 0;
}
