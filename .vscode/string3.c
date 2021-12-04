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
    char str[50];
    gets (str);
    printstr(str);
   printf("%S",str);
	return 0;
}