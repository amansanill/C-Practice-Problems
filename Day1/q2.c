#include <stdio.h>
#define PI 3.14159

float getRadius() {
    float r;
    printf("Enter the radius: ");
    scanf("%f", &r);
    return r;
}

float calculateArea(float radius){
    return PI*radius*radius;
}

void displayArea(float area){
    printf("Area of the circle: %.2f", area);
}

int main(){
    float radius = getRadius();
    float area = calculateArea(radius);
    displayArea(area);
    return 0;
}