#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter the value of a,b, and c");
    scanf("%f%f%f",&a,&b,&c);
    if((a+b)>c &&(b+c)>a&&(a+c)>b)
    {
        s=(a+b+c)/2.0;
        area=sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area = %f",area);

    }
    else{
        printf("Triangle cannot be formed.");
    }
    return 0;
}