#include<stdio.h>
int main()
{
    int x,y;
    printf("enter the x coordinate\t");
    scanf("%d",&x);
    printf("enter the y coordinate\t");
    scanf("%d",&y);
    if(x>0 && y>0)
    {
    printf("point lies in the 1st quadrant");
}
if(x<0 && y>0)
    {
    printf("point lies in the 2nd quadrant");
}
if(x<0 && y<0)
    {
    printf("point lies in the 3rd quadrant");
}
if(x>0 && y<0)
    {
    printf("point lies in the 4th quadrant");
}
}