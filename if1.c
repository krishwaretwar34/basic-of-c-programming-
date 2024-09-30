#include <stdio.h>

int main(){
    int number;
    printf("Enter a number : ");
    scanf("%d",&number);
    if (number >= 0){
        printf("number is positve\n");
        if (number % 2==0){
            printf("nubmer is even\n");
        }else {
            printf("odd\n");}

        }else{
            printf("number is negative");
        }
    }