// DATE: 13/05/2023, 08:18:09
// PROBLEM NAME: Positive or Negative Subarrays
// PROBLEM URL: https://www.codechef.com/problems/POSITNEG
// PROBLEM DIFFICULTY RATTING: 1526
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    long long int negative_count, positive_count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int b[n];
        negative_count = 0, positive_count = 0;
        
        for (int i=0; i<n; i++)
            scanf("%d", &b[i]);

        for (int i=0; i<n; i++){
            if (b[i] == -1)
                negative_count += i+1;
            else
                positive_count += i+1;
        }

        if (negative_count > positive_count)
            printf("%lld\n", negative_count - positive_count);
        else
            printf("%lld\n", positive_count - negative_count);
        
    }
    
	return 0;
}



