#include<stdio.h>


   
void input1(int *m,int *n,int a[10][10])
{
    int i,j;
    printf("Enter the first matrix:");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);

      }
   }
}

    
void input2(int *p,int *q,int b[10][10])
{
    int i,j;
    printf("Enter the first matrix:");
    for(i=0;i<p;i++)
    {
        for(j=0;j<p;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
}
int main()
{
    int a[10][10],b[10][10];
    
    int i,j,m,n,p,q;
    printf("Enter the order of first matrix:");
    scanf("%d%d",&m,&n);
    printf("Enter the order of second matrix:");
    scanf("%d%d",&p,&q);
    if(n!=p)
    {
        printf("Matrix cannot be multiplied.");
    }
    input1(&m,&n,a[10][10]);
    input2(&p,&q,b[10][10]);

    return 0;
}