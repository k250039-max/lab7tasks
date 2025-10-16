#include<stdio.h>
int main()
{

    int i;
    int countv=0;
    int countc=0;
    char str[100];
    printf("Enter sentence:");
    scanf("%[A-Za-z]",&str);
     i=0;
    while(i=0;i<100;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            countv++;
        }
        else if(str[i]==' ')
        {
            break;
        }
        else
        {
        	countc++;
		}
    }
    printf("\nVowels entered are:%d",countv);
    printf("\nConsonents entered are:%d",countc);
    return 0;
}
