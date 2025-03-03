//WAP to find the largest of three numbers using nested if...else
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is  largest number",a);
        }
        else
        {
            printf("%d is largest number",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is largest number",b);

        }
        else
        {
            printf("%d is largest number",c);

        }

    }
    return 0;
    

}