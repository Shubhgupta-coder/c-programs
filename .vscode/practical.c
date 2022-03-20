#include<stdio.h>
int main()
{
    int p,c,m,tpm,total;
    printf("enter the marks of physics");
    scanf("%d",&p);
     printf("enter the marks of chemistry");
    scanf("%d",&c);
     printf("enter the marks of maths");
    scanf("%d",&m);
    tpm=p+m;
    total=p+m+c;
    if(p>40 && c>50 && m>60 && (tpm>150 || total>200))
    {
        printf("eligible for course");
    }
    else 
    {
        printf("not eligible for course");
    }
}
