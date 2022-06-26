#include <stdio.h>
int main()
{
    float r;
    float pi = 3.14;
    printf("Enter Radius of Circle:  ");
    scanf("%f", &r);
    printf("Perimeter of Circle: %f ", 2 * pi * r);
    printf("Area of Circle: %f", pi * r * r);
    return 0;
}