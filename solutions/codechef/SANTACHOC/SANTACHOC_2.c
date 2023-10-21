// DATE: 19/10/2023, 08:01:30
// PROBLEM NAME: Santa and Chocolates
// PROBLEM URL: https://www.codechef.com/problems/SANTACHOC
// PROBLEM DIFFICULTY RATTING: 1285
// STATUS: accepted
// TIME: 0.07
// MEMORY: 1.6M

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

        if (total < n || (total%n != 0 && k == 0))
            printf("NO\n");
        else
            printf("YES\n");

    }
    
	return 0;
}



