#include <stdio.h>

int main() {
	int A[3][3], B[3][3],C[3][3],i,j;
	
	printf("enter 9 value for first matrix \n ");
{
	    for(i=0;i<=2;i++)
	    {	for (j=0;j<=2;j++)
	
	        scanf("%d",&A[i][j]);
	    }
	}
	
    printf(" The value in the matrix are \n");
	    for (i=0;i<=2;i++) 
	{
	 for(j=0;j<=2;j++)
	 {
	     printf("%d ",A[i][j]);
	 }
	 printf("\n");
	}
	
		printf("enter 9 value for second matrix \n ");
	for (i=0;i<=2;i++)
	{
	    for(j=0;j<=2;j++)
	    {
	        scanf("%d",&B[i][j]);
	    }
	}
	
    printf(" The value in the matrix are \n");
	    for (i=0;i<=2;i++) 
	{
	 for(j=0;j<=2;j++)
	 {
	     printf("%d ",B[i][j]);
	 }
	 printf("\n");
	}
	
		    for(i=0;i<=2;i++)
		    {
	    	for (j=0;j<=2;j++)
	        {
	            C[i][j]=A[i][j]+B[i][j]  ;
	            printf("%d",C[i][j]);
	        }
	        printf("\n");
		    }
		    return 0;
}





