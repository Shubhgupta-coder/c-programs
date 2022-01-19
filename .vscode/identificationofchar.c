#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character");
    scanf("%c",&ch);

        if ((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
        {
            printf("the character is alphabetic \n");
            if((ch>=97 && ch<=122))
            {
                printf("lower case letter \n");;
            }
            else
            {
                printf("upper  case letter \n ");
            }
        }
        else{
            printf("the character is not alphabetic \n ");
        }
}