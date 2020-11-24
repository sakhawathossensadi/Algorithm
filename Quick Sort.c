#include<stdio.h>

void quickSort(int arr[],int lb,int up);
int partition(int arr[],int lb,int up);
int main()
{
    int i,j,n;
    int arr[1000];
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter array elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Before sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    quickSort(arr,0,n-1);
    printf("After sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}

void quickSort(int arr[],int lb,int up)
{
    int pi;
    if(lb<up)
    {
        pi=partition(arr,lb,up);
        quickSort(arr,lb,pi-1);
        quickSort(arr,pi+1,up);
    }
}

int partition(int arr[],int lb,int up)
{
    int pivot=arr[lb];
    int start,end,temp;
    start=lb;
    end=up;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start++;
        }
        while(arr[end]>pivot)
        {
            end--;
        }
        if(start<end)
        {
            temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
        }
    }
    temp=arr[end];
    arr[end]=arr[lb];
    arr[lb]=temp;
    return end;
}
