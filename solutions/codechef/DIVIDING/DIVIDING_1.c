// QUESTION URL: https://www.codechef.com/problems/DIVIDING
// STATUS: accepted
// TIME: 0.00
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
    long long n, c, total=0;
    scanint(&n);
    
    for (int i=0; i<n; i++){
        scanint(&c);
        total += c;
    }
    
    if (n*((n+1)/2) == total) printf("YES");
    else printf("NO");
    
	return 0;
}



