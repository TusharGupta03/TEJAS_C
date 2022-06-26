#include <stdio.h>
int main()
{
    int a, reverese, i, remainder, temp;
    reverese = 0;
    printf("Enter Number to check for:  ");
    scanf("%d", &a);
    temp = a;
    while (a != 0)
    {
        remainder = a % 10;
        reverese = reverese * 10 + remainder;
        a = a / 10;
    }
    printf("Reverese of %d is : %d \n", temp, reverese);
    if (temp == reverese)
    {
        printf("%d is a Pallindrome", temp);
    }
    else
    {
        printf("%d is not a Pallindrome", temp);
    }
    return 0;
}