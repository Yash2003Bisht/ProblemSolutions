// DATE: 01/11/2022, 06:47:12
// PROBLEM NAME: Binary String Cost
// PROBLEM URL: https://www.codechef.com/problems/BSCOST
// PROBLEM DIFFICULTY RATTING: 1069
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int is_exists(char * arr, int size, char find){
    for (int i=0; i<size; i++){
        if (arr[i] == find){
            return 1;
        }
    }
    return 0;
}

inline void scanint(long long *x) { 
	register char c = getchar_unlocked(); 
	*x = 0; 
	for(; (c<48)||(c>57);
	    c = getchar_unlocked()); 
	for(; (c>47)&&(c<58); c = getchar_unlocked())
		*x = (int)((((*x)<<1) + ((*x)<<3)) + c - 48); 
}

int main(void) {
    int t,n,x,y;
    char* s;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        scanint(&x);
        scanint(&y);
        
        s = (char *) malloc(n*sizeof(char));
        scanf("%s", s);
        
        if(!is_exists(s, n, '0') || !is_exists(s, n, '1')) printf("%d\n", 0);
        else if (x > y) printf("%d\n", y);
        else printf("%d\n", x);
        
    }
    
	return 0;
}



