// DATE: 06/02/2023, 08:12:35
// PROBLEM NAME: Magic Pairs
// PROBLEM URL: https://www.codechef.com/problems/ALEXNUMB
// PROBLEM DIFFICULTY RATTING: 1245
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
    int t;
    long int value, n;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        long long a[n];

        for (int i=0; i<n; i++) scanint(&a[i]);
        
        value = (n*(n-1)) / 2;
        printf("%li\n", value);


    }
    
	return 0;
}



