/*Allocate memory for 500 integers using calloc &
 then store first 500 natural numbers in that space*/

 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>

 int main(){
    int *a;
    
    a = (int*)calloc(500,sizeof(int));

    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for(int i=0;i<500;i++){
        a[i]=i+1;
    }
    for(int i=0;i<500;i++){
        printf("%d ",a[i]);
    }
    free(a);



 }