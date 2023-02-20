// DATE: 06/02/2023, 08:42:34
// PROBLEM NAME: Dazzling AXNODR Challenge 
// PROBLEM URL: https://www.codechef.com/problems/AXNODR
// PROBLEM DIFFICULTY RATTING: 1246
// STATUS: wrong answer
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
    long long int n;
    
    scanint(&t);
    
    while(t--){
        scanint(&n);
        
        if (n%4 == 0) printf("%lld\n", n+3);
        else if (n%4 == 1) printf("%lld\n", n);
        else printf("3\n");
        
    }
    
	return 0;
}



