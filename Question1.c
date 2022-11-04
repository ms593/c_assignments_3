//WAP to check whether a given number is positive or not
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x>1 && x==1)
    {
    printf("number is positive.");
    }
    else if(x==0)
    {
    printf("number is neither positive nor negative.");
    }
    else
    {
    printf("number is negative.");
    }
    return 0;
}
