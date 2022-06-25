#include <stdio.h>
int main()
{
    int a, b, choice;
    printf("Enter First Number\n");
    scanf("%d", &a);
    printf("Enter Second Number\n");
    scanf("%d", &b);
    printf("Enter 1 for Addition\nEnter 2 for Substraction\nEnter 3 for Multiplication\nEnter 4 for Division\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Addition: %d", a + b);
        break;
    case 2:
        printf("Substraction: %d", a - b);
        break;
    case 3:
        printf("Multiplication: %d", a * b);
        break;
    case 4:
        printf("Quotient: %d", a / b);
        break;
    default:
        printf("Invalid Input!!");
        break;
    }
    return 0;
}