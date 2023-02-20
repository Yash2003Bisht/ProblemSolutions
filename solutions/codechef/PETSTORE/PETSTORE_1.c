// DATE: 29/12/2022, 07:29:15
// PROBLEM NAME: Pet Store
// PROBLEM URL: https://www.codechef.com/problems/PETSTORE
// PROBLEM DIFFICULTY RATTING: 1126
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
    int t, n, a, flag, b[100];
    scanint(&t);
    
    while(t--){
        scanint(&n);
        flag = 1;
        
        for (int i=0; i<100; i++) b[i] = 0;
        
        for (int i=0; i<n; i++){
            scanint(&a);
            b[a]++;
        }
        
        for (int i=0; i<100; i++){
            if (b[i] > 0 && b[i] % 2 != 0){
                flag = 0;
                break;
            }
        }
        
        if (flag) printf("YES\n");
        else printf("NO\n");
        
    }
	return 0;
}



