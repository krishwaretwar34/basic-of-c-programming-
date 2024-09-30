#include <stdio.h>

int main(){
    int length,breath;
    printf("Enter Length of a rectangle\n");  //for output the value in strings
    scanf("%d",&length);                      // input the value of length 

    printf("Enter breath of a rectangle\n");
    scanf("%d", &breath);

    printf("The perimeter of a rectangle is %d", 2*(length+breath));  //This is for formula segmentaiton
    return 0;


}