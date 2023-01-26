// QUESTION URL: https://www.codechef.com/problems/CHSERVE
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
    int t, p1, p2, k;
    scanint(&t);

    while(t--){
        scanint(&p1);
        scanint(&p2);
        scanint(&k);

        if ( ( (p1+p2) / k ) % 2 != 0) printf("COOK\n");
        else printf("CHEF\n");

    }

	return 0;
}



