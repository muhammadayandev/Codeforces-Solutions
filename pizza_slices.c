#include <stdio.h>
/*A. Pizza Time
Hao and Alex are good friends. After winning a coding competition together, they received a huge pizza as their prize.

Initially, they are given n slices of pizza. Each day, the following process takes place:

If there are at most 2 slices remaining, Alex eats all of them. Otherwise, let m be the current number of slices (m≥3). Hao splits them into three groups of sizes m1, m2, and m3 such that:
m1+m2+m3=m and 1≤m1≤m2≤m3.
Then:
Hao eats m1 slices (the smallest group). Alex eats m2 slices (the middle group).
The remaining m3 slices (the largest group) are carried over to the next day.
Your task is to determine the maximum total number of slices Hao can eat if he always chooses the partition optimally.*/

int main(){
    int t;
    scanf("%d", &t);

    //printf("Enter Slices: ");

  
    while(t--){
        int n;
        scanf("%d", &n);
        int hao = 0;
        while (n > 2) {
        // Hao eats m1 = 1
        hao++;
        
        // Alex eats m2 = 1
        // Remaining m3 = n - 2
        n = n - 2;
    }
        printf("%d\n", hao);

    }
   

    return 0;

}


    
