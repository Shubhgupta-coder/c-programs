# include<stdio.h>
#include<string.h>
int main()
{
    char s1[10];
    char s2[10];
    char s3[100]=" is a friend of ";
    //printf("%s",s3);
    printf("enter s1");
    gets(s1);

    printf("enter s2");
    gets(s2);
    strcat (s1,s3);  
     strcat(s1,s2);
     puts(s1);  





}