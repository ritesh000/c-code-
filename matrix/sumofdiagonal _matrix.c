#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter the size of screen \n");
    scanf("%d",&n);
    int a[n][n];
    printf("enter the matrix value \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("display matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {

            printf(" %d ",a[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    printf("sum of diagonal in matrix \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
           if(i==j){
              sum=sum+a[i][j];
        }
        }
    }
    printf("sum of first diagonal = %d",sum);
}

