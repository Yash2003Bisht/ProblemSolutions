// DATE: 03/01/2023, 07:20:34
// PROBLEM NAME: Two Different Palindromes
// PROBLEM URL: https://www.codechef.com/problems/TWODIFFPALIN
// PROBLEM DIFFICULTY RATTING: 1216
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
    int t, a, b;
    scanint(&t);

    while(t--){
        scanint(&a);
        scanint(&b);

        if ((a%2 != 0 && b%2 != 0) || (b == 1 || a == 1)) printf("No\n");
        else printf("Yes\n");
    }

	return 0;
}



