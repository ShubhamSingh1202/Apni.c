/*Write a program to check if a given number is Armstrong number or not*/

#include <stdio.h>
#include <math.h>

int main() {
    int i, j = 0, ld, x = 0, y;

    printf("Enter the number: ");
    scanf("%d", &i);
    y = i;

    while (i != 0) {
        i = i / 10;
        x++;
    }

    i = y; 

   
    while (y != 0) {
        ld = y % 10;
        j = j + (int)pow(ld, x); 
        y = y / 10;
    }

    if (i == j)
        printf("Armstrong Number\n");
    else
        printf("Not Armstrong Number\n");

    return 0;
}
