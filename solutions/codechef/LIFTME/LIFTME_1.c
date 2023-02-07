// QUESTION URL: https://www.codechef.com/problems/LIFTME
// STATUS: accepted
// TIME: 0.01
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
    int t, n, q, f, d;
    long long int floor_travel;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&q);
        floor_travel = 0, n = 0;
        
        for (int i=0; i<q; i++){
            scanint(&f);
            scanint(&d);
            floor_travel += abs(n - f) + abs(d - f);
            n = d;
        }
        
        printf("%lld\n", floor_travel);
        
    }

	return 0;
}



