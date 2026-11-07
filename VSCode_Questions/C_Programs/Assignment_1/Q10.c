#include <stdio.h>
int main()
{
    int productID, quantity;
    float price, discountpercentage, subtotal, discountamount, finalamount;
   
    printf("Enter Product ID: ");
    scanf("%d", &productID);

    printf("Enter Product price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    printf("Enter Discount percentage: ");
    scanf("%f", &discountpercentage);

    subtotal = price * quantity;

    discountamount = (subtotal * discountpercentage) / 100.0;

    finalamount = subtotal - discountamount;

   
    printf("Product ID       : %d\n", productID);
    printf("Subtotal         : %.2f\n", subtotal);
    printf("Discount amount  : %.2f\n", discountamount);
    printf("Final payable    : %.2f\n", finalamount);
  

    return 0;
}