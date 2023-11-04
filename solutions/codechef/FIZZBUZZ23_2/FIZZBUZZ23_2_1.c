// DATE: 03/11/2023, 09:30:07
// PROBLEM NAME: Survival Time
// PROBLEM URL: https://www.codechef.com/problems/FIZZBUZZ23_2
// PROBLEM DIFFICULTY RATTING: 716
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.5M

#include <stdio.h>

int main() {
    int t, n, x, d;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &x, &d);
        printf("%d\n", n/(x*5) + d);

    }
	return 0;
}


