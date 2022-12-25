#include<stdio.h>
void main()
{
    int a[20],i,j,n;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     printf("Repeated element are:");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
            printf("%d\n",a[j]);

            }
        }
    }
    printf("Non Repeated element are:");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                break;}
            }
            if(j==n){
                printf("%d",a[i]);
            }
        }
        printf("\n");
    }



