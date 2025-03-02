#include <stdio.h>

int main() {
    char ch;
    
    printf("Please enter a character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Character is an alphabet.\n");
    } 
    else if (ch >= '0' && ch <= '9') {
        printf("Character is a digit.\n");
    } 
    else {
        printf("Character is a special character.\n");
    }

    return 0;
}
