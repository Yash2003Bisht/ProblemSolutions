// QUESTION URL: https://www.codechef.com/problems/MAKEMULTIPLE
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);c = getchar_unlocked()); 
	for(; (c>47)&&(c<58);c = getchar_unlocked()) 
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
} 
 

int main(void) {
    int t, a, b;
    scanint(&t);
    
    while(t--){
        scanint(&a);
        scanint(&b);
        
        int diff = b-a; 
        
        if (diff == 0 || diff >= a)
            printf("YES\n");
        else
            printf("NO\n");
    }
	return 0;
}



