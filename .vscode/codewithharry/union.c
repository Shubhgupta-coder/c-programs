#include<stdio.h>
#include<string.h>
union student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
};
int main()
{
    union student s1;
    s1.fav_char='h';
    strcpy(s1.name,"shubh");
    s1.id=2;
    s1.marks=23;
    printf("%d \n",s1.id);
    printf("%d \n",s1.marks);
    printf("%c \n",s1.fav_char);
    printf("%s \n",s1.name);
    
    
}

