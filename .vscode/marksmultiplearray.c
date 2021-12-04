#include <stdio.h>

int main() {
int arr[4][2],i,j;

  printf("enter your roll number and marks \n");
for(i=0;i<=3;i++)
{
    scanf("%d%d", &arr[i][0],&arr[i][1]);
}
for(i=0;i<=3;i++)
 printf("your roll number and marks is %d %d \n",arr[i][0],arr[i][1]);
	return 0;
}



