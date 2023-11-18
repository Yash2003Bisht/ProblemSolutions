// DATE: 17/11/2023, 09:02:13
// PROBLEM NAME: Count the ACs
// PROBLEM URL: https://www.codechef.com/problems/ACS
// PROBLEM DIFFICULTY RATTING: 739
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        if (n/100 + n%100 > 10)
            printf("-1\n");
        else
            printf("%d\n", n/100 + n%100);
    }
    
	return 0;
}



