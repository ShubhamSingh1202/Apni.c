/*Write a program to check if the given number is a
 natural number.*/
 #include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num >= 1) {
        printf("%d is a natural number.\n", num);
    } else {
        printf("%d is NOT a natural number.\n", num);
    }

    return 0;
}
