#include <stdio.h>

int main() {
    int n;
    char s[100]; // Creates a string to hold the text
    
    scanf("%d", &n);
    scanf(" %[^\n]", s); // Reads the string including spaces
    
    printf("%d\n", n * 2);
    printf("%s\n", s);
    
    return 0;
}
