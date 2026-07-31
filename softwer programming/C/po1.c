#include<stdio.h>

struct emp{
    int id;
    long long contact;
    char name[50];
    char department[];
};
    void empinput(){
       struct emp a; 
       printf("Enter Employee Id: ");
       scanf("%d,\n",&a.id);
       printf("Enter Employee Name: ");
       scanf("%s\n",&a.name);
       printf("Enter Employee Contact Number: ");
       scanf("%lld\n",&a.contact);
       printf("Enter Employee Department: ");
       scanf("%s\n",&a.department);

    }