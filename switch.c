#include "stdio.h"

int main(){
    int day;
    printf("Enter the day(1-7) : "); // mon --> 1, tue --> 2 , wed -->3 ...
    scanf("%d",&day);
    switch (day)
    {
    case 1 : printf("monday \n");
    break;
    case 2 : printf("tuesday \n");
    break;
    case 4 : printf("wednesday\n");
    break;
    case 5 : printf("thursday\n");
    break;
    case 6 : printf("friday\n");
    break;
    case 7 : printf("Sunday \n");
    break;
    
    default: printf("not a valid day");
    }
    return 0;

}