/* Write a program to calculate perimeter of rectangle.
 Take sides, a & b, from the user.*/

 #include<stdio.h>
 #include<conio.h>
 #include<stdlib.h>
 #include<math.h>
 #include<time.h>
 int main(){
    int a,b,p;
    printf("enter the side of the rectangle");
    scanf("%d%d",&a,&b);
    p=2*(a+b);
    printf("the perimeter of rectangle= %d",p);


 }