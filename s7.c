
#include<stdio.h>
int main(){
    struct person{
    char name[30];
    int age;
    long long ph;

    }n1;
    printf("Nmae address : %p\n",n1.name);
    printf("age address %p\n",n1.age);
    printf("phone number address %p\n",n1.ph);
    printf("%d",sizeof(struct person));
}
