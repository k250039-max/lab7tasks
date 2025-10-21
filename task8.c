#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter characters but no alphabets:");
    scanf("%[^A-Za-z]",str);
    int i =0;
    while (str[i]!='\0')
    {
        printf("\n%c",str[i]);
        i++;
    }
    return 0;
    
}