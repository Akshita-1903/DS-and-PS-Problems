#include<stdio.h>
#include<math.h>



int jumpsearch(int array[],int size,int key)
{int start=0;int end=sqrt(size);
while(array[end]<=key&&end<size)
{
    start=end;
    end+=sqrt(size);
    if(end>size-1)
        end=size;
}
for(int i=start;i<end;i++){
    if(array[i]==key)
    return i;
}
return -1;
}
int main(){
    int n,searchkey,m;
    printf("enter number of items:");
    scanf("%d",&n);
    int arr[n];
    printf("enter items:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the searchkey");
    scanf("%d",&searchkey);
    m=jumpsearch(arr,n,searchkey);
    if(m>0)
    printf("element found at %d",m+1);
    else
        printf("element found");
}

