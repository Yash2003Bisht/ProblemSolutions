// DATE: 10/06/2023, 07:43:34
// PROBLEM NAME: Devu and Grapes
// PROBLEM URL: https://www.codechef.com/problems/DEVUGRAP
// PROBLEM DIFFICULTY RATTING: 1343
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>
#define min(a, b)(a>b?b:a)

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t, n, a;
    long long int k, ans;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&k);
        ans = 0;

        for (int i=0; i<n; i++){
            scanint(&a);

            if (a > k)
                ans += min(a%k, (a/k + 1)*k - a);
            else
                ans += k-a;
        }
        
        printf("%lld\n", ans);
        
    }
    
	return 0;
}



