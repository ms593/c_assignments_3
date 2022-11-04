//write a program to print greater between two numbers.print one number if both are the same.
#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter the numbers:");
    scanf("%d %d",&x,&y);
    if(x>y)
    printf("%d is greater than %d",x,y);
    else if (x==y)
    printf("%d is repeated",x);
    else 
    printf("%d is greater than %d",y,x);
    return 0;
}