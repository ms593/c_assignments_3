#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter three numbers:");
    scanf("%d %d %d",&x,&y,&z);
    if( x>y && x>z)
    printf("%d is the greatest",x);
    else if (y>x && y>z)
    printf("%d is the greatest",y);
    else if (x==y || y==z || x==z)
    {
     printf("greatest number is repeated");
    }
    else
    printf("%d is the greatest",z);
    return 0;
}