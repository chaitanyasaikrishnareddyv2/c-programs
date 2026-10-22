#include<stdio.h>
int main()
{
    int a[10],n,i,s=0;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        s += a[i];
    }
    printf("The sum of the elements is: %d",s);
    return 0;
}