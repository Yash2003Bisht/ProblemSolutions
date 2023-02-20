// DATE: 07/01/2023, 08:25:26
// PROBLEM NAME: Coronavirus Spread
// PROBLEM URL: https://www.codechef.com/problems/COVID19
// PROBLEM DIFFICULTY RATTING: 1219
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#define MIN(a, b)(a > b ? b : a)
#define MAX(a, b)(a > b ? a : b)

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int x[n], count = 1, min_ = -1, max_ = -1;
        
        for (int i=0; i<n; i++) scanf("%d", &x[i]);
        
        for (int i=0; i<n-1; i++){
            if (x[i+1] - x[i] <= 2) count++;
            else{
                // min
                if (min_ == -1) min_ = count;
                else min_ = MIN(min_, count);

                // max
                if (max_ == -1) max_ = count;
                else max_ = MAX(max_, count);
                
                // reset the count
                count = 1;
            }
            
        }

        min_ = min_ != -1 ? MIN(min_, count) : count;
        max_ = max_ != -1 ? MAX(max_, count) : count;

        printf("%d %d\n", min_, max_);
        
        
        
    }
	return 0;
}



