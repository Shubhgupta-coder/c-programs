#include<stdio.h>
int func1(int arr[])
{
  arr[0]=383; 
    arr[1]=38; 
    arr[2]=33; 
    arr[3]=83; 
    for (int i = 0; i <= 3; i++)
    {
     printf("the value of element %d of the array is %d \n", i, arr[i]);
    }   
    
}

int func2(int*ptr)
{
     for (int i = 0; i <= 3; i++)
    {
       printf("the value of element %d of the array is %d \n", i, ptr[i]);
    }   

    ptr[2]=25;
}

void func3(int arr[2][2])
{
  arr[0][0]=7;
  for (int i = 0; i < 2; i++)
  {     
    for(int j=0;j<2;j++)
    {
      printf("the value at %d %d element of the array is %d\n",i,j,arr[i][j]);
    }
    printf("\n");
  }
  
}

int main()
{
int array1[]={1,2,3,4};
int array2[][2]={{1,2},{3,4}};
//printf("the value at index 0 is %d \n", array[0]);
func1(array1);
//for (int i = 0; i <= 3; i++)
    // {
     // printf("the value of element %d of the array is %d \n", i, array[i]);
    // }   

    //func2(array);
    //func2(array);
    // func3(array);
  //  func3(array);
   
    

}