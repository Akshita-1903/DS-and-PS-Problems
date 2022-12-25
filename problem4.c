#include<stdio.h>
void main()
{
    int a[50],i,n,sum=0,sum1=0,m;
    printf("enter the size of the array");
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=(n*(n+1))/2;
    for(i=0;i<n-1;i++)
    {
        sum1=a[i]+sum1;
    }

    m=sum-sum1;
    printf("missing number is:%d",m);

}

