#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b))
    printf("you entered a valid triangle");
    else
    printf("you entered a invalid triangle");
    return 0;
}