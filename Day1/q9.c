#include <stdio.h>

int getNumber(){
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    return n;
}

void getPower(int num){
    int result = 1 << num;
    printf("2^%d = %d", num, result);
}

int main(){
    int num = getNumber();
    getPower(num);
    return 0;
}