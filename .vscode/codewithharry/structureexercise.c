#include<stdio.h>
#include<string.h>
struct driver
{
    char name[35];
    char dlno[35];
   char route[35];
   int kms;
};

int main()
{
    struct driver d1,d2,d3;
    printf("enter the details of driver \n");
    printf("enter the details of first driver \n");
    printf("enter the name of first driver \n");
    scanf("%s",&d1.name);
    printf("enter the dlno. of first driver \n");
    scanf("%s",&d1.dlno);
    printf("enter the route of first driver \n");
    scanf("%s",&d1.route);
    printf("enter the no. of km.of first driver \n");
    scanf("%d",&d1.kms);
    
    printf("enter the details of second driver \n");
    printf("enter the name of second driver \n");
    scanf("%s",&d2.name);
    printf("enter the dlno. of second driver \n");
    scanf("%s",&d2.dlno);
    printf("enter the route of second driver \n");
    scanf("%s",&d2.route);
    printf("enter the no. of km. of second driver \n");
    scanf("%d",&d2.kms);

    printf("enter the details of third driver \n"); 
    printf("enter the name of third driver \n");
    scanf("%s",&d3.name);
    printf("enter the dlno. of third driver \n");
    scanf("%s",&d3.dlno);
    printf("enter the route of  third driver \n");
    scanf("%s",&d3.route);
    printf("enter the no. of km. of  third driver \n");
    scanf("%d",&d3.kms);

    printf("the information of driver are \n");
    printf("for DRIVER NO. 1 \n name is %s \n",d1.name);
    printf("dl no. is %s \n ",d1.dlno);
    printf("route is %s \n",d1.route);
    printf("no. of kilometre is %d \n",d1.kms);

    printf("for DRIVER NO. 2 \n name is %s \n",d2.name);
    printf("dl no. is %s \n",d2.dlno);
    printf("route is %s \n",d2.route);
    printf("no. of kilometre is %d \n",d2.kms);

    printf("for DRIVER NO. 3 \n name is %s \n",d3.name);
    printf("dl no. is %s \n",d3.dlno);
    printf("route is %s \n",d3.route);
    printf("no. of kilometre is %d \n",d3.kms);

}
