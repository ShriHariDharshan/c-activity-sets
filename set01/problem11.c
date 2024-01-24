#include <stdio.h>

// Define a structure for a complex number
struct _complex {
    float real;
    float imaginary;
};

// Define a typedef for the complex number structure
typedef struct _complex Complex;

// Function declarations
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);

int main() {
    // Declare variables
    Complex num1, num2, result;

    // Get input from the user for two complex numbers
    num1 = input_complex();
    num2 = input_complex();

    // Calculate the sum of the complex numbers
    result = add_complex(num1, num2);

    // Display output
    output(num1, num2, result);

    return 0;
}

// Function to take input for a complex number
Complex input_complex() {
    Complex num;
    printf("Enter the real and imaginary parts separated by a space: ");
    scanf("%f %f", &num.real, &num.imaginary);
    return num;
}

// Function to add two complex numbers
Complex add_complex(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}

// Function to display output
void output(Complex a, Complex b, Complex sum) 
{
    printf("The sum of %.1f + %.1fi and %.1f + %.1fi is %.1f + %.1fi\n", a.real, a.imaginary, b.real, b.imaginary, sum.real, sum.imaginary);
}