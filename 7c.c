/*Write a program to insert an element at the end of
 an array*/
#include <stdio.h>
int main(){
int a[100],n,m;
    printf("enter the how many number you want to enter : ");
    scanf("%d",&n);
    printf("enter the numbers \n");

    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    printf("Enetr the number you want insert at end ");
    scanf("%d",&m);

    a[n]=m;
     printf("after the intering numer\n");
    
    for (int x=0;x<n+1;x++){
        printf("%d\n",a[x]);
    }
    
}