//WAP to check whether a given number is three digit number
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if (x>=100 && x<=999)
    printf("number is 3-digit number");
    return 0;
}