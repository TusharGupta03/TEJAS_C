#include <stdio.h>
int main()
{
    int a[100], i, j, n, low, high, mid, temp, b;
    printf("Enter Size of Array: \n");
    scanf("%d", &n);
    printf("Enter Elemets in Array \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    for (i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }
    }
    printf("Enter Value to Search: \n");
    scanf("%d", &b);
    if (a[mid] == b)
    {
        printf("%d is found at %d", b, mid);
    }
    else
    {
        while (low <= high)
        {
            if (b < a[mid])
            {
                high = mid - 1;
                mid = (low + high) / 2;
                if (a[mid] == b)
                {
                    printf("%d is found at %d \n", b, mid);
                }
            }
            else
            {
                low = mid + 1;
                mid = (low + high) / 2;
                if (a[mid] == b)
                {
                    printf("%d is found at %d \n", , mid);
                }
            }
        }
    }
    return 0;
}