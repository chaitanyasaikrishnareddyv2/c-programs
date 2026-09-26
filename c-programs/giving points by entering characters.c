#include<stdio.h>
int main()
{
    char ch;
    int s=0;
    printf("enter the characters\t");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        s=5;
    }
    else if(ch>='0'&&ch<='9')
{

    s=10;
} 
   else
  {
    s=0;
  }
printf("the no of points is %d\n",s);
}