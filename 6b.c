/*Write a program in C to print the elements of an
 array in reverse order*/

 #include <stdio.h>
 int main(){
    int a[9]={1,2,3,4,5,6,7,8,9};
    printf("reverse order");
    for(int i=1;i<=9;i++){
        printf(" %d ",a[9-i]);
    }

 }