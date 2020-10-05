#include <stdio.h>
#include <conio.h>
void main()
{
   int i,n;
   printf("enter size of Matrix:");
   scanf("%d",&n);
   int a[n][n],b[n][n];
   int j;
   printf("enter matrix 1 elemants=");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d",&a[i][j]);
       }
   }
   printf("enter matrix 2 elemants=");
   for(i=0;i<n;i++){
       for(j=0;j<n;j++){
           scanf("%d",&b[i][j]);
       }
   }int c[n][n];
   for(i=0;i<n;i++){
   for(j=0;j<n;j++){
       c[i][j]=0;
       for(int k=0;k<n;k++){
           c[i][j]=c[i][j]+a[i][k]*b[k][j];
       }
   }
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        printf("%d ",c[i][j]);
    }
    printf("\n");
}
}
