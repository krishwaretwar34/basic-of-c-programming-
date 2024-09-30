#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the first number :  ");
    scanf("%d", &a);

    printf("Enter Second number : ");
    scanf("%d", &b);

    printf("Enter Third number : ");
    scanf("%d", &c);

    if(a*a*a+b*b*b+c*c*c==a,b,c){
        printf("Armstrong Number");
    }
    else { printf("Not Armstrong Number");
    }
    
}