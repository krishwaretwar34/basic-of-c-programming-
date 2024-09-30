#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter First number : ");
    scanf("%f",&a);
    printf("Enter Second number : ");
    scanf("%f",&b);
    printf("Enter Third number : ");
    scanf("%f",&c);

    float sum = a+b+c;

    printf("The Average of 3 number is %f",sum/3);

    return 0;

}