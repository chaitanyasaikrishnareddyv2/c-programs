#include<stdio.h>
int main()
{
    int a[10],n,i,val,re;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the value you want to replace\t");
    scanf("%d",&val);
    printf("Enter the new value\t");
    scanf("%d",&re);
    for(i = 0;i<n;i++)
    {
        if(a[i]==val)
        {
            a[i] = re;
        }
    }
    printf("The array after replacement is:\n");
    for(i = 0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}