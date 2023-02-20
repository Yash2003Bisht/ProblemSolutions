// DATE: 02/11/2022, 06:44:47
// PROBLEM NAME: Easy Permutation
// PROBLEM URL: https://www.codechef.com/problems/EASYPERM
// PROBLEM DIFFICULTY RATTING: 1057
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.2M

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
    int t,n;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        
        for (int i=n; i > 0; i--)
            printf("%d ", i);
        
        printf("\n");
    }
    
	return 0;
}



