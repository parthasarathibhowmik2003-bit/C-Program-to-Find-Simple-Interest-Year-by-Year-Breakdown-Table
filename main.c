#include <stdio.h>

int main() {
    float principal, rate, time;

    printf("Enter Principal amount : ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest : ");
    scanf("%f", &rate);
    printf("Enter Time (in years)  : ");
    scanf("%f", &time);

    float annualInterest = (principal * rate) / 100;

    printf("\n--------------------------------------------\n");
    printf(" Year  |  Interest  |  Total Amount\n");
    printf("--------------------------------------------\n");

    for (int year = 1; year <= (int)time; year++) {
        float totalAmount = principal + (annualInterest * year);
        printf("  %3d  |  %8.2f  |  %12.2f\n",
               year, annualInterest, totalAmount);
    }

    printf("--------------------------------------------\n");
    printf("Total SI = %.2f | Final Amount = %.2f\n",
           annualInterest * time, principal + annualInterest * time);
    printf("--------------------------------------------\n");

    return 0;
}
```

**Sample Output:**
```
Enter Principal amount : 5000
Enter Rate of Interest : 8
Enter Time (in years)  : 5

--------------------------------------------
 Year  |  Interest  |  Total Amount
--------------------------------------------
    1  |    400.00  |      5400.00
    2  |    400.00  |      5800.00
    3  |    400.00  |      6200.00
    4  |    400.00  |      6600.00
    5  |    400.00  |      7000.00
--------------------------------------------
Total SI = 2000.00 | Final Amount = 7000.00
--------------------------------------------
