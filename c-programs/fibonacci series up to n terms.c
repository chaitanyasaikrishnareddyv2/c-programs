#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    a=0,b=1,i=1;
    printf("enter the number of terms\t");
    scanf("%d",&n);
    printf("Fibonacci series:\t");
     while(i<=n)
     {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
        i++;
     }
}