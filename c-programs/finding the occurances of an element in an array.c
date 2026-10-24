#include<stdio.h>
int main()
{
    int a[10],n,i,c = 0,b;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to find the frequency of\t");
    scanf("%d",&b);
    for (i = 0;i<n;i++)
    {
if (a[i]==b)
    {
        c++;
    }
    }
    printf("The number %d appears %d times in the array",b,c);
    return 0;
}