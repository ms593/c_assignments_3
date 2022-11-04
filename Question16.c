#include<stdio.h>
int main()
{
    
    char alpha;
    printf("enter the character: ");
    scanf("%c",&alpha);
    if ((alpha >=97) && (alpha <= 122))
    printf("you entered a alphabet  which is small");
    else if ((alpha >= 65) && (alpha <= 90))
    printf("you entered a alphabet which is capital");
    else if((alpha >=48) && (alpha<=57))
    printf("you enter a  digit");
    else
    printf("you print a special character");


    
    return 0;

}