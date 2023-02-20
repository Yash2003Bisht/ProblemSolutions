// DATE: 02/12/2022, 07:09:31
// PROBLEM NAME: Alternating String
// PROBLEM URL: https://www.codechef.com/problems/ALTSTR
// PROBLEM DIFFICULTY RATTING: 1116
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#define MIN(a,b) (a>b?b:a)

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t, n, count_1, count_2;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        char s[n+1];
        scanf("%s", &s);
        count_1 = 0, count_2 = 0;
        
        for (int i=0; i<n; i++){
            if (s[i] == '1') count_1++;
            else count_2++;
        }
        
        if (count_1 == count_2) printf("%d\n", n);
        else printf("%d\n", (MIN(count_1, count_2)*2)+1);
        
        
    }
    
	return 0;
}



