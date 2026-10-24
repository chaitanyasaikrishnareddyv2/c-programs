#include<stdio.h>
int main()
{
    int a[10],n,i,b,c=0;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    printf("Enter the number you want to check divisibility by\t");
    scanf("%d",&b);
    printf("Enter the elements of the array\n");
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements divisible by %d are:\n",b);
    for(i = 0;i<n;i++)
    {
        if(a[i]%b==0)
        {
            printf("%d\n",a[i]);
            c++;
        }
    }
    if(c==0)
        {
            printf("No elements divisible by %d\n",b);
        }
    return 0;
}