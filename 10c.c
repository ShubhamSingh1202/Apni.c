/*Format the information of 5 students (name,
 marks, cgpa, course) in a table like structure in a file*/

 #include<stdio.h>
 #include <string.h>
 #include<stdlib.h>

 
 
 typedef struct{
    int sno;
    char name[50];
    int marks;
    float sgpa;
    char course[50];        
 }Student;
 void inputdata(Student *,int );
 
 int main(){
    printf("Enter the no. of data want to add : ");
    int n;
    scanf("%d",&n);
    Student s[n];
    FILE *f;
    f=fopen("student data.txt","a+");
    fprintf(f,"%-5s %-15s %-10s %-10s %-10s\n","S No.","Name","Marks","SGPA","Course");
    fprintf(f,"---------------------------------------------------------------\n\n");
    if(f==NULL){
        printf("File not found");
    }
    else{
    for(int i=0;i<n;i++){
        inputdata(&s[i],i);
        fprintf(f,"%-5d %-15s %-10d %-10f %-10s\n",s[i].sno,s[i].name,s[i].marks,s[i].sgpa,s[i].course);
        system("cls");
        
    }
    fclose(f);


    }



 }


void inputdata(Student *p,int i){
    p->sno=i+1;
    printf("----------%d----------------\n",p->sno);
    getchar();
    
    printf("Enter the Name of Student : ");
    fgets(p->name,50,stdin);
    p->name[strcspn(p->name,"\n")]='\0';

    printf("Enter the marks : ");
    scanf("%d",&p->marks);
    getchar();

    printf("Enter the sgpa : ");
    scanf("%f",&p->sgpa);
    getchar();

    printf("Enter the course : ");
    fgets(p->course,50,stdin);
    p->course[strcspn(p->course,"\n")]='\0';
}