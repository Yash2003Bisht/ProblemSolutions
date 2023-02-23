// DATE: 23/02/2023, 07:46:07
// PROBLEM NAME: Little Chef and Sums
// PROBLEM URL: https://www.codechef.com/problems/CHEFSUM
// PROBLEM DIFFICULTY RATTING: 1252
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.2M

#include <stdio.h>
#include <limits.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}


int main(void) {
    int t, n, a, idx, total;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        total = INT_MAX;

        for (int i=0; i<n; i++){
            scanint(&a);
            
            if (a < total){
                total = a;
                idx = i+1;
            }

        }
        
        printf("%d\n", idx);

    }
    
	return 0;
}



