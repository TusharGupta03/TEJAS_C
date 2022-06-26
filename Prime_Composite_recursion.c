#include <stdio.h>
int check(int a)
{
    int i;
    if (i == 1)
    {
        return 1;
    }
    else
    {
        if (a % i == 0)
        {
            return 0;
        }
        else
        {
            i = i - 1;
            check(a);
        }
    }
}
int main()
{
    int a, b;
    printf("Enter Number to check for Prime or Composite:  ");
    scanf("%d", &a);
    b = check(a);
    if (b == 1)
    {
        printf("\nPrime Number!!\n");
    }
    else
    {
        printf("Composite Number!!\n");
    }
    return 0;
}