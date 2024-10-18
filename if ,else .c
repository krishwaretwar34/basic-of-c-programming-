Check if number is positive

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("The number is positive.\n");
    }
    return 0;
}




   Check the number is odd or even 

# include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    
    if (num % 2==0){
        printf("the number is even.\n");
    } else {
        printf("the number is odd.\n");
    }
    return 0;
    
    }


         Find the largest two number 

#include<stdio.h>
int main(){
    int a,b;
    printf("enter the two number:");
    scanf("%d%d",&a,&b);
    
    if (a>b){
        printf("%d is the largest number:\n", a);
    } else{
        printf("%d is the larget number\n", b);
        
    }
    }
  


         Check if person is eligible for vote


#include<stdio.h>
int main (){
    int age;
    printf("enter your age ");
    scanf("%d",&age);
    
    if (age>=18){
        printf("you are eligible for vote \n");
    } else{ 
        printf("you are not eligible for vote \n");
    }
    return 0;
    }


   Check if number is multiple of 3 

#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 3 == 0) {
        printf("The number is a multiple of 3.\n");
    } else {
        printf("The number is not a multiple of 3.\n");
    }
    return 0;
}

