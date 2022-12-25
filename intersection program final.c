#include<stdio.h>
void main()
{
    int a[50],b[50],c[50],i,j,k=0,n1,n2;
    printf("Enter the no. of elements of set A");
    scanf("%d",&n1);
    printf("Enter the elements of set A");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the no. of elements of set B");
    scanf("%d",&n2);
    printf("Enter the elements of set B");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    //logic for intersection
    printf("The intersection of set A&B is:-");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j]){
                c[k]=a[i];
                k++;
            }
        }
    }
    //print the intersected array
    for(i=0;i<k;i++)
    {
        printf(" %d",c[i]);
    }
}
