// QUESTION URL: https://www.codechef.com/problems/CHEFDETE
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
    int n;
    scanint(&n);
    int r[n], a[n];
    
    for (int i=0; i<n; i++){
        scanint(&r[i]);
        a[i] = 0;
    }
    
    for (int i=0; i<n; i++)
        if (r[i] != 0) a[r[i] - 1] = 1;
        
    for (int i=0; i<n; i++)
        if (a[i] == 0) printf("%d ", i+1);


	return 0;

}



