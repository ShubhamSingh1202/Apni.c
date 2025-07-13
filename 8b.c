/*Write a program to print the highest frequency
 character in a string.
 high frequency means that appeared maximum times in string*/

 #include<stdio.h>
 #include<string.h>
 int main(){
    char s[100],maxchar,maxchar2;
    int a[100],maxvalue=0,maxvalue2=0;

    printf("Enter the string : ");
    fgets(s,100,stdin);
int x=0;
    for(char c=0;s[c];c++){
      x=0;
      for(int i=0;s[i];i++){
         if (s[i]==s[c])
         x++; 
      }
      if (maxvalue<x){
         maxvalue=x;
         maxchar=s[c];
      }


    }
    printf("The highest frequency character is %c\n",maxchar);
    printf("The highest frequency is %d\n",maxvalue);
   
 }