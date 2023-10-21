// DATE: 19/10/2023, 08:04:11
// PROBLEM NAME: Santa and Chocolates
// PROBLEM URL: https://www.codechef.com/problems/SANTACHOC
// PROBLEM DIFFICULTY RATTING: 1285
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n, k, a, total;
    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &k);
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            total += a;
        }

        if (total > 0 && (total%n == 0 || (total > n && k > 0)))
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



