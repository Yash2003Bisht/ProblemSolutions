// DATE: 04/04/2023, 08:29:47
// PROBLEM NAME: Chef and Apple Trees
// PROBLEM URL: https://www.codechef.com/problems/CAPPLE
// PROBLEM DIFFICULTY RATTING: 1301
// STATUS: accepted
// TIME: 0.11
// MEMORY: 5.6M

#include <stdio.h>
#include <limits.h>

int main(void) {
    int t, n, a, min_value, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int counter[1000000] = {0};
        count = 0, min_value = INT_MAX;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            counter[a]++;
            if (min_value > a)
                min_value = a;
        }
        
        for (int i=0; i<1000000; i++){
            if (counter[i] && i+1 != min_value)
                count++;
        }

        printf("%d\n", count);
        
    }
    
	return 0;
}



