// DATE: 25/04/2023, 08:19:27
// PROBLEM NAME: Ada and the Staircase
// PROBLEM URL: https://www.codechef.com/problems/ADASTAIR
// PROBLEM DIFFICULTY RATTING: 1320
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int main(void) {
    int t, n, k, steps_added, diff;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int arr[n];
        steps_added = 0, diff = 0;
        
        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        
        for (int i=0; i<n; i++){
            diff = arr[i] - diff;
            if (diff > k)
                steps_added += (diff-1)/k;
            
            diff = arr[i];
            
        }
        
        printf("%d\n", steps_added);

    }
    
	return 0;
}


