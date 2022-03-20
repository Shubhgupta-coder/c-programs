#include<stdio.h>
int main()
{
    char c;
    char str[34];
    FILE*ptr=NULL;
    ptr=fopen("myfile2.txt","a");
    //c=fgetc(ptr);
   // printf("%c",c);
    // c=fgetc(ptr);
    //printf("%c",c);
    //fgets(str,7,ptr);
    //printf("%s",str);

    fputc('o',ptr);
    fputs("myhello",ptr);



}