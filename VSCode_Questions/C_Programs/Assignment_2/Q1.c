#include <stdio.h>

int main() {
    int n ;
    printf("enter the integer - " );
    scanf("%d" , &n);

if (n%2 ==0 && n%5==0) 
{printf ("Special\n"); }

else if (n%2 == 0)
{printf ("Even\n"); }

else if (n%5==0)
{printf ("Odd\n"); }

else
{printf ("odd/other\n");}

    return 0;
}