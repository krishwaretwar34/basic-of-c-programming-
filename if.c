#include "stdio.h"

int main(){
    int age;
    printf("Enter the age : ");
    scanf("%d",&age);
    if(age>=18){
        printf("He beacame Adult\n");
        printf("He can drive a car\n");
        printf("He can do voting\n ");
    }
    else if (age >13 && age <18){
        printf("He is a Teenager");
    }
    else{
        printf("He is child");
    }
    return 0;

}