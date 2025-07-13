/* Write a program to check if given character is digit
 or not.*/
#include<stdio.h>
int main(){
char i;
printf("Enter the character ");
scanf("%c",&i);

if(i>='0'&&i<='9')
    printf("digit");

else
    printf("not digit");

}