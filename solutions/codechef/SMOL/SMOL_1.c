// DATE: 27/09/2022, 06:05:03
// PROBLEM NAME: Smallest Possible Whole Number
// PROBLEM URL: https://www.codechef.com/problems/SMOL
// PROBLEM DIFFICULTY RATTING: 1306
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,n,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        if (k==0){
            printf("%d\n", n);
        } else{
            printf("%d\n", n%k);
        }
    }
	return 0;
}



