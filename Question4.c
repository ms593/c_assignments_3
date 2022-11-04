//Now using bitwise operator we find whether the given number is odd or evan.
#include<stdio.h>
int main()
{
    int x;
    printf("Enter the given number:");
    scanf("%d",&x);
    if(x&1)
    printf("the given number is odd");
    else
    printf("the given number is even");
    return 0;
}