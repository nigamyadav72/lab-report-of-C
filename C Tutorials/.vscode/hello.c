#include<stdio.h>
int main()
{
    float total,discount;
    printf("Enter the total amount");
    scanf("%f",&total);
    if(total>=2500.0)
    {
        discount = 0.1*total;
        printf("congratulations! you got %f discount",discount);
        total=total-discount;

    }
    printf("Please pay %f",total);
    return 0;

}