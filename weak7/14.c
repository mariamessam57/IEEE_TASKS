#include<stdio.h>
#include<string.h>
#define SIZE 20
char* concatenate(char* ,char*);
int main(){
  char str1[SIZE],str2[SIZE] ;
  printf("enter string1:");
  fgets(str1, SIZE , stdin);

  printf("enter string2:");
  fgets(str2, SIZE  , stdin);

  size_t len1 = strlen(str1);
    if (len1 > 0 && str1[len1 - 1] == '\n') {
        str1[len1 - 1] = '\0';
    }

    size_t len2 = strlen(str2);
    if (len2 > 0 && str2[len2 - 1] == '\n') {
        str2[len2 - 1] = '\0';
    }
 
  concatenate(str1,str2);
  printf("Concatenated String:\n %s",str1);
      

}

char* concatenate(char *ptr1 ,char*ptr2){

 return strcat(ptr1 ,ptr2);

}
