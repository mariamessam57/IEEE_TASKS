#include <stdio.h>
#include <string.h>
#define SIZE 10

void reversed(char *);

int main() {
    char str[SIZE];

    printf("Enter a string: ");
    fgets(str, SIZE, stdin);

    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    reversed(str);
    
    printf("Reversed string: %s\n", str);

    return 0;
}

void reversed(char *arr) {
    char *start = arr;
    char *end = arr + strlen(arr) - 1;
    
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}
