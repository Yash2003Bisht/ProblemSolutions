// DATE: 24/09/2022, 06:55:33
// PROBLEM NAME: Flip the cards
// PROBLEM URL: https://www.codechef.com/problems/FLIPCARDS
// PROBLEM DIFFICULTY RATTING: 641
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,x,r;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&x);
        r = n-x;
        if (r<x){
            printf("%d\n", r);
        } else{
            printf("%d\n", x);
        }
    }
	return 0;
}



