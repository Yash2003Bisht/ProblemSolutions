// DATE: 22/07/2023, 08:27:48
// PROBLEM NAME: Array Halves
// PROBLEM URL: https://www.codechef.com/problems/ARRHALVES
// PROBLEM DIFFICULTY RATTING: 1407
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>
#define lld long long int

int main(void) {
    lld t, n, i, count, size;
    scanf("%lld", &t);

    while(t--){
        scanf("%lld", &n);
        count = 0, size = n*2;
        lld arr[size];
        
        for (i=0; i<size; i++)
            scanf("%lld", &arr[i]);
        
        // Count all swaps for second-half elements that are greater than n 
        for (i=size-1; i>=0; i--){
            if (arr[i] > n){
                count += size - i - 1;
                size--;
            }
        }
        
        
        printf("%lld\n", count);

    }
    
	return 0;
}


