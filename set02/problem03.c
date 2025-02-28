//03.  Write a program find whether a number is a composite number
#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main() 
{
    int number, result;
    printf("Enter a number: ");
    number = input_number();
    result = is_composite(number);
    output(number, result);
    return 0;
}
int input_number() 
{
    int number;
    scanf("%d", &number);
    return number;
}

int is_composite(int n) 
{
    int factors = 0;
    for (int i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            factors++;
        }
    }
    return factors > 2;
}
void output(int n, int result) 
{
    if (result)
        printf("%d is a composite number.\n", n);
    else
        printf("%d is not a composite number.\n", n);
}