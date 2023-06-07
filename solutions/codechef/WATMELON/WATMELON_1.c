// DATE: 07/06/2023, 07:23:35
// PROBLEM NAME: Watermelon
// PROBLEM URL: https://www.codechef.com/problems/WATMELON
// PROBLEM DIFFICULTY RATTING: 1365
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = 0;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            total += a;
        }

        if (total >= 0)
            printf("YES\n");
        else
            printf("NO\n");

    }
    
	return 0;
}



