#include <stdio.h>

int getNumber(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    return n;
}

void calculatingNum(int num){
    if (num%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
}

int main(){
    int num = getNumber();
    calculatingNum(num);
}