#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Amount\t");
    scanf("%d",&n);
    if(n>=1000)
    {
        printf("you got 5%% discount");
    }
    else if(n>=5000)
{
    printf("you got 10%% discount");
}
else if(n>=10000)
{
    printf("you got 25%% discount");
}
}