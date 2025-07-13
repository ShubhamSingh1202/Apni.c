/*Write a program to check if a number is prime or not*/

#include<stdio.h>

int main(){
    int a,y;
    printf("Enter the numeber : ");
    scanf("%d",&a);
    if (a==2){
    printf("prime");
    }
    for(int i=2;i<a;i++){
        if(a%i==0){
          y=4;
        }
    }
    if (y==4)
    printf("not prime");
    else
    printf("prime");
    return 0;




}