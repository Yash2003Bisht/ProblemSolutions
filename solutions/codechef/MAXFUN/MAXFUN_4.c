// DATE: 15/04/2023, 08:39:13
// PROBLEM NAME: Maximise Function
// PROBLEM URL: https://www.codechef.com/problems/MAXFUN
// PROBLEM DIFFICULTY RATTING: 1301
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>
#include <limits.h>
#define _min(a,b)(a>b?b:a)

int main(void) {
    int t, n, a, min, max;
    long long int ans;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        min = INT_MAX, max = INT_MIN;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            
            if (a > max){
                max = a;
                min = _min(min, a);
            } else if (a < min)
                min = a;
            
        }
        
        ans = max - min;

        printf("%lld\n", ans*2);

    }
    
	return 0;
}



