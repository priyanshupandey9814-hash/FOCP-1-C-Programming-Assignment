#include <stdio.h>

int main() {
    int pin = 2222;
    int amount = 5110;
    int balance = 2340;

  
    if (pin == 1234) {
          printf("Withdrawal Successful\n");
    } 
    else if (amount <= 0 || amount % 100 != 0) {
        printf("Invalid Amount\n");
    } 
    else if (amount > balance) {
        printf("Insufficient Balance\n");
    } 
    else {
        printf("Invalid PIN\n");
    }

    return 0;
}
