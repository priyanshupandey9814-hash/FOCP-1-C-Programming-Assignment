#include <stdio.h>
int main()
{
    float basicsalary, allowance, bonus, finalsalary;

    printf("Enter basic salary: ");
    scanf("%f", &basicsalary);

    printf("Enter allowance: ");
    scanf("%f", &allowance);

    printf("Enter bonus: ");
    scanf("%f", &bonus);

    finalsalary = basicsalary + allowance + bonus;

    printf("Final Salary = %.2f\n", finalsalary);

    return 0;
}