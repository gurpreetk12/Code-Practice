#include <stdio.h>
#include <string.h>

void reverse(char*s);
int main()
{
    char s[100],r[100];
    int n,i,count=0;
    printf("enter a string: ");
    gets(s);
    for(i=0;i<strlen(s);i++)
    {   if(s[i]!='\0')
            count++;
        else
            break;
    }
    printf("length of string: %d", count);
    
    //reverse
    for(i=0;i<strlen(s);i++)
    {   if(s[i]!='\0')
        {
            r[i]=s[count-1];
            count--;
        }
        else
            break;
    }
    printf("\nreverse of string is: ");
    puts(r);
    reverse(s);
    printf("\nreverse each word is: ");
    puts(s);
    return 0;
}
    
void reverse(char*s)
{   int len=strlen(s);
    int i,j;
    char rev[100];
    for(i=0;i<len;i++)
    {   for(j=0;i<len;j++,i++)
        {
            if((s[i]==' ')||(s[i]=='.'))
                break;
            rev[j]=s[i];
        }
        while(j>0)
        {
            j--;
            s[i-j-1]=rev[j];
        }
    }
}