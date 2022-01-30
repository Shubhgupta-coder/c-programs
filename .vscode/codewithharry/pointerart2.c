#include<stdio.h>
int main()
{
    int a=2,i;
    int *ptr=&a;
    int arr[]={1,2,3,4,5,6,7};
    int *shubh=&arr[2 ];
    printf("the adress of a %d \n",ptr);
    printf("the adress of a %d  \n",&a);
     printf("%d \n",ptr+1);
   for (int i=0;i<7;i++)
   { 
    printf("the value of %d element of the array is%d is \n", i,arr[i]);
    }
    printf("the adress of 2 element of the array is %d \n",&arr[1]);
  printf("the adress of 2 element of the array is %d \n",(arr +1));

  printf("the value of 2 element of the array is %d \n",arr[1]);
  printf("the value of 2 element of the array is %d \n",*(arr +1));
   printf("the value of 2 element of the array is %d \n",*(&arr[1]));


    printf("the adress of 2 element of tghe array is %d \n",&arr[1]);
    printf("%d",shubh+1);
}


