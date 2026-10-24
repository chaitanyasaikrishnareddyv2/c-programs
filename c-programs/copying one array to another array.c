#include<stdio.h>
int main()
{
    int a[10],b[10],n,i;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i = 0;i<n;i++)
    {
        b[i] = a[i];
    }
    return 0;
}