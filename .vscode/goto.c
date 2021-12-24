#include <stdio.h>

int main() {
	int i,j;
	for(i=1;i<=2;i++)
	{
	    for(j=1;j<=3;j++)
	    {
	        if(i==1&&j==2)
	        goto out;
	    }
	}
	out:printf("out of last loop");
	return 0;
}

