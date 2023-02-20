// DATE: 27/09/2022, 06:04:21
// PROBLEM NAME: Smallest Possible Whole Number
// PROBLEM URL: https://www.codechef.com/problems/SMOL
// PROBLEM DIFFICULTY RATTING: 1306
// STATUS: runtime error(SIGFPE)
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,n,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        if (n<k){
            printf("%d\n", n);
        } else{
            printf("%d\n", n%k);
        }
    }
	return 0;
}



