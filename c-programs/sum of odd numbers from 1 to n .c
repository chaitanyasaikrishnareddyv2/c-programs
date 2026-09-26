#include<stdio.h>
int main()
{
    int n,s,i;
    i=0;
    s=0;
    printf("enter the number\t");
    scanf("%d",&n);
    while (i<=n)
    {
        if (i%2!=0)
        {
            s=s+i;
        }
            i++;
    }
    printf("the sum of odd numbers is %d\t",s);
}