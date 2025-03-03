//WAP to find the roots of the quadratic equations.
#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,discriminant,root1,root2,real,img;
    printf("Enter the value of a,b and c");
    scanf("%lf%lf%lf",&a,&b,&c);
    discriminant = b*b -4.0*a*c;
    if(discriminant==0)
    {
        root1=root2=-b/(2.0*a);
        printf("Roots are real and equal ∖n");
        printf("root1=root2=%lf",root1);

    }
    else if(discriminant>0)
    {
        root1=(-b+sqrt(discriminant))/(2.0*a);
        root2=(-b-sqrt(discriminant))/(2.0*a);
        printf("Roots are real and unequal∖n");
        printf("root1=%lf and root2=%lf",root1,root2);

    }
    else
    {
        real= -b/(2.0*a);
        img= sqrt(-discriminant)/(2.0*a);
        printf("Roots are imaginary ∖n");
        printf("root1=%lf+%lfi and root2= %lf-%lfi",real,img,real,img);

    }
    return 0;
}