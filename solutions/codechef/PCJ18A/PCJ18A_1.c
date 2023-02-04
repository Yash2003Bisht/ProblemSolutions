// QUESTION URL: https://www.codechef.com/problems/PCJ18A
// STATUS: accepted
// TIME: 0.00
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
    int t, n, x, value, flag;
    scanint(&t);
    
    while(t--){
        scanint(&n); 
        scanint(&x);
        flag = 0;
        
        for (int i=0; i<n; i++){
            scanint(&value);
            
            if (!flag){
                if (value >= x) flag = 1;
            }

        }

        if (flag) printf("YES\n");
        else printf("NO\n");

    }

	return 0;

}



