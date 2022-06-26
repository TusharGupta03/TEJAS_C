#include <stdio.h>
int printHW(int count)
{
    if (count == 0)
    {
        return 0;
    }
    printf("Hello World\n");
    printHW(count - 1);
}
int main()
{
    int n;
    printf("Enter Number of Times to print HW:  ");
    scanf("%d", &n);
    printHW(n);
}