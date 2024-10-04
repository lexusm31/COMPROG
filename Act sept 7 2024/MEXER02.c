#include <stdio.h>

int main() {
    float sales, commission, weeklyGrossPay;
    float regularPay = 1000.00;

    printf("Enter weekly sales: ");
    scanf("%f", &sales);

    if (sales > 5000.00) {
        commission = sales * 0.097;
    } else {
        commission = 250.00;
    }
    weeklyGrossPay = regularPay + commission;

    printf("Regular Pay: %.2f\n", regularPay);
    printf("Sales: %.2f\n", sales);
    printf("Commission: %.2f\n", commission);
    printf("Weekly Gross Pay: %.2f\n", weeklyGrossPay);

    return 0;
}
