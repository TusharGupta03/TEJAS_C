#include <stdio.h>
int main()
{
    int a[100], i, j, temp, n;
    printf("Enter Number of Terms in a Array\n");
    scanf("%d", &n);
    printf("Enter Terms in Array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Before Sorting, Array A: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nPerforming Sorting....\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("After Sorting, Array A: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}