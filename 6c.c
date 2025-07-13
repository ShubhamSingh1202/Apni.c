/* Write a program in C to print all the letters in english
 alphabet using a pointer*/
 #include<stdio.h>
 int main(){
    char a;
    char *x;
    x=&a;
    for (int i=0;i<26;i++){
        *x=65+i;
        printf(" %c ",a);


    }
 }