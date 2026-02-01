#include <stdio.h>
/*A. Square?

You are given 4 sticks of lengths a, b, c, and d. You can not break or bend them.
Determine whether it is possible to form a square using the given sticks.
A square is defined as a polygon consisting of 4 vertices, of which all sides have equal length and all inner angles are equal. No two edges of the polygon may intersect each other.*/
int main(){

    int a,b,c,d;
    //printf("Enter Length of Sticks A, B, C, D: ");
    
    int t;
    scanf("%d", &t);
    
    while(t--){

        scanf("%d %d %d %d", &a, &b, &c, &d);

        if(a==b && b==c && c==d){
        printf("YES\n");
        } else{
        printf("NO\n");
        }

    }

   
    return 0;
}