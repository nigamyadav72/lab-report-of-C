
#include<stdio.h>
#include<math.h>
int factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return (n*factorial(n-1));
}
int  power(int x,int i)
{

   return pow(x,i);
    
}
int main()
{
    int n,x,fact,i;
    float sum=0.0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of x:");
    scanf("%d",&x);
    for(i=1;i<=n;i++)
    {
        sum = sum + (float)power(x,i)/(factorial(i));
    }
    printf("the sum of series is %f",sum);
    return 0;
}
