#include<stdio.h>
struct _complex 
{
	float real;
	float imaginary;
};
typedef struct _complex Complex;
Complex input_complex();
Complex add_complex(Complex a, Complex b);
void output(Complex a, Complex b, Complex sum);
int main() 
{
    Complex num1, num2, result;
    printf("Enter the real and imaginary parts of the first complex number: ");
    num1 = input_complex();
    printf("Enter the real and imaginary parts of the second complex number: ");
    num2 = input_complex();
    result = add_complex(num1, num2);
    output(num1, num2, result);   
    return 0;
}