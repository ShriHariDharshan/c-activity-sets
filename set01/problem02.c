//2. Write a C program to add two numbers.
#include<stdio.h>
int main()
{
    int a,b,sum=0;
    printf("Enter the values\n");
    scanf("%d",&a);
    printf("Enter the values\n");
    scanf("%d",&b);
    sum=a+b;
    printf("The sum of %d and %d is %d\n",a,b,sum);
    return 0;
}