// DATE: 04/09/2022, 02:59:36
// PROBLEM NAME: Car Trip
// PROBLEM URL: https://www.codechef.com/problems/CARTRIP
// PROBLEM DIFFICULTY RATTING: 374
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(){
    int t, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        int cost = x<=300?3000:x*10;
        printf("%d\n", cost);
    }
    return 0;
}

