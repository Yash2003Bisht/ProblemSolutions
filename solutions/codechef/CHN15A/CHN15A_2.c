// DATE: 01/12/2023, 09:17:23
// PROBLEM NAME: Mutated Minions
// PROBLEM URL: https://www.codechef.com/problems/CHN15A
// PROBLEM DIFFICULTY RATTING: 777
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, k;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int a, total = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            a += k;
            if (a%7 == 0)
                total++;
        }

        printf("%d\n", total);

    }
    
	return 0;
}



