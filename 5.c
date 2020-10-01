//5.WAP to multiply two matrices?
#include<stdio.h>
int main()
{
    int A[15][15],B[15][15],C[15][15],m,n,o,p;
    printf("Enter the rows and columns of 1st matrix A : ");
    scanf("%d %d",&m,&n);
    printf("Enter the rows and columns of 2nd matrix B : ");
    scanf("%d %d",&o,&p);
    printf("Enter the elements of 1st matrix A : ");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the elements of 2nd matrix B : ");
    for(int k=0;k<o;k++)
    {
        for(int l=0;l<p;l++)
        {
            scanf("%d",&B[k][l]);
        }
    }
    for(int q=0;q<m;q++)
    {
        for(int r=0;r<p;r++)
        {
            C[q][r]=0;
            for(int s=0;s<p;s++)
            {
                C[q][r]+=A[q][s]*B[s][r];
            }
        }
    }
    printf("Multiplication matrix of A Aand B , C = \n");
    for(int t=0;t<m;t++)
    {
        for(int u=0;u<p;u++)
        {
            printf(" %d ",C[t][u]);
        }
        printf("\n");
    }
    return 0;

}