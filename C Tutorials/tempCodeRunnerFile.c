#include<stdio.h>
int factorial(int n)
{
    int fact;
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else 
    return (factorial(n-1)+factorial(n-2));
}
int main()
{
    int n,i=0,c;
    scanf("%d",&n);
    printf("fibonacci series\n");
    for(c=1;c<=n;c++)
    {
        printf("%d\n",factorial(i);
        i++;)
    }
    return 0;
}