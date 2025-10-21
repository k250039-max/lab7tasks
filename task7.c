#include<stdio.h>
int main()
{
    int arr[10],finalarr[10];
    int dupl[10]={0};
    int i;
    for(i=0;i<10;i++)
    {
        printf("\nEnter Number:");
        scanf(" %d",&arr[i]);
    }
    for(i=0;i<10;i++)
    {
        if(dupl[arr[i]]==0)
        {
            finalarr[i]=arr[i];
            dupl[arr[i]]=1;
        }
        else
        {
            finalarr[i]=-1;
        }
    }
    for(i=0;i<10;i++)
    {
        printf("\n%d",finalarr[i]);
    }
    return 0;
}