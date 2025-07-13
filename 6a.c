/* Implement a void minmax(int *a, int *b, int *min, int *max) function 
that takes two integer pointers a and b as input and assigns the 
smaller value to min and the larger value to max using call by 
reference. Write a main function to test it with different values.*/

#include<stdio.h>
void minmax(int *a, int *b, int *min, int *max);
int main(){
    int a,b,min,max;
    printf("Enter any two numbers : \n");
    scanf("%d%d",&a,&b);
    minmax(&a,&b,&min,&max);
    printf("The Smaller number is %d\n",min);
    printf("The larger number is %d\n",max);


}
void minmax(int *a, int *b, int *min, int *max){
    if (*a>*b){
    *max=*a;
    *min=*b;
    }
    else{
    *max=*b;
    *min=*a;
    }

}