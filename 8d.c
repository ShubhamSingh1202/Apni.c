/*Write a program to replace lowercase letters with
 uppercase & vice versa in a string*/
 #include<stdio.h>
 int main(){
    char s[100];
    printf("Enter the string : ");
    fgets(s,100,stdin);
    for (int i=0;s[i];i++){
        if(s[i]>='a'&&s[i]<='z'){
            s[i]=s[i]-32;//i am using the ASCII code
        }
        else if(s[i]>='A'&&s[i]<='Z'){
        s[i]=s[i]+32;

        }
    }
    printf("the new string is %s",s);

 }