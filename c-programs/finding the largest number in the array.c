#include<stdio.h>
int main()
{
    int a[10],n,i,l=0;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>l)
        {
            l = a[i];
        }
    }
    printf("The largest element in the array is: %d\n",l);
    return 0;
}