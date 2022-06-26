#include<stdio.h>
int swap(int x,int y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
    printf("After Swapping A=%d and B= %d",x,y);
}
int main()
{
    int a,b;
    printf("Enter First Number:  ");
    scanf("%d",&a);
    printf("Enter Second Number:  ");
    scanf("%d",&b);
    printf("\n Before Swapping A=%d and B=%d  \n",a,b);
    swap(a,b);
    return 0;
}