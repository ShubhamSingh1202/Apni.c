/* Write a program to convert all lowercase vowels to
 uppercase in a string*/
 # include <stdio.h>
 #include<string.h>

 int main(){
    char s[100];
    printf("Eneter the string : ");
    fgets(s,sizeof(s),stdin);
    for(int i=0;s[i];i++){
    if(s[i]=='a')
        s[i]='A';  
    if(s[i]=='e')
        s[i]='E';
    if(s[i]=='i')
        s[i]='I';
    if(s[i]=='o')
        s[i]='O';
    if(s[i]=='u')
        s[i]='U';
    }
    printf("%s",s);
 }