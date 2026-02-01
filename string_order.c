#include <stdio.h>
#include <string.h>

int main(){
    char str1[100];
    char str2[100];

    //printf("Enter String 1: ");
    scanf("%s", str1);
    //printf("Enter String 2: ");
    scanf("%s", str2);

    strlwr(str1);
    strlwr(str2);
    printf("%d",strcmp(str1,str2));



    return 0;
}