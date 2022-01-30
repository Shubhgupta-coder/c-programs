#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]="shubh";
    char s2[]="mayank";
    char s3[30];
    printf("the strcmp for s1 annd s2 is %d \n",strcmp(s1,s2));
   // printf("the combination of s1 and s2 is %s \n",strcat(s1,s2));
  //  puts(strcat(s1,s2));
printf("the lenght of s1 is %d \n",strlen(s1));
printf("the lenght of s2 is %d \n",strlen(s2));
//puts (strrev(s1));
//puts (strrev(s2));
//s3=strcmp(s1,s2);//show error assignment to expression with array type//
strcpy(s3,strcat (s1,s2));
puts(s3);

}
