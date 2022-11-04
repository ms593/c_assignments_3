#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num%7==0 || num%3==0)
    printf("%d is divisble by 3 or 7",num);
    else
    printf("%d is not divisible 3 or 7",num);
    return 0;
}