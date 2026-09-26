#include<stdio.h>
int main()
{
    int n,so,se,i;
    i=0;
    so=0;
    se=0;
    printf("enter the number\t");
    scanf("%d",&n);
    while (i<=n)
    {
        if (i%2==0)
        {
            se=se+i;
        }
        else if (i%2!=0)
        {
            so=so+i;
        }
        i++;
    }
    printf("the sum of odd numbers is %d\t",so);
    printf("the sum of even numbers is %d\t",se);
}