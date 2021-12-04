// multidimensional array //

#include <stdio.h>
void fun(int arr [2][2])
{
    for (int i =0 ; i<2; i++)
    {
        for (int j=0; j <2 ; j++)
        {
            printf(" the value at %d, %d is % d \n ", i, j, arr[i][j]);
        }
    }
}

int main() {
 int arr [2][2]={{2,3,},{4,5}};
 fun (arr);
 
	return 0;
}