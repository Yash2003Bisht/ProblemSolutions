// DATE: 13/05/2023, 08:16:54
// PROBLEM NAME: Positive or Negative Subarrays
// PROBLEM URL: https://www.codechef.com/problems/POSITNEG
// PROBLEM DIFFICULTY RATTING: 1526
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t;
    long long int n, i, negative_count, positive_count;
    scanf("%d", &t);

    while(t--){
        scanf("%lld", &n);
        long long int b[n];
        negative_count = 0, positive_count = 0;
        
        for (i=0; i<n; i++)
            scanf("%lld", &b[i]);

        for (i=0; i<n; i++){
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



