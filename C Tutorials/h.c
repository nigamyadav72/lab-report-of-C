#include<stdio.h>
int main(){
    int a[100][100],b[100][100],trans[100][100],i,j,m,n,p,q;

    printf("Enter the order of first matrix::\n");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of first matrix::\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            trans[i][j]=a[j][i];
        }
    }
    printf("The transpose of matrix is::\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",trans[i][j]);
        }
        printf("\n");
    }
    
 return 0;
}