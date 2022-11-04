#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x>=1)
    {
    printf("%d is positive.",x);
    }
    else if(x==0)
    {
    printf("0 is neither positive nor negative.",x);
    }
    else
    {
    printf("%d is negative.",x);
    }
    return 0;
}
