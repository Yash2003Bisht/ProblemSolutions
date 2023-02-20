// DATE: 15/12/2022, 07:17:47
// PROBLEM NAME: Convert to permutation
// PROBLEM URL: https://www.codechef.com/problems/PERMUTATION
// PROBLEM DIFFICULTY RATTING: 1197
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.4M

#include <stdio.h>
#include <stdlib.h>

int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n], total = 0, ans;
        
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            total += a[i];
        }
        
        ans = n*(n+1)/2 - total;
        qsort(a, n, sizeof(int), cmpfunc);
        
        for (int i=0; i<n; i++){
            if (a[i] > i+1){
                ans = -1;
                break;
            }
        }
        
        printf("%d\n", ans);
        
        
        
    }

	return 0;
}



