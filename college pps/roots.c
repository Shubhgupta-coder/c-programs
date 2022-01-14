#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,discriminant,root1,root2,realpart,imaginarypart;
    printf("enter the cofficient of a,b,c");
    scanf("%f %f %f",&a,&b,&c);
    discriminant=b*b-4*a*c;

    if (discriminant>0)
    {
        root1= (-b+ sqrt(discriminant))/(2*a);
        root2= (-b-sqrt(discriminant))/(2*a);
        printf("root1= %.2f and root2= %.2f",root1,root2);
     }

     // condition for real and equal roots
     else if(discriminant==0)
     {
         root1=root2=-b/(2*a);
         printf("root1=root2=%.2f %.2f,root1");
     }
     // condition for imaginary roots
     else{
            realpart=-b/(2*a);
            imaginarypart=sqrt(-discriminant)/(2*a);
            printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi",realpart,imaginarypart,realpart,imaginarypart);
     }
     return 0;
}

    