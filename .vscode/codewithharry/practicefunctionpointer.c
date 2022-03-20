#include<stdio.h>
#include<math.h>
#define pi 3.14
 float e;
void distance(int a, int b,int c,int d)
{
    e= (b-a)*(b-a)+(d-c)*(d-c);
    printf("the eucledian distance is %f ",sqrt(e));
}

float area(float f)
{
    return(pi*f*f);
}
int main()
{
    int x1,y1,x2,y2;
    float g;
   float (*ptr)(float);
    printf("enter the value of x1 \n");
    scanf("%d",&x1);
    printf("enter the value of x2 \n");
    scanf("%d",&x2);
    printf("enter the value of y1 \n");
    scanf("%d",&y1);
    printf("enter the value of y2 \n");
    scanf("%d",&y2);
    distance(x1,x2,y1,y2);
    ptr=&area;
    g=(*ptr)(sqrt(e) );
    printf("area is %f",g);
}