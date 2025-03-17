#include<stdio.h>
#include<string.h>
#define size 100
int length( char *);
int main(){

    int len;
    char str[size+1];
    printf("Enter the string: ");
    fgets(str, size +1 , stdin);

    len=length(str);
    printf("lentgh of string=%d",len);

    return 0;
}

int length(char *str){
    return strlen(str);
}
