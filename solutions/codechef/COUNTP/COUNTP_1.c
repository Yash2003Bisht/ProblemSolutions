// DATE: 01/12/2022, 07:04:33
// PROBLEM NAME: Counting Problem
// PROBLEM URL: https://www.codechef.com/problems/COUNTP
// PROBLEM DIFFICULTY RATTING: 1065
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.4M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t, n, a, odd_count;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        odd_count = 0;
        
        for (int i=0; i<n; i++){
            scanint(&a);
            if (a%2 != 0) odd_count++;
        }
        
        if (odd_count%2 == 0 && odd_count > 0) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
	
}



