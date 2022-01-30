#include<stdio.h>
#define pi 3.14
#define square(x)x*x
int main()
{
float v=pi;
int radius=10;
printf("the value of pi is %f \n",v);
printf("the area of circle is %f \n",pi*square(radius));
printf("the time is %s \n",__TIME__);
printf("the line number is %d \n",__LINE__);
printf("the file name is %s \n ",__FILE__);
printf("the date is %s \n",__DATE__);
printf("ANSI is %d \n",__STDC__);
}