#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    if(num%3==0 && num%2==0)
    printf("%d id divisible by 3 and 2",num);
    else
    printf("%d is not divisible by 3 and 2",num);
    return 0;
}