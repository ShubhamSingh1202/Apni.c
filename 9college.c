/*Make a system that can store information of all
 **Teachers**, teachers & staff of your college in the form
 of structures.*/
 #include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

 typedef struct 
 {
    char name[50];
    int rollno;
    char course[50];
    char year[50];
 }Student;
  typedef struct 
 {
    char name[50];
    int id;
    char subject[50];
    char depart[50];
 }Teacher;
  typedef struct 
 {
    char name[50];
    int id;
    char position[50];
    
 }staff;
 
 void instudent(Student *);
 void inteacher(Teacher *);
 void instaff(staff *);
 void outstudent(Student );
 void outteacher(Teacher );
 void outstaff(staff );


 int main(){
    int choice;
    int scount=0,tcount=0,stcount=0;
    Student s[100];
    Teacher t[100];
    staff st[100];
   while(1){
    printf("\n\n");
    printf("1. Add Student details\n");
    printf("2. Add Teacher details\n");
    printf("3. Add Staff details\n");
    printf("4. Display Student details\n");
    printf("5. Display Teacher details\n");
    printf("6. Display Staff details\n");
    printf("7. Exit\n");
    printf("Choose any option : ");
    scanf("%d",&choice);
    getchar();
    system("cls");

    switch(choice){
        case 1:
        instudent(&s[scount++]);
        system("cls");
        break;

        case 2:
        inteacher(&t[tcount++]);
        system("cls");
        break;

        case 3:
        instaff(&st[stcount++]);
        system("cls");
        break;

        case 4:
        if (scount == 0) {
            printf("No student data entered yet.\n");
        } else {
            for (int i = 0; i < scount; i++) {
             printf("\n--- Student %d ---\n", i + 1);
                outstudent(s[i]);
            }
        }
        printf("\nPress Enter to continue...");
        getchar();
        break;

        case 5:

        if (tcount == 0) {
            printf("No Teacher data entered yet.\n");
        } else {
            for (int i = 0; i < tcount; i++) {
             printf("\n--- Teacher %d ---\n", i + 1);
                outteacher(t[i]);
            }
        }
        printf("\nPress Enter to continue...");
        getchar();
        break;

        case 6:
        if (stcount == 0) {
            printf("No Staff data entered yet.\n");
        } else {
            for (int i = 0; i < stcount; i++) {
             printf("\n--- Staff %d ---\n", i + 1);
                outstaff(st[i]);
            }
        }
        printf("\nPress Enter to continue...");
        getchar();
        break;

        case 7:
        exit (0);

        default :
        printf("Invalid input");
    }

   }

 }

 void instudent(Student *s){
    printf("Enter the Student Name        : ");
    fgets(s->name,50,stdin);
    s->name[strcspn(s->name,"\n")]='\0';

    printf("Enter the Student roll number : ");
    scanf("%d",&s->rollno);
    getchar();

    printf("Enter the Student course      : ");
    fgets(s->course,50,stdin);
    s->course[strcspn(s->course,"\n")]='\0';

    printf("Enter the Student year        : ");
    fgets(s->year,50,stdin);
    s->year[strcspn(s->year,"\n")]='\0';
 }
 void inteacher(Teacher *s){

    printf("Enter the Teacher Name       : ");
    fgets(s->name,50,stdin);
    s->name[strcspn(s->name,"\n")]='\0';

    printf("Enter the Teacher id         : ");
    scanf("%d",&s->id);
    getchar();

    printf("Enter the Teacher subject    : ");
    fgets(s->subject,50,stdin);
    s->subject[strcspn(s->subject,"\n")]='\0';

    printf("Enter the Teacher department : ");
    fgets(s->depart,50,stdin);
    s->depart[strcspn(s->depart,"\n")]='\0';
 }
 void instaff(staff *s){
    printf("Enter the Staff Name     : ");
    fgets(s->name,50,stdin);
    s->name[strcspn(s->name,"\n")]='\0';

    printf("Enter the Staff id       : ");
    scanf("%d",&s->id);
    getchar();

    printf("Enter the Staff position : ");
    fgets(s->position,50,stdin);
    s->position[strcspn(s->position,"\n")]='\0';
 }
 void outstudent(Student s){
    printf("Student Name : %s\n",s.name);
    printf("Roll Number  : %d\n",s.rollno);
    printf("Course       : %s\n",s.course);
    printf("Year         : %s\n",s.year);

 }
 void outteacher(Teacher s){
    printf("Teacher Name : %s\n",s.name);
    printf("id           : %d\n",s.id);
    printf("Subject      : %s\n",s.subject);
    printf("Department   : %s\n",s.depart);
 }
 void outstaff(staff s){
    printf("Staff Name   : %s\n",s.name);
    printf("id           : %d\n",s.id);
    printf("Position     : %s\n",s.position);
 }
