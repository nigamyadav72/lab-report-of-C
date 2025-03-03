#include<stdio.h>
#include<stdlib.h>
int main()
{
   int a[100][100],b[100][100],c[100][100];
   int i,j,k,m,n,p,q;
   printf("Enter the order of first matrix:");
   scanf("%d%d",&m,&n);
   printf("Enter the order of second matrix:");
   scanf("%d%d",&p,&q);
   if(n!=p)
   {
      printf("Matrix cannot be multiplied");
      exit(0);
   }
   printf("Enter the first matrix:");
   for(i=0;i<m;i++)
   {
      for(j=0;j<n;j++)
      {
         scanf("%d",&a[i][j]);

      }
   }
    printf("Enter the second matrix:");
   for(i=0;i<p;i++)
   {
      for(j=0;j<q;j++)
      {
         scanf("%d",&b[i][j]);

      }
   }
   for(i=0;i<m;i++)
   {
      for(j=0;j<q;j++)
      {
         c[i][j]=0;
         for(k=0;k<n;k++)
         {
            c[i][j] = c[i][j]+a[i][k]*b[k][j];

         }
      }
   }
   printf("The product is \n");
   for(i=0;i<m;i++)
   {
      for(j=0;j<q;j++)
      {
         printf("%d\t",c[i][j]);

      }
      printf("\n");

   }
   return 0;
   
}