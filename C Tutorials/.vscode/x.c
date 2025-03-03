#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    float p,b,h;
    float  area;
    printf("Enter the base and height of triangle:");
    scanf("%f%f",&b,&p);
    area = 0.5*p*b;
    printf(" area = %f",area);
    h=sqrt(pow(b,2)+pow(p,2));
    printf("\nhypotenous  = %f",h);
    return 0;
}