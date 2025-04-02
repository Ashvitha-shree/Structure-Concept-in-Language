
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
    p1.age=20;
    strcpy(p1.name,"ram");
    p1.d1.day_number=1;
    strcpy(p1.d1.month_name,"aug");
    p1.d1.year=2006;
    printf("person Details \n");
    printf("Age :%d\n",p1.age);
    printf("Name :%s\n",p1.name);
    printf("DOB :%hd- %s - %d",p1.d1.day_number,p1.d1.month_name,p1.d1.year);
    return 0;

}
