/* Write a program to read a string from a file &
 output to the user.*/

 #include <stdio.h>
 int main(){
    FILE *f;
    f=fopen("new.txt","r");
    char s[100];

    if(f!=NULL){
        while (fgets(s,100,f))
        {
            printf("%s",s);
        }
    
    }
    else{
    printf("No File");
    }

    fclose(f);
    f=NULL;
    
 }