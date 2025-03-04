#include <stdio.h>

int isPalindrome(int num);
int reverseNumber(int num, int rev);

int main() {
    int num;
    
    printf("please enter number= ");
    scanf("%d", &num);

    if (isPalindrome(num)) {
        printf("number %d is palindrome\n", num);
    } else {
        printf("number %d is not palindrome\n", num);
    }

    return 0;
}

int reverseNumber(int num, int rev) {
    if (num == 0) 
        return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

int isPalindrome(int num) {
    return (num == reverseNumber(num, 0));
}
