#include <stdio.h>

int main() {
    int num1, num2;

    printf("enter the inputs of player 1 and player 2 = ");
    scanf("%d %d", &num1, &num2);

    switch(1) {
        case 1:
           
        if (num1 > 3 || num2 > 3) 
        { printf("invalid input"); }
        break;

        else if (num1 > num2) 
        { printf("player 1 wins"); }
        break;

        else if (num2 > num1) 
        { printf("player 2 wins"); }
        break;
            
        else if (num1 == num2) 
        { printf("draw"); }
        break;
    }
    return 0;
}

