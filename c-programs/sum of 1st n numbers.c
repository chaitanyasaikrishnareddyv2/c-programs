#include<stdio.h>
int main()
{
    int n,i,s;
    i=1;
    s=0;
    printf("Enter the number\t");
    scanf("%d",&n);
    while(i<=n)
    {
s=s+i;
i++;
 }
 printf("Sum of numbers is %d",s);
}