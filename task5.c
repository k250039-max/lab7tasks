#include<stdio.h>
int main()
{
    int arr[10];
    int min,max;
    printf("Enter integer :");
        scanf("%d",&arr[0]);
    min = arr[0];
    max = arr[0];
    for(int i =1;i<10;i++)
    {
        printf("\nEnter integer :");
        scanf("%d",&arr[i]);
        if(min>arr[i])
        {
            min = arr[i];
        }
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("\nMax = %d",max);
    printf("\nMin = %d",min);
    return 0;
}