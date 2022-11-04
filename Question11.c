#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5,total,percent;
    printf("Enter the marks of 5 subjects :\n");
    scanf("%f %f %f %f %f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf("total=%.2f\n",total);
    
    percent=(total/500)*100;
    if (percent>=33)
    printf("stuendent get %.2f percent and passed",percent);
    else
    printf("student is failed");
    
    return 0;
}