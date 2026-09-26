#include<stdio.h>
int main()
{
int n,i,t;
i=0;
    printf("enter the value of n\t");
    scanf("%d",&n);
    t=n;
    printf("The numbers are\n");
    while(i<t)
    {
        n=t-i;
        printf("%d\t",n);
        i++;
    }
}