#include<stdio.h>
int main()
{
     int a,c;
     c=0;
     printf("enter the number\t");
     scanf("%d",&a);
     while(a>=0)
     {
        c++;
        printf("enter the number");
     scanf("%d",&a);
    
     }
    printf("the count is %d",c);
}