#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    printf("Enter three integers: \n");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 > num2) {
        largest = num1;
    } else {
        largest = num2;
    }
    if (num3 > largest) {
        largest = num3;
    }
    printf("The largest number is: %d\n", largest);  
    
    return 0;
}
