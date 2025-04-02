#include<stdio.h>
struct student{
      int stuid;
      char name[30];
      char dept [10];

};
int main(){
     int n;
     printf("Enter the size");
     scanf("%d",&n);
     struct student stud[n];
     for (int i=0;i<n;i++){
        printf("Enter the Student id");
        scanf("%d",&stud[i].stuid);
        printf("Enter the Student name");
        scanf("%s",&stud[i].name);
        printf("Enter the Student department");
        scanf("%s",&stud[i].dept);
        printf("student %d completed\n\n",i+1);
     }

     for (int i=0;i<n;i++){
        printf("Student id %d\n",stud[i].stuid);

        printf("Student name %s\n",stud[i].name);

        printf(" Student id %s\n",stud[i].dept);

     }

 return 0;
}
