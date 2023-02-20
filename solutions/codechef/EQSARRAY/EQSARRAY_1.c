// DATE: 19/11/2022, 07:25:47
// PROBLEM NAME: Nahaane Jaa
// PROBLEM URL: https://www.codechef.com/problems/EQSARRAY
// PROBLEM DIFFICULTY RATTING: 1280
// STATUS: accepted
// TIME: 0.02
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
    long long int t, n, k, a;
    int flag;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&k);
        flag = 0;
        
        for (int i=0; i<n; i++){
            scanint(&a);
            if (a == k && ((i != n-1 && n > 1) || n == 1)) flag = 1;
        }

        if (flag) printf("Yes\n");
        else printf("No\n");
        
    }
    
	return 0;
}



