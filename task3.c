#include<stdio.h>
int main()
{
    int marks[10],marksp[10],marksf[10];
    int countp=0;
    int countf=0;
    float totalf = 0.00;
    float totalp = 0.00;
    float avgp,avgf;
    for(int i=0;i<10;i++)
    {
        printf("\nEnter marks of student %d:",i+1);
        scanf("%d",&marks[i]);
         if(marks[i]==-1)
        {
            break;
        }
        else if(marks[i]>=0&&marks[i]<5)
        {
            marksf[countf]=marks[i];
            countf++;
            totalf+=marks[i];
        }
      else  if(marks[i]>=5&&marks[i]<=10)
        {
            marksp[countp]=marks[i];
            countp++;
            totalp+=marks[i];
        }
        else
        {
            printf("\nWrong entry try again");
            i--;
        }
    }
    printf("\nPassed students:");
    for(int i=0;i<countp;i++)
    {
        printf("\n%d.%d",i+1,marksp[i]);
    }
    avgp=totalp/countp;
    printf("\nAverage = %.2f",avgp);
     printf("\nFailedstudents:");
    for(int i=0;i<countf;i++)
    {
        printf("\n%d.%d",i+1,marksf[i]);
    }
    avgf=totalf/countf;
    printf("\nAverage = %.2f",avgf);
    return 0;




}