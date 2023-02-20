// DATE: 28/11/2022, 06:06:45
// PROBLEM NAME: Dividing Stamps
// PROBLEM URL: https://www.codechef.com/problems/DIVIDING
// PROBLEM DIFFICULTY RATTING: 1109
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
    int n, c, total=0;
    scanint(&n);
    
    for (int i=0; i<n; i++){
        scanint(&c);
        total += c;
    }
    
    if (n*((n+1)/2) == total) printf("YES");
    else printf("NO");
    
	return 0;
}



