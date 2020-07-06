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

    printf("90 degree rotated matrix \n");
    for(j=0; j<n; j++)
    {
        for(i=n-1; i>=0; i--)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
