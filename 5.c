#include<stdio.h>
int main()
{
    int a[50][50],tz=0,rows,columns;
    printf("Enter the number of rows of Matrix : ");
    scanf("%d",&rows);
    printf("Enter the number of columns of Matrix : ");
    scanf("%d",&columns);
    printf("Enter the elements of Matrix : \n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            scanf("%d",&a[i][j]);
            if(a[i][j]==0)
            {
                tz+=1;
            }
        }
    }
    if(tz>(rows*columns)/2)
    {
        printf("The given Matrix is a Sparse Matrix.");
    }
    else{
        printf("The given Matrix is not a Sparse Matrix.");
    }
    return 0;
}


