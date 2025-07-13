/* Make your own pow function*/
#include<stdio.h>

int powfxn(int , int );
int main(){
    int a,b,c;
    printf("Enter the base value : ");
    scanf("%d",&a);
    printf("Enter the exponent : ");
    scanf("%d",&b);
    c = powfxn(a,b);
    printf ("%d to the power %d is %d",a,b,c);

}
int powfxn(int a, int b){
    int c=1;
    for(int i=1;i<=b;i++){

        c=c*a;
    }
    return c;
}