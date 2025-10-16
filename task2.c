#include<stdio.h>
int main()
{
    int count=0;
    int arr[10],i,num;
    for(i=0;i<10;i++)
    {
        printf("\nEnter a number:");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter number for searching:");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(arr[i]==num)
        {
            count++;
        }
    }
    if(count==0)
    {
        printf("\n%d not found",num);
    }
    else
    {
        printf("\n%d was entered %d times",num,count);
    }
    return 0;
}
