// DATE: 24/11/2022, 06:48:47
// PROBLEM NAME: Chef vs Doof
// PROBLEM URL: https://www.codechef.com/problems/CLLCM
// PROBLEM DIFFICULTY RATTING: 1108
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
    int t,n;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        int a[n], flag = 1;
        
        for (int i=0; i<n; i++){
            scanint(&a[i]);
            if (a[i]%2 == 0) flag = 0;
        }
        
        if (!flag) printf("NO\n");
        else printf("YES\n");
        
    }
    
	return 0;
}



