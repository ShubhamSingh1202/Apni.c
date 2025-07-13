/*Write a function to find square root of a number*/

#include <stdio.h>
#include<math.h>
float squareroot(float);

int main(){

float x,y;
printf("Enter the no. : ");
scanf("%f",&x);

y=squareroot(x);
printf("The Square root is %f",y);

}

float squareroot(float x){
    float y;
    y=pow(x,0.5);
    return (y);


}