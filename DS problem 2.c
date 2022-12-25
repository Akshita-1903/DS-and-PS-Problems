#include<stdio.h>
void main()
{
    int a[50],i,n,num,pos;
    printf("enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be inserted");
    scanf("%d",&num);
    printf("Enter the position of the number");
    scanf("%d",&pos);
    if(pos<0||pos>n)
    {
        printf("invalid position");
    }
    else{
    for(i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    }
}
