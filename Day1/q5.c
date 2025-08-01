#include <stdio.h>
#include <stdlib.h>

void getCharacters(char *ch1,char *ch2){
    printf("Enter the first character: ");
    scanf(" %c", ch1);
    printf("Enter the second character: ");
    scanf(" %c", ch2);
}

int charactersBetween(char ch1, char ch2){
    return abs(ch2-ch1)-1;
}

void displayCount(int count){
    printf("The no.of characters are: %d", count);
}

int main(){
    char ch1,ch2;
    getCharacters(&ch1,&ch2);
    int count = charactersBetween(ch1,ch2);
    displayCount(count);
    return 0;
}