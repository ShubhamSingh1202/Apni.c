/*Write a program to print prime numbers in a range.
*/

#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;

    printf("Enter ower limit: ");
    scanf("%d", &lower);

    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    for (i = lower; i <= upper; i++) {
  
        for (j = 2; j <= i; j++) {
            if (i % j == 0) {
                break;
            }
        }

        if (i==j)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
