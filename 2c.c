/*Write a program to print the smallest number of two.*/

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a < b) {
        printf("The smallest number is: %d\n", a);
    } else if (b < a) {
        printf("The smallest number is: %d\n", b);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
