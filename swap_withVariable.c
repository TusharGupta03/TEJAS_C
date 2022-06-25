#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter First Number: \n");
    scanf("%d",&a);
    printf("Enyter Second Number:\n");
    scanf("%d",&b);
    printf("Before Swapping A=%d and B=%d \n",a,b);
    printf("PERFORMING SWAPPING");
    temp=a;
    a=b;
    b=temp;
    printf("After Swapping A=%d and B=%d",a,b);
    return 0;
}