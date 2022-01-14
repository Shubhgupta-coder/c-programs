#include<stdio.h>
int main()
{
    int marks[7]={1,2,3,4,5,6,7};

    
    for (int  i = 0; i < 7; i++)
    {
        printf("the value of %d elwment of the array is %d \n",i , marks[i]);
    }
      
      int name[][4]={{1,2,3,4},{5,6,7,8}};

      for (int i = 0; i < 2; i++)
      {
         for (int j = 0; j < 4; j++)
         {
            printf("%d",name[i][j]);
         }
         printf("\n");
      }
         return 0;
}
          
      