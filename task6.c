#include<stdio.h>
int main()
{
    int i=0;
    int countv=0;
    int countc=0;
    char str[100];
    printf("Enter sentence(Enter full stop  when ending):");
    gets(str);
    while(str[i]!='\0')
    {
        
    
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')

        {
            countv++;
        }
        else if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z'))
        {
            countc++;
        }
        i++;
    
    }
    
    printf("\nVowels entered are:%d",countv);
    printf("\nConsonents entered are:%d",countc);
    return 0;
}
