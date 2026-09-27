#include<stdio.h>
int main()
{
    int r,i,j;
    printf("Enter the number of Rows\t");
    scanf("%d",&r);
    i=1;
    while(i<=r)
    {
        j=1;
        while(j<=r-i)
        {
        printf(" ");
        j++;
        }
        j=1;
    while(j<=i)
    {
        printf("* ");
        j++;
    }
        printf("\n");
        i++;
    }
    return 0;
}