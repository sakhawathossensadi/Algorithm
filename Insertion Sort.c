#include<stdio.h>
int main()
{
    int i,j,n,temp;
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
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        for(j=i;j>0 && temp<arr[j-1];j--)
        {
            arr[j]=arr[j-1];
        }
        arr[j]=temp;
    }
    printf("After sorting : \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
