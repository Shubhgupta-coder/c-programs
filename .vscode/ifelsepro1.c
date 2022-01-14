#include<stdio.h>

int main()
{
int m1,m2,m3,m4,m5,avg;
printf("enter ,arks of five subject");
scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);

avg=(m1+m2+m3+m4+m5)/5;
printf("avereage of 5 marks is %d \n",avg);

if(avg>=80)
{
    printf("A\n");
}
    if(avg>=70)
    {
        if(avg<80)
        {
            printf("B\n");
        }
    }
    if(avg>=60)
    {
        if(avg<70)
        {
            printf("c\n");
        }
    }
    if(avg>=50)
    {
        if(avg<60)
        {
            printf("D\n");
        }
    }
    if(avg<50)
    {
        printf("fail\n");
    }
    return 0;
}

