#include<stdio.h>
int main()
{
    int m,n,c;
    c=0;
    printf("enter the value of m\t");
    scanf("%d",&m);
     printf("enter the value of n\t");
    scanf("%d",&n);
    m++;
    while (m<n)
    {
        if (m%2==0)
        {
            c=c+1;
        }
            m++;
    }
    printf("the count of even numbers is %d\t",c);
}