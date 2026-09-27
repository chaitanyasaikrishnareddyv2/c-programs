#include<stdio.h>
int main()
{
    int i,n;
    i=1;
    printf("Enter the number\t");
    scanf("%d",&n);
    printf("The factors are :\t");
    while(i<=n)
    {
        if(n%i==0) 
        {
        printf("%d\t",i);
        }
        i++;
    }
    return 0;
}