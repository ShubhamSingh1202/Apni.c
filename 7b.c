/*Write a program to print the largest and smallest number in an
 array*/
 #include <stdio.h>
 int main(){
    int a[100],n;
    printf("enter the how many number you want to enter : ");
    scanf("%d",&n);
    printf("enter the numbers \n");

    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }

    int max=a[0],min=a[0];

    for (int x=0;x<n;x++){
        if (a[x]>max){
            max=a[x];
        }
    }
    for (int b=0;b<n;b++){
        if (a[b]<min){
            min=a[b];
        }
    }
    printf("the largest number is %d\n",max);
    printf("the smallest number is %d",min);


 }