#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    double gross_sales, salary;
    printf("Enter sales in dollars(-1 to end): ");
    scanf("%lf", &gross_sales);

    while (gross_sales != -1) {
        salary = 200 + gross_sales * 0.09;
        printf("Salary is: $%.2f\n", salary);

        printf("\nEnter sales in dollars(-1 to end): ");
        scanf("%lf", &gross_sales);
    }
    return 0;
}