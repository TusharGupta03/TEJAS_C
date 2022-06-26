#include <stdio.h>
int main()
{
    int a, b, c, comp;
    printf("Comparing 3 Numbers \n");
    printf("\nEnter First Number: ");
    scanf("%d", &a);
    printf("\nEnter Second Number: ");
    scanf("%d", &b);
    printf("\nEnter Third Number: ");
    scanf("%d", &c);
    comp = (a > b && a > c) ? printf("%d is Greatest among all \n", a) : (b > a && b > c) ? printf("%d is gratest among all \n", b)
                                                                                          : printf("%d is greatest among all\n", c);
    return 0;
}