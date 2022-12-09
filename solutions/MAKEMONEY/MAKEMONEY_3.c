// QUESTION URL: https://www.codechef.com/problems/MAKEMONEY
// STATUS: accepted
// TIME: 0.01
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
    int t, n, x, c, a, counter;
    scanint(&t);

    while(t--){
        scanint(&n);
        scanint(&x);
        scanint(&c);
        counter = 0;

        for(int i=0; i<n; i++){
            scanf("%d", &a);

            if (x - a > c)
                a = x - c;

            counter += a;
        }

        printf("%d\n", counter);
        
    }
    
	return 0;
}


