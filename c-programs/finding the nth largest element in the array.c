#include<stdio.h>
int main()
{
    int a[10],n,i,l1,l2,in,j,k,b,c;
    printf("Enter the number of elements you want to store\n");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++) 
    {
        for (j = i + 1; j < n; j++) 
        {
            if (a[i] == a[j])
             {
                for (k = j; k < n - 1; k++)
                 {
                    a[k] = a[k + 1];
                }
                
                n--;
                j--;
            }
        }
    }
    printf("after removing duplicates, the unique elements in the array are %d\n",n);
    printf("Enter the number of largest element you want to find\n");
    scanf("%d",&b);
    if(b>n||b<1)
    {
        printf("Invalid value.there are only %d unique elements in the array\n",n);
        return 0;
    }
    for(c = 1 ; c<b ; c++)
    {
        l1 = a[0];
    for (i = 0;i<n;i++)
    {
        if(a[i]>l1)
        {
            l1 = a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==l1)
        {
            in = i;
        }

    }
    for(i=in;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n--;
    }
    l2 = a[0];
    for (i = 0;i<n;i++)
    {
        if(a[i]>l2)
        {
            l2 = a[i];
        }
    }
    printf("The %d largest element in the array is: %d\n", b, l2);
    return 0;
}