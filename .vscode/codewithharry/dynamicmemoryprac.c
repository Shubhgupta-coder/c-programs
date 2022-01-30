#include<stdio.h>
#include<stdlib.h>
int main()
{
    int chars,i=0;
    char*ptr;
    char a,b;
    while (i<3)
    {
       printf("EMPLOYEE %d enter the no. of characters \n",i+1);
       scanf("%d",&chars);
       ptr=(char*)malloc((chars+1)*sizeof(char));
       printf("enter your employee id \n");
      scanf("%s",ptr);
     // gets(ptr);
       printf("your employee id is %s \n",ptr);
        free(ptr);
        i++;
       
    }
    getchar();
    printf("enter the value of a");
    scanf("%c",&a);
     printf(" the value of a is %c",a);
      getchar();
    printf("enter the value of b");
    scanf("%c",&b);
     printf(" value of b is %c",b);



}