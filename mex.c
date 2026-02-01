#include <stdio.h>
int main(){
    int t;
    printf("Enter Number of Cases: ");
    scanf("%d", &t);
    int n,mex;
    printf("Enter Size of Array & MEX: ");
    scanf("%d %d", &n, &mex);
    int a[n];
    int i;
    for(i=0;i<n;i++){
        printf("Enter Element %d: ", i+1);
        scanf("%d", &a[i]);
    }
    int smallest_num;

    for(i=0;i<n;i++){
        if(a[i]!=i){
            smallest_num= i;
            break;
        } else{
            continue;
        }
    }

    int count = 0;
    for(i=0;i<n;i++){
        if(smallest_num==a[i]){
            count++;
        }
        
    }


    

}