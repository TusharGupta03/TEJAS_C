#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter Lenght of Rectange\n");
    scanf("%d", &a);
    printf("\nEnter Breadth of Rectangle\n");
    scanf("%d", &b);
    printf("Perimeter of Rectange is : %d", 2 * (a + b));
    return 0;
}