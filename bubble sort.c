#include<stdio.h>
void main()
{
    int a[10],i,n,c,j;
    printf("Enter the size of the array");
    scanf("%d",&n);
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=0;j<n-i-1;j++)
       {
           if(a[j]>a[j+1])
           {
               c=a[j];
               a[j]=a[j+1];
               a[j+1]=c;
           }
       }
   }
   for(i=0;i<n;i++){
    printf("%d ",a[i]);
   }

}
