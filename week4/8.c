#include <stdio.h>

int main() {
    char ch;
    
    printf("Please enter a character: ");
    scanf("%c", &ch);

   if (ch == 'A' || ch == 'E'||ch=='I'|| ch=='O'|| ch=='U' || ch == 'a' || ch == 'e'||ch=='i'|| ch=='o'|| ch=='u') {
        printf("Character is a vowel.\n");
    } 
    else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        printf("Character is an constant.\n");
    } 
    else {
        printf("Character is not alphabet.\n");
    }

    return 0;
}
