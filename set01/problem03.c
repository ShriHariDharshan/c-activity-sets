// 3. Write a C program to add two numbers using **pass by value**
#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int num1, num2, result;
    num1=input();
    num2=input();
    result=add(num1,num2);
    output(num1,num2,result);
    return 0;
}
int input()
{
    int n;
    printf("Enter the values\n");
    scanf("%d",&n);
    return n;
}
int add(int a, int b)
{
    return a+b;
}
void output(int a, int b, int sum)
{
    printf("The sum of the two numbers of the two numbers of %d and %d is %d\n",a,b,sum);
}