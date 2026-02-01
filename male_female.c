#include <stdio.h>
#include <string.h>

int main() {
    char username[105];      
    int seen[26] = {0};     
    int i, distinct = 0;    
    scanf("%s", username);

 
    for(i = 0; username[i] != '\0'; i++) {
        int index = username[i] - 'a';  
        if(seen[index] == 0) {       
            seen[index] = 1;          
            distinct++;                 
        }
    }

    if(distinct % 2 == 0)
        printf("CHAT WITH HER!\n");    
    else
        printf("IGNORE HIM!\n");      

    return 0;
}
