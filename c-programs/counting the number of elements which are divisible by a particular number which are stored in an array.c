#include<stdio.h>
int main()
{
    int a[10],n,i,c=0,s;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    printf("enter the number that you want to check the divisibility\t ");
    scanf("%d",&s);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%s==0)
        {
            c++;
        }
    }
    printf("The number of elements divisible by %d is: %d",s,c);
    return 0;
}