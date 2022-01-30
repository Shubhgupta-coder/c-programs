#include<stdio.h>
#include<string.h>
int parser(char[]);
int parser(char* string)
{
    int in=0;
    int index=0;
    int j;
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='<')
        {
                in=1;
                continue;
        }
        else if (string[i]=='>')
        {
            in=0;
            continue;
        }
        if(in==0)
        {
            string[index]=string[i];
            index++;        

        }
        
    }
    string[index]='\0';
   //  return (string[index]);

    while (string[0]== ' ')
    {
        for(int j=0;j<strlen(string);j++)
        {
            string[j]=string[j+1];
        }
    }

    while(string[strlen(string)-1]==' ')
    {
        string[strlen(string)-1]='\0';
    }
   printf("the string is --%s-- ", string);
   // return (string[index]);
}

int main()
{
char str[]="<h1>     this is a heading     </h1>";
parser (str);
//printf("the string is --%s-- ", str);

}
