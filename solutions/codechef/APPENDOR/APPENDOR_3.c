// QUESTION URL: https://www.codechef.com/problems/APPENDOR
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
    int t, n, y, a, total;
    scanint(&t);

    while(t--){
        scanint(&n);
        scanint(&y);
        total = 0;

        for (int i=0; i<n; i++){
            scanint(&a);
            total |= a;
        }
        
        a = y - total;
        total = total|a;
        
        if (total == y) printf("%d\n", a);
        else printf("-1\n");
        
    }
    
	return 0;
}



