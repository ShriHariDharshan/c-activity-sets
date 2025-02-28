//07. Write a program to find the area of a triangle.
#include <stdio.h>
typedef struct _triangle 
{
    float base, altitude, area;
} Triangle;
Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
int main() 
{
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
    return 0;
}
Triangle input_triangle() 
{
    Triangle t;
    printf("Enter the base and altitude of the triangle: ");
    scanf("%f %f", &t.base, &t.altitude);
    return t;
}
void find_area(Triangle *t) 
{
    t->area = 0.5 * t->base * t->altitude;
}
void output(Triangle t) 
{
    printf("The area of triangle with base = %.6f and altitude = %.6f is %.6f\n", t.base, t.altitude, t.area);
}