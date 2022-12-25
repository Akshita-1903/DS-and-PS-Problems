#include<stdio.h>
void main()
{
    int a[50],i,n,ele,c=0;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&ele);
    //Searching
    for(i=0;i<n;i++)
    {
        if(ele==a[i])
        {
            c=c+i;
            printf("Position=%d \n",i+1);
        }
    }
    if(c>0)
        printf("Element exist");
    else
        printf("Element not found");

}
