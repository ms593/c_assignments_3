#include<stdio.h>
int main()
{
    int a,b,c,d;         //Quardratic eqn:ax^2+bz^2+c=0
    printf("Enter the values of a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    d=b*b-(2*a*c);
          //Discriminant=b^2-2*a*c.

    if (d>0)
    printf("roots are real an unequal");
    else if (d==0)
    printf("roots are equal");
    else
    printf("roots are imaginary");
    return 0;
        

}