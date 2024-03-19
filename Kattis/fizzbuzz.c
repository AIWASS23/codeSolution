#include <stdio.h>

int main() {

    int i, j, k;

    //printf("Enter three integers (i, j, k): ");
    scanf("%d %d %d", &i, &j, &k);

    for (int m = 1; m <= k; m++) {
        if (m % i == 0) {
            if (m % j == 0) {
                printf("FizzBuzz\n");
            } else {
                printf("Fizz\n");
            }
        } 
        else if (m % j == 0) {
            printf("Buzz\n");
        } 
        else {
            printf("%d\n", m);
        }
    }
    return 0;
}