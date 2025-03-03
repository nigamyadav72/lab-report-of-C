#include<stdio.h>
int main(){
    //WAP to read three digit integer value & add all bits & display the sum
    int N,a,b,c,sum,x;
    printf("Enter three digit number(100 to 999):");
    scanf("%d",&N);
    a=N/100;
    c= N%10;
    x=N/10;
    b=x%10;
    sum=a+b+c;
    printf("sum=%d",sum);
    return 0;
    
}