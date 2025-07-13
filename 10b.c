/* a. Replace the data in file of Q(a) with the number of
 vowels in the string*/
 #include<stdio.h>
 int main(){
    FILE *f;
    f=fopen("new.txt","a+");
    char m[1000];
    int count=0;
    if (f!=NULL)
    {
        while (fgets(m,1000,f))      
        {
            for (int i = 0;m[i];i++) 
            {
                if(m[i]=='a'||m[i]=='e'||m[i]=='i'||m[i]=='o'||m[i]=='u'||m[i]=='A'||m[i]=='E'||m[i]=='I'||m[i]=='O'||m[i]=='U')
                {count++;}
            }
        }
        
    }
    else{
    printf("NO FILE");
    }
    fclose(f);

    f=fopen("new.txt","a");
    fprintf(f,"\n%d",count);
    fclose(f);
    f=NULL;
    printf("number of vowels are %d",count);
    
 }