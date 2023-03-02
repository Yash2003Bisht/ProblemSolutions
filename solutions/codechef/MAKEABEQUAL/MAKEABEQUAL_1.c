// DATE: 02/03/2023, 01:49:50
// PROBLEM NAME: Make A and B equal
// PROBLEM URL: https://www.codechef.com/problems/MAKEABEQUAL
// PROBLEM DIFFICULTY RATTING: 1264
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    long long int t, n;
    scanf("%lld", &t);
    
    while(t--){
        scanf("%lld", &n);
        long long int a[n], b[n], count = 0, diff = 0;

        for (int i=0; i<n*2; i++){
            if (i < n)
                scanf("%lld", &a[i]);
            else 
                scanf("%lld", &b[i-n]);
        }
        
        for (int i=0; i<n; i++){
            diff += a[i] - b[i];
            count += abs(a[i] - b[i]);
        }
        
        if (!diff)
            printf("%lld\n", count/2);
        else
            printf("-1\n");

    }
    
	return 0;
}



