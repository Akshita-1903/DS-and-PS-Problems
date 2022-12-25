#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("Enter the order of matrix A");
    scanf("%d%d",&m,&n);
    printf("Enter the order of matrix B");
    scanf("%d%d",&p,&q);
    if(n==p)
    {
        printf("Enter the elements of matrix A");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter the elements of b");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++){
                for(j=0;j<q;j++)

                {
                    c[i][j]=0;
                    for(k=0;k<n;k++)
                    {
                        c[i][j]=c[i][j]+a[i][k]*b[k][j];
                    }
                }}
                for(i=0;i<m;i++){
                    for(j=0;j<k;j++){
                        printf("%d",c[i][j]);
                    }
                }
    }
    else
        {
            printf("Multiplication not possible");
                   }

}
