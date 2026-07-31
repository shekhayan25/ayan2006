#include <stdio.h>

struct emp
{
    int id;
    long contact;
    char name[50];
    char department[50];
};
void emp(){
    struct emp a;
    printf("Enter Employee Id: ");
    scanf("%d\n",&a.id);
    printf("Enter Employee Name: ");
    scanf("%s\n",&a.name);
    printf("Enter Employee Contact: ");
    scanf("%ld\n",&a.contact);
    printf("Enter Employee Department: ");
    scanf("%s\n",&a.department);
}
void showdata(struct emp a){
    printf("id%d",&.id);
}
