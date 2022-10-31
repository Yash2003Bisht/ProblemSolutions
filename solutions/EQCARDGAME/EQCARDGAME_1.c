// QUESTION URL: https://www.codechef.com/problems/EQCARDGAME

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
    int t, k;
    scanint(&t);
    
    while(t--){
        scanint(&k);
        printf("%d\n", 52%k);
    }
	return 0;
}



