#include<stdio.h>
int main()
{
    int a[10],n,i,so=0,se=0;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            se=se+a[i];
        }
        else
        {
            so=so+a[i];
        }
    }
    printf("Sum of even numbers: %d\n", se);
    printf("Sum of odd numbers: %d\n", so);
    return 0;
}