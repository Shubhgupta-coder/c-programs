#include<stdio.h>
int main()
{
    FILE *ptr=NULL;
    char str[64]="wow this is awesome";
    // for reading//
   ptr=fopen("myfile.txt","r");
    fscanf(ptr,"%s",str);
    printf("%s",str);

   // **  for writing //
  // ptr=fopen("myfile.txt","a");
    //fprintf(ptr,"%s",str);


}