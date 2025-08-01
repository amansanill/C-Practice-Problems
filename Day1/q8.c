#include <stdio.h>

int getYear(){
    int n;
    printf("Enter the year: ");
    scanf("%d", &n);
    return n;
}

void checkLeap(int year){
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        printf("It is a leap year");
    else
        printf("Not a leap year");
}

int main(){
    int year = getYear();
    checkLeap(year);
    return 0;
}