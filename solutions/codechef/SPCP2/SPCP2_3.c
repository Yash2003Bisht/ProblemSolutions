// DATE: 01/12/2023, 09:24:17
// PROBLEM NAME: Airlines
// PROBLEM URL: https://www.codechef.com/problems/SPCP2
// PROBLEM DIFFICULTY RATTING: 712
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, x, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &x, &n);
        int total = x*100;

        if (total >= n)
            printf("0\n");
        else{
            int ans = ceil((float) (n-total)/100);
            printf("%d\n", ans);
        }

    }
    
	return 0;
}



