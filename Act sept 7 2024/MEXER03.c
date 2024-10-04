#include <stdio.h>

int main() {
    float consumption, excess, bill, final_bill;
    float base = 25;
    float rate = 50;
    float tax = 0.085;
    
    printf("Enter kilowatt-hour consumption: ");
    scanf("%f", &consumption);

    if (consumption > base) {
        excess = consumption - base;
        bill = excess * rate;
    }

    final_bill = bill + (bill * tax);

    printf("Your consumption: %.2f\n", consumption);
    printf("Excess: %.2f\n", excess);
    printf("Total bill: %.2f\n", final_bill);

    return 0;
}

