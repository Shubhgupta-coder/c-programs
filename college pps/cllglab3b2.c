#include <stdio.h>

int main() {
	int physics,chem,maths,tpm,pcm;
	printf("enter the marks of physics \n");
	scanf("%d",&physics);
	printf("enter the marks of chemistry \n");
	scanf("%d",&chem);
	printf("enter the marks of maths \n");
	scanf("%d",&maths);
	tpm=physics+maths;
	pcm=physics+chem+maths;
	if(physics>40)
	{
	    printf("eligible for course");
	}
	else if (chem>50)
	{
	    printf("eligible for course");
	}
	
	else if (maths>60)
	{
	    printf("eligible for course");
	   
	}
	else if (tpm>150)
	{
	    printf("eligible for course");
	}
	else if (pcm> 200)
	{
	    printf("eligible for course");
	}
	else
	{
	    printf("not eligible for course");
	}
	return 0;
}