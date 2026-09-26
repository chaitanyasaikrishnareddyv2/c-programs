       #include<stdio.h>
       int main()
       {
        int a,l,n,i;
        l=0;
        i=1;
        printf("enter the number of values you want to enter\t");
        scanf("%d",&n);
        while(i<=n)
        {
        printf("enter the number\t");
        scanf("%d",&a);
        if(a>l)
        {
            l=a;

        }
        i++;
        
    }
    printf("the largest number is %d\t",l);
}