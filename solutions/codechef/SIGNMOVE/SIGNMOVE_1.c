// QUESTION URL: https://www.codechef.com/problems/SIGNMOVE
// STATUS: accepted
// TIME: 0.01
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
    int t, n;
    scanint(&t);

    while(t--){
        scanint(&n);
        if (n%2 == 0) printf("%d\n", n/2);
        else printf("%d\n", -(n/2 + 1));
        
        
    }
	return 0;
}



