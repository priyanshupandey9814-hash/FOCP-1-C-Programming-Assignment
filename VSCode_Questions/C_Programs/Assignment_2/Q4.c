#include <stdio.h>

int main() {
    float a , b , c;

  printf("enter the three angles = ");
   scanf("%f %f %f" , &a,&b,&c);

   if(a+b+c != 180 || a==0 || b == 0 || c ==0)
    {printf("invalid");}
    else if(a<90 && b<90 && c<90) 
    {printf ("acute angle");}

 else if(a==90 || b ==90 || c ==90)
 {printf("right angle");}

  else{printf("obtuse angle");}

    return 0;
}