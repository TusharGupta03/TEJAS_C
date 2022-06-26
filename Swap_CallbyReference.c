#include<stdio.h>
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a,b;
    printf("Enter First Number: ");
    scanf("%d",&a);
    printf("Enter Second Number: ");
    scanf("%d",&b);
    printf("Before Swapping... \n A= %d and B= %d",a,b);
    swap(&a,&b);
    printf("\n After Swapping... \n A=%d and B=%d",a,b);
    return 0;
}