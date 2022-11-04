#include<stdio.h>
int main()
{
    int sp,cp,profit,loss,pro_percent,loss_percent;
    printf("Enter the sp and cp: ");
    scanf("%d %d",&sp,&cp);
    if(sp>cp)
    {    
        pro_percent=((sp-cp)/cp *100);
        printf("the profit percent is %d",pro_percent);
    }
    else
    {
        loss_percent=((cp-sp)/cp *100);
        printf("the loss percent is %d ",loss_percent);
    }
    return 0;
}