#include<stdio.h>
int main()
{
    int n;
    printf("Enter the age of the person\t");
    scanf("%d",&n);
    if(n>=18)
    {
        printf("the person ios eligible for voting");
    }
    else
    {
        printf("the person is not eligible for voting");
    }

}