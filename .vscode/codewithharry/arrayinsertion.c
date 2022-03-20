#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }
}

int insertion(int arr[],int n1,int ele, int capacity, int indexno)
{
    if(n1>=capacity)
    {
        return -1;
    }

    for (int i = n1-1; i>=indexno; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[indexno]=ele;
    return 1;
}

int main()
{
    int arr[20]={1,2,3,4,5};
    int size=5,element,index;
    printf("enter the element you want to insert");
    scanf("%d",&element);
    printf("enter  at which index you want to insert this element");
    scanf("%d",&index);
    printf("the element of array before insertion \n");
    display(arr,size);
    insertion(arr,size,element,20,index);
    size++;
      printf("the element of array after insertion \n");
    display(arr,size);
     
}