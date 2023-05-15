// DATE: 15/05/2023, 07:32:30
// PROBLEM NAME: Sum of Product 1
// PROBLEM URL: https://www.codechef.com/problems/SUMOFPROD1
// PROBLEM DIFFICULTY RATTING: 1340
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        long int count = 0, ans = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a == 1)
                count++;
            else{
                ans += count*(count+1)/2;
                count = 0;
            }
        }
        
        ans += count*(count+1)/2;

        printf("%ld\n", ans);
        
    }
    
	return 0;
}



