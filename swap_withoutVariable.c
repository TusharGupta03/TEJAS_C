#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter First Number : \n");
    scanf("%d", &a);
    printf("Enter Second Number :");
    scanf("%d", &b);
    printf("Before Swapping A=%d and B=%d \n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swapping A=%d and B=%d", a, b);
    return 0;
}