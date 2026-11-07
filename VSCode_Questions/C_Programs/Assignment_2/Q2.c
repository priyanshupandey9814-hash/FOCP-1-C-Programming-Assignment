#include <stdio.h>
int main()
{
    int a, b, c;

    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (b > a && a > c || c > a && a > b) 
    { printf("%d\n", a); }
   
    else if (a > b && b > c || c > b && b > a) 
    { printf("%d\n", b); }
   
    else { printf("%d\n", c); }

    return 0;
}
