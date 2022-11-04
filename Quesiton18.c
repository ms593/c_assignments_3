# include<stdio.h>
int main()
{
    int month;
    printf("Enter the month: ");
    scanf("%d",&month);
    if((month==1) || (month==3) || (month==5) || (month ==7) || (month==8) || (month==10) || (month==12))
    printf("Given month have 31 days");
    else if(month==2)
    printf("Given month have 29 or 28 days");
    else
    printf("Given months have 30 days");
    return 0;

}