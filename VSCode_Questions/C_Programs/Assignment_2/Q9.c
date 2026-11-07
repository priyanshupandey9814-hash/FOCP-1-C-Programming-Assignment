#include <stdio.h>

int main() {
    
    int marks;
    int attendance;

    printf("Enter Marks: ");
    scanf("%d", &marks);
    
    printf("Enter Attendance: ");
    scanf("%d", &attendance);

    if (marks >= 90 && attendance >= 70) 
    { printf("Special Scholarship\n"); } 
    
    else if (marks >= 75 && attendance >= 75) 
    { printf("Eligible\n"); } 
    
    else 
    { printf("Not Eligible\n"); }

    return 0;
}
