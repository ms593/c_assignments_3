#include<stdio.h>
int main()
/*
    char alpha;
    printf("enter the aphabets: ");
    scanf("%c",&alpha);
    if ((alpha >='a') && (alpha <= 'z'))
    printf("Alphabet is small");
    else if ((alpha >= 'A') && (alpha <='Z'))
    printf("Alphabet is capital");
    else
    printf("you enter a invalid character");
    return 0;
    */
   {
    char alpha;
    printf("enter the aphabets: ");
    scanf("%c",&alpha);
    if ((alpha >=97) && (alpha <= 122))
    printf("Alphabet is small");
    else if ((alpha >= 65) && (alpha <= 90))
    printf("Alphabet is capital");
    else
    printf("you enter a invalid character");
    return 0;
}
