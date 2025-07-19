/*Write a program to check if the given number is a
 natural number.*/
 #include <stdio.h>
 #include <string.h>

int main() {
    char num[100];
    int count=0;
    int value;

    printf("Enter a number: ");
    fgets(num,100,stdin);
    num[strcspn(num,"\n")] = '\0';

    for(int i=0; num[i];i++){
        if (num[i]=='.'||num[i=='-'])
        {
            count++;
        }
        value =value*10+num[i];
    }
if (count==0)
{
  if (value >= 1) {
        printf("%s is a natural number.\n", num);
    } else {
        printf("%s is NOT a natural number.\n", num);
    }
}else
printf("Decimal number/Not Natural number");

  

    return 0;
}
