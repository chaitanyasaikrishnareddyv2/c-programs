#include<stdio.h>
int main()
{
    int a[10],n,i,s;
    printf("Enter the number of elements you want to store\t");
    scanf("%d",&n);
    for (i = 0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number to be searched ");
    scanf("%d",&s);
    for(i = 0;i<n;i++)
    {
        if(a[i] == s)
        {
            printf("%d is found at the position %d",s,i+1);
            break;
        }
        
    }
    if(a[i]!=s)
    {
            printf("%d is not found in the array",s);
}
    return 0;
}