#include<stdio.h>
void main()
{
    int i,j,a[50],n;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("Traversed array= ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);

    }


}
