// QUESTION URL: https://www.codechef.com/problems/CHEFSTR1
// STATUS: accepted
// TIME: 0.02
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
    int t, n;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        long long int s[n], total=0;
        
        for (int i=0; i<n; i++)
            scanint(&s[i]);
            
        for (int i=0; i<n-1; i++){
            total += s[i+1]>s[i]?s[i+1]-s[i]-1:s[i]-s[i+1]-1;
        }
        
        printf("%lld\n", total);
        
    }
    
	return 0;
}



