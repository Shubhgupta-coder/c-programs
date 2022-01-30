#include<stdio.h>
void func1(int arr[])
{
    for(int i=0;i<=3;i++)
    {
        printf("the nalue of %d element of the array is %d \n", i,arr[i]);
    }
    arr[0]=90;
}

void func2(int *ptr)
{
    
  for(int i=0;i<=3;i++)
    {
        printf("the nalue of %d element of the array is %d \n", i,*(ptr+i));
    }  
    ptr[0]=8;
        *(ptr+2)=9;
}

void func3(int shubh[2][2])
{
    for (int i = 0; i <= 1; i++)
    {
       for(int j=0;j<=1;j++)
       {
           printf("the value at %d %d ellement of the array is %d",i,j,shubh[i][j]);
       }
       printf("\n");
    }
    
}
int main()
{
   
    int array[]={1,2,3,4};
    int array2[][2]={{1,2},{3,4}};
   // func1(array);
    //func1(array);

      func2(array);
   func2(array);

     //  func3(array2);
}

