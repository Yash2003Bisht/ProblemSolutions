// DATE: 27/09/2022, 06:57:23
// PROBLEM NAME: Maximum Length Even Subarray
// PROBLEM URL: https://www.codechef.com/problems/MXEVNSUB
// PROBLEM DIFFICULTY RATTING: 1221
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if (n*(n+1)/2 % 2 == 0){
            printf("%d\n", n);
        } else{
            printf("%d\n", n-1);
        }
        
    }
	return 0;
}



