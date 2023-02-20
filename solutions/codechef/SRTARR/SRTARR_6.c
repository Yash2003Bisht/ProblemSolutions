// DATE: 30/11/2022, 06:16:14
// PROBLEM NAME: Sort the String
// PROBLEM URL: https://www.codechef.com/problems/SRTARR
// PROBLEM DIFFICULTY RATTING: 1112
// STATUS: accepted
// TIME: 0.03
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
    int t,n,count;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        char s[n+1];
        count = 0;
        scanf("%s", &s);
        
        
        for (int i=0; i<n-1; i++){
            if (s[i] == '1' && s[i+1] == '0') count++;
        }
        
        printf("%d\n", count);
        
    }
    
	return 0;
}


