// DATE: 18/02/2023, 07:40:16
// PROBLEM NAME: Golf
// PROBLEM URL: https://www.codechef.com/problems/LKDNGOLF
// PROBLEM DIFFICULTY RATTING: 1256
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
    long long int t, n, x, k;
    int flag;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&x);
        scanint(&k);
        flag = 0;
        
        if (x % k == 0 || ((n+1)-x) % k == 0) flag = 1;
        
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
    
	return 0;
}



