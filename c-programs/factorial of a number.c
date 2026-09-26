#include<stdio.h>
int main()
{
int f,n,i;
f=1;
i=1;
printf("enter the number\t");
scanf("%d",&n);
while(i<=n)
{
    f=f*i;
    i++;
}
printf("the factorial is %d\t",f);
}