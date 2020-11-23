#include<stdio.h>

int main()
{
    int i,j,size,temp,min,position;
    printf("Enter array size : ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements : \n");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array elements before sorting : \n");
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    for(i=0; i<size-1; i++)
    {
        min=arr[i];
        for(j=i+1; j<size; j++)
        {
            if(arr[j]<min)
            {
                min=arr[j];
                position=j;
            }
        }
        if(arr[i]!=min)
        {
            temp=arr[i];
            arr[i]=arr[position];
            arr[position]=temp;
        }
    }
    printf("Array elements after sorting : \n");
    for(i=0; i<size; i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
    return 0;
}
