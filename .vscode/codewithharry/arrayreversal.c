#include<stdio.h>

void arrayreverse(int array[])
{
    int c;
    for(int i=0;i<4;i++)
    {
        c=array[i];
        array[i]=array[7-i];
        array[7-i]=c;
    }
}
    int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    printf("before reversal \n");
    for(int i=0;i<8;i++)
    {
        printf("the value at %d element of the array is %d \n",i,arr[i]);
    }
    printf("after rebersal \n");
            arrayreverse(arr);
        for(int i=0;i<8;i++)            
        {       
             printf("the value at %d element of the array is %d\n",i,arr[i]);
        }      

}