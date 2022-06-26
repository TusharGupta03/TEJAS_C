#include <stdio.h>
int main()
{
    int a[100], n, i, check, b;
    printf("Enter Number of Elements in a Array: ");
    scanf("%d", &n);
    printf("\n Enter Elements in Array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter Number to Search for: ");
    scanf("%d", &check);
    for (i = 0; i < n; i++)
    {
        if (a[i] == check)
        {
            b = i;
            break;
        }
    }
    printf(" \n %d is Found at %d position in Array ", check, i + 1);
    return 0;
}