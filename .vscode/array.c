#include <stdio.h>

void func(int arr[2][2])
{
    int i,j;
    for(int i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("the value at %d,%d is %d \n",i,j,arr[i][j]);
        }
    }
}

int main()
{
    int arr[2][2]={{1,2},{2,3}};
    func(arr);
    return 0;
}