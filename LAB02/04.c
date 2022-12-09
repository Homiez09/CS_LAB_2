#include <stdio.h>
#include <stdlib.h>

void main() {
    double salary, tax;
    char salary_str[20];

    fgets(salary_str, 20, stdin);
    salary = atof(salary_str);

    if (salary >= 0) {
        if (salary >= 300000) { // > 300k
            tax += 15000;
            salary -= 300000;
            tax += salary * 0.1;
        } else { // < 100k
            tax = salary * 0.05;
        }
        printf("%.2f", tax);
    } else {
        printf("Error: Salary must be greater or equal to 0");
    }
}