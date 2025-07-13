/*write a program to remove blank spaces in a string.*/
#include<stdio.h>
int main(){
    char s[100];
    printf("enter the string : ");
    fgets(s,100,stdin);
    for(int i=0;s[i];i++){
        if(s[i]==' '){
        continue;
        }
        printf("%c",s[i]);
        
    }
    
}