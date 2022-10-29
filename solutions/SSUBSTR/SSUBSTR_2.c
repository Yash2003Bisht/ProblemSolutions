// QUESTION URL: https://www.codechef.com/problems/SSUBSTR

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
    int t, n, total;
    char* s;
    scanint(&t);
    
    while(t--){
        scanint(&n);
        s = (char *) malloc(n * sizeof(char));
        total = 0;
        scanf("%s", s);
        
        for (int i=0; i<n-1; i++){
            if (s[i] == '1' && s[i+1] == '0')
                total++;
        }
        
        free(s);
        
        printf("%d\n", total);
    }
	return 0;
}



