#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
    int x, y, z, *largest;
    x=input;
    y=input;
    z=input;
    compare(x,y,z,*largest);
    return 0;
}
int input(int *a, int *b, int *c)
{
    int n;
    printf("Enter the values\n");
    scanf("%d",&n);
    return n;
}
void compare(int a, int b, int c, int *largest)
{
    if (a >= b && a >= c) 
    {
        return a;
    } 
    else if (b >= a && b >= c) 
    {
        return b;
    } 
    else 
    {
        return c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest of %d, %d, and %d is %d\n", a, b, c, largest);
}