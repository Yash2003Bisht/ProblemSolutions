// DATE: 05/08/2023, 08:11:53
// PROBLEM NAME: Distinct Dilemma
// PROBLEM URL: https://www.codechef.com/problems/DISTDILEM
// PROBLEM DIFFICULTY RATTING: 1420
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, a;
    long long int total, distinct;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = 0, distinct = 1;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            total += a;
        }

        while(total >= distinct){
            total -= distinct;
            distinct++;
        }

        printf("%lld\n", distinct-1);

    }
    
	return 0;
}



