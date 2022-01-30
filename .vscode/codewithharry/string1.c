#include<stdio.h>
int main()
{
    int i=0;
   char str[8]="shubh";
    //char str[45];
    //gets(str);
    printf("%s \n",str);// using %s format specifier in printf

        while(str [i]!='\0')
        {
          printf("%c",str[i]);
            i++;
        }
        printf("\n");

        puts(str);
}