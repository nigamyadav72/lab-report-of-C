#include<stdio.h>
int main()
{
    char str[]="I LOVE NEPAL";
    printf("|%s|\n",str);
    printf("|%15s|\n",str);
    printf("|%-15s|\n",str);
    printf("|%.1s|\n",str);
    printf("|%.3s|\n",str);
    printf("|%15.6s|\n",str);

}