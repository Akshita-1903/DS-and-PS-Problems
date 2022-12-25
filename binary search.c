#include<stdio.h>

int main()
{
    int beg,end,i,m1,m2,n,key,a[100];
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched");
    scanf("%d",&key);
    beg=0;
    end=n-1;
    m1=beg+((end-beg)/3);
    m2=m1+((end-beg)/3);
    if(a[m1]==key)
        printf("element found on location: %d",a[m1]);
        else if(a[m2]==key)
            printf("element found on location %d;",a[m2]);
    else if(a[m1]>key){
        for(i=0;i<m1;i++)
        {if(key==a[i])
        printf("element found at location:%d",a[i]);

        else if(a[m1]<key){
             for(i=m1+1;i<m2;i++)
        {if(key==a[i])
        printf("element found at location:%d",a[i]);
    }
        }
        else if(a[m2]<key){
             for(i=m2+1;i<end;i++)
        {if(key==a[i])
        printf("element found at location:%d",a[i]);
    }
        }}}

}



