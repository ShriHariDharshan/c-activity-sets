#include <stdio.h>
#include <math.h>
double calculate_sqrt(double num);
int main() 
{
    double number, result;
    printf("Enter a number: ");
    scanf("%lf", &number);
    result = calculate_sqrt(number);
    printf("Square root of %.2lf is %.4lf\n", number, result);
    return 0;
}
double calculate_sqrt(double num) 
{
    if (num < 0) 
    {
        printf("Cannot calculate square root of a negative number.\n");
        return 0.0;
    }
    double x = num;
    double y = 1.0;
    double epsilon = 0.00001;
    while (fabs(x - y) > epsilon) 
    {
        x = (x + y) / 2;
        y = num / x;
    }
    return x;
}