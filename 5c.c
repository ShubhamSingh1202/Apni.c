/* Write a function to print "Hot" or "Cold" depending
 on the temperature user enters.*/

 #include<stdio.h>

 void temphotcold(float);
 int main(){
    float x;
    printf("Enter the Temperature : ");
    scanf("%f",&x);
    temphotcold(x);

 }
 void temphotcold(float x){
    if(x>30.0)
    printf("Its too hot outside ");
    else
    printf("Its cold outside ");
    
 }