#include <stdio.h>

void printstr(char str[])
{
int i=0;
while(str[i]!='\0')
{
    printf("%c",str[i]);
    i++;
}
}

int main() {
  int salary;
    char str[50];
 
    gets (str);
    printstr(str);
    printf("your name is %s\n",str);
    printf("enter your salary");
    scanf("%d",&salary);
    printf("your salary is %d",salary);
 
	return 0;
}