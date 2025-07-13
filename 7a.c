/*. In an array of numbers, find how many times does
 a number 'x' occurs.*/

 #include<stdio.h>
 #include <stdlib.h>
 int main(){
 int a[100],n,x=0,s;
 printf("enter the how many number you want to enter : ");
 scanf("%d",&n);
 printf("enter the numbers\n ");
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 printf("Enter the no. you want to check ");
 scanf("%d",&s);
 
 for(int c=0;c<n;c++){
    if(a[c]==s){
      x++;
    }

 }
 if(x==0)
 printf("Number of time %d have occured %d times",s,x);
 else
 printf("Number of time %d have occured %d times",s,x);

 }