#include<stdio.h>
void main()
{
  int a[50],i,j,n,num;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of sorted array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be inserted");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]>num)
        {
            a[i+1]=a[i];

        }
    }
    a[i]=num;
    n++;

    printf("After insertion array is :");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
