#include <stdio.h>
 
 int func(int array[])
{
 
 int i,j,arr[4];
 
     for(int i=0;i<4;i++)
     {
         printf("the value of %d is %d\n", i, array[i]);
     }
     
     array[0]=7;
     return 0;
 }
 
 
int main() {
    int arr[]={2,3,4,5};
    printf("the value at index 0 is %d\n", arr[0]);
    func(arr);
    printf("the value at index 0 is %d\n", arr[0]);
    
    	return 0;
}