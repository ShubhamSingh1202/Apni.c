/*Write a function to find sum of digits of a number*/
#include <stdio.h>

int sumofdigits(int);
int main(){
    int x, sum;
    printf("Enter the Number : ");
    scanf("%d",&x);
    sum=sumofdigits(x);
    printf("Sum of the digits is %d",sum);


}
int sumofdigits(int x){
    int sum=0;
    while (x!=0){
        int ld=x%10;
            sum= sum+ld;
            x/=10;
    }
    return (sum);

}
