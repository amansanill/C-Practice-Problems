#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int getRandom(){
    int num1 = rand() % 100;
    int num2 = rand() % 100;
    printf("The random numbers are %d and %d \n", num1, num2);
    return num1 + num2;
}

void displaySum(int sum){
    printf("The sum of the 2 numbers are: %d", sum);
}

int main(){
    srand(time(NULL));
    int sum = getRandom();
    displaySum(sum);
    return 0;
}