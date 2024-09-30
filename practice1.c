#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks(0-100) : ");
    scanf("%d", &marks);
    // if (marks >= 0 && marks <= 30){
    //     printf("Fail");
    // }
    // else if (marks >= 30 && marks <= 100){
    //     printf("Pass");
    // }
    // else{
    //     printf("Wrong marks");
    // }

    marks <=30 ? printf("Fail"): printf("Pass");
    return 0;

}