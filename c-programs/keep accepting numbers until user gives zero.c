#include<stdio.h>
int main()
{
     int a,s;
     s=0;
     printf("enter the number");
     scanf("%d",&a);
     while(a!=0)
     {
        s=s+a;
        printf("enter the number");
     scanf("%d",&a);
    
     }
    printf("the sum is %d",s);
}