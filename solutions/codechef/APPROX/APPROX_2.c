// DATE: 18/05/2023, 09:00:46
// PROBLEM NAME: Approximately
// PROBLEM URL: https://www.codechef.com/problems/APPROX
// PROBLEM DIFFICULTY RATTING: 1310
// STATUS: accepted
// TIME: 0.06
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
    int t, k, n, d;
    scanint(&t);
    
    while(t--){
        scanint(&k);
        n = 103993, d = 33102;
        
        if (k == 0)
            printf("3\n");
        else{
            printf("3.");
            while(k--){
                n = (n%d)*10;
                printf("%d", n/d);
            }
            printf("\n");
        }
        
    }
    
	return 0;
}



