#include<stdio.h>
int main()
{
    int a,b,ch1;
    char ch2;
    do
    {
    printf("Enter two numbers\t");
    scanf("%d%d",&a,&b);
    printf("enter 1 to perform addition\n enter 2 to perform subtraction\n enter 3 to perform multiplication\n enter 4 to perform division\n");
    printf("Enter your choice\t");
    scanf("%d",&ch1);
if(ch1==1)
{
    printf("Sum of two numbers is %d\t",a+b);
}
else if(ch1==2)
{
    printf("Subtraction of two numbers is %d\t",a-b);
}
else if(ch1==3)
{
    printf("Multiplication of two numbers is %d\t",a*b);
}
else if(ch1==4)
{
    printf("Division of two numbers is %d\t",a/b);
}
else
{
    printf("choose a valid choice\n");
}
printf("\nDo you wish to continue again?enter (y/n)\t");
scanf(" %c",&ch2);
}
while(ch2=='y'||ch2=='Y');
}