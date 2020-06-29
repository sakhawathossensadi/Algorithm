#include<stdio.h>
int main()
{
    int i,search,n,arr[100],flag=0;
    printf("Enter number of elements in array : ");
    scanf("%d",&n);
    printf("Enter %d integers\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number to search : ");
    scanf("%d",&search);
    for(i=0;i<n;i++)
    {
        if(arr[i]==search)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Search key %d found\n",search);
    }
    else
    {
        printf("%d isn't present in the array\n",search);
    }
    return 0;
}
