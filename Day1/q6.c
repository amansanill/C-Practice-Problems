#include<stdio.h>

float getCelsius(){
    float c;
    printf("Enter the temp in celsius:");
    scanf("%f", &c);
    return c;
}

float calculateFarenheit(float celcius){
    return (celcius * 9 / 5.0) + 32;
}

void displayTemp(float Farenheit){
    printf("The temp in farenheit is: %f", Farenheit);
}

int main(){
    float celcius = getCelsius();
    float Farenheit = calculateFarenheit(celcius);
    displayTemp(Farenheit);
}