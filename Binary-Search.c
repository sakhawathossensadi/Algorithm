#include<stdio.h>

void binarySearch(int arr[],int n,int key);
int main()
{
    int i,j,temp,search,n,arr[100],flag=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    printf("Enter %d elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i;j>0 && temp<arr[j-1];j--)
        {
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
    printf("Enter a number to search : ");
    scanf("%d",&search);
    binarySearch(arr,n,search);
    return 0;
}

void binarySearch(int arr[],int n,int key)
{
    int low,high,mid,flag=0;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            flag=1;
            break;
        }
        else if(key<arr[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("Search key %d found\n",key);
    }
    else
    {
        printf("Search key %d not found\n",key);
    }
}
