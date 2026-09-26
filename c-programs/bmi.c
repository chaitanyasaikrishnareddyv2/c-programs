#include<stdio.h>
int main()
{
    int w;
    float h;
    printf("enter weight in kg\t");
    scanf("%d",&w);
    printf("enter height in m\t");
    scanf("%f",&h);
    if(w/h*h<18.5) 
    {
    printf("underweight");
}
    else if(w/h*h>=24.9)
    {
    printf("Normal weight");
}
else if(w/h*h>=25)
{
    printf("Overweight");
}
}