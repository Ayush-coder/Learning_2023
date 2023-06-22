#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function to read a complex number
void readComplex(Complex *c) {
    printf("Enter the real part: ");
    scanf("%f", &(c->real));
    printf("Enter the imaginary part: ");
    scanf("%f", &(c->imag));
}

// Function to write a complex number
void writeComplex(Complex c) {
    printf("Complex number: %.2f + %.2fi\n", c.real, c.imag);
}

// Function to add two complex numbers
Complex addComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to multiply two complex numbers
Complex multiplyComplex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

int main() {
    Complex num1, num2, sum, product;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("Enter the second complex number:\n");
    readComplex(&num2);

    printf("\n");

    writeComplex(num1);
    writeComplex(num2);

    sum = addComplex(num1, num2);
    printf("Sum of the two complex numbers: ");
    writeComplex(sum);

    product = multiplyComplex(num1, num2);
    printf("Product of the two complex numbers: ");
    writeComplex(product);

    return 0;
}
