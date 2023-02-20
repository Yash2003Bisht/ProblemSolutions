// DATE: 08/02/2023, 07:37:20
// PROBLEM NAME: Walk
// PROBLEM URL: https://www.codechef.com/problems/WALK
// PROBLEM DIFFICULTY RATTING: 1247
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.3M

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
    int t, n, w, min_velocity;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        min_velocity = 0;
        
        for (int i=0; i<n; i++){
            scanint(&w);
            if (min_velocity < w+i) min_velocity = w+i;
        }
        
        printf("%d\n", min_velocity);

    }
    
	return 0;
}


