#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the coefficient of x^2,xand constant\n");
    scanf("%d%d%d",&a,&b,&c);
    if(b^2-4*a*c>0)
    {
        printf("you awarded 20 points");
    }
    else if (b^2-4*a*c<0)
    {
        printf("you awarded 10 points");
    }
    else
    {
        printf("you awarded 0 points");
    }
}