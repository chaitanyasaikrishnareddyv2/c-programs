#include<stdio.h>
int main()
{
    int a[10],n,i,l1,l2,in,j,k;
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
    l2 = a[0];
    for (i = 0;i<n;i++)
    {
        if(a[i]>l2)
        {
            l2 = a[i];
        }
    }
    printf("The second largest element in the array is: %d\n",l2);
    return 0;
}