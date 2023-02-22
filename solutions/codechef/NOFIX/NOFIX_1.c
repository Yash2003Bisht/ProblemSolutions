// DATE: 22/02/2023, 07:32:48
// PROBLEM NAME: Avoid Fixed Points
// PROBLEM URL: https://www.codechef.com/problems/NOFIX
// PROBLEM DIFFICULTY RATTING: 1250
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
	int t, n, a, count, temp;
	scanint(&t);
	
	while(t--){
	    scanint(&n);
	    count = 0, temp = 1;
	    
	    for (int i=0; i<n; i++){
	        scanint(&a);
	        if (i+temp == a){
	           count++;
	           temp++;
	       }
	    }

	   printf("%d\n", count);

	}
	
	return 0;
}



