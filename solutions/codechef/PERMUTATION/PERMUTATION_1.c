// DATE: 15/12/2022, 07:20:43
// PROBLEM NAME: Convert to permutation
// PROBLEM URL: https://www.codechef.com/problems/PERMUTATION
// PROBLEM DIFFICULTY RATTING: 1197
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}


int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}

int main(void) {
    int t, n;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        int a[n], total = 0, ans;
        
        for (int i=0; i<n; i++){
            scanint(&a[i]);
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



