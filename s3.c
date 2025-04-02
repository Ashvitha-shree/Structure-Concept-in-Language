
#include<stdio.h>
#include<string.h>
int main(){
struct person{
    int age;
    char name[100];
    struct DOB{
       short day_number;
       char month_name[20];
       int year;


    }d1;
};
    struct person p1;
    printf("enter the age");
    scanf("%d",&p1.age);
    printf("Enter the name");
    char name1[100];
    strcpy(p1.name,gets(name1));
    printf("enter the day");
    scanf("%hd",&p1.d1.day_number);

    strcpy(p1.d1.month_name,"aug");
    printf("enter the year");
    scanf("%d",&p1.d1.year);

    printf("person Details \n");
    printf("Age :%d\n",p1.age);
    printf("Name :%s\n",p1.name);
    printf("DOB :%hd- %s - %d",p1.d1.day_number,p1.d1.month_name,p1.d1.year);
    return 0;

}
