#include <stdio.h>
int main()

{
    float price, totalbill;
    int quantity;

    printf("Enter price of one item: ");
    scanf("%f", &price);

    printf("Enter quantity purchased: ");
    scanf("%d", &quantity);

    totalbill = price * quantity;

    printf("Total Bill = %.2f\n", totalbill);
    
    return 0;
}