#include <stdio.h>
int main(){
    char s[105];
    scanf("%s", s);

    int ones=0, twos=0, threes=0;

    // Count 1,2,3
    for(int i=0; s[i]; i++){
        if(s[i]=='1') ones++;
        if(s[i]=='2') twos++;
        if(s[i]=='3') threes++;
    }

    // Print 1s
    for(int i=0; i<ones; i++){
        if(i>0) printf("+");
        printf("1");
    }
    // Print 2s
    for(int i=0; i<twos; i++){
        if(ones+i>0) printf("+");
        printf("2");
    }
    // Print 3s
    for(int i=0; i<threes; i++){
        if(ones+twos+i>0) printf("+");
        printf("3");
    }

    printf("\n");
    return 0;
}
