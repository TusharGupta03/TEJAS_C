#include <stdio.h>
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping : A=%d and B=%d", a, b);
}
int main()
{
    int a, b;
    printf("Enter First Number : \n");
    scanf("%d", &a);
    printf("Enter Second Number : \n");
    scanf("%d", &b);
    printf("Before Swapping : A=%d and B=%d \n", a, b);
    swap(a, b);

    return 0;
}