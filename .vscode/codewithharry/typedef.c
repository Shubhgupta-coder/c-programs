#include<stdio.h>
typedef struct student
{
    int marks;
    char name;
} s1;

int main()
{
    s1 shubh,palak;

    shubh.marks=55;
    palak.marks=53;
    shubh.name='p';
    palak.name='s';
    printf("%d \n",shubh.marks);
    printf("%c",palak.name);

}
