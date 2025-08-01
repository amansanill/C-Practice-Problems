#include <stdio.h>

int getCharacter(){
    char ch;
    printf("Enter the character: ");
    scanf(" %c", &ch);
    return ch;
}

void checkCharacter(char character){
    if(character >= '0' && character <= '9')
        printf("%c is a Digit", character);
    else
        printf("%c is a Character", character);
}

int main(){
    char character = getCharacter();
    checkCharacter(character);
    return 0;
}