#include<stdio.h>
int main()
{
    char name[50];
    printf("Enter your name:");
    scanf("%[^\n]s",name);
    printf("Hi %s",name);
    return 0;

}