#include <stdio.h>

char toLower(char ch){
    if (ch >= 'A' && ch<='Z'){
        return ch+32;
    }
    return ch;
}

int main() {
    char ch;

    printf("Enter a character:");
    scanf("%c", &ch);

    char lower = toLower(ch);
    printf("Lowercase:%c", lower);

    return 0;
}