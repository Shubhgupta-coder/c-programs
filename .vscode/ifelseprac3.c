#include<stdio.h>
int main()
{
    int a,b,c,d,e,per;
    printf("enter tthe value of a,b, c,d,e");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    
    per=(a+b+c+d+e)/5;
    printf("percentage is %d",per);

if(per>=60)
{
printf("first division");
}
else if(per>=50)
{
    if(per<=59)
    {
        printf("second division");
    }
}
else if(per>=40)
{
    if(per<=49)
    {
        printf("third division");
    }
}
else
{
    printf("fail");
}
}

