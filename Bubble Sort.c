#include<stdio.h>
int  main()
{
    int i,j,size,temp;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements : \n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before sorting : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("Array elements after sorting : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
