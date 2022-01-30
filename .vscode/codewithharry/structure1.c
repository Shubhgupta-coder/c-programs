#include<stdio.h>
#include<string.h>
struct student
{
   int marks;
   char fav_char;
   char name[24];
};


int main()
{
     struct student harry,shubh,palak;
 
harry.marks=18;
     shubh.marks=20;
    palak.marks=12;
    harry.fav_char='r';
    shubh.fav_char='p';
    palak.fav_char='s';
    strcpy(shubh.name,"shubh gupta");
    strcpy(palak.name,"palak bansal");
    strcpy(harry.name,"harry pottar");
    printf("%d \n",harry.marks);
    printf("%d \n",shubh.marks);
    printf("%d \n",palak.marks);
    printf("%c \n",harry.fav_char);
    printf("%c \n",shubh.fav_char);
    printf("%c \n",palak.fav_char);
    printf("%s \n",shubh.name);
    printf("%s \n",palak.name);
    printf("%s \n",harry.name);
     
    
}


