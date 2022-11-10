// QUESTION URL: https://www.codechef.com/problems/PRIME1
// STATUS: accepted
// TIME: 0.98
// MEMORY: 5.3M

#include <stdio.h>

int isprime(long long int num){
    
    if (num == 1)
        return 0;
    else if (num <= 3)
        return 1;
    else if (num%2 == 0 || num%3 == 0)
        return 0;

    for (int i = 5; i*i <= num; i += 6) {
        if (num % i == 0 || num%(i+2) == 0)
            return 0;
    }

    return 1;
    
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
    int t;
    long long int m, n;
    scanint(&t);
    
    while(t--){
        scanint(&m);
        scanint(&n);
        
        for (long long int i=m; i<=n; i++){
            if (isprime(i)){
                printf("%lld\n", i);
            }
        }
        printf("\n");
    }
	return 0;
}



