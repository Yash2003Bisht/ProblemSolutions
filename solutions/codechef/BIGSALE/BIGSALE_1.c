// DATE: 17/02/2023, 07:59:35
// PROBLEM NAME: A Big Sale
// PROBLEM URL: https://www.codechef.com/problems/BIGSALE
// PROBLEM DIFFICULTY RATTING: 1260
// STATUS: accepted
// TIME: 0.25
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
    int t;
    double n, p, q, d, loss, increased_price;
    scanint(&t);
    
    while(t--){
        scanf("%lf", &n);
        loss = 0.0;
        
        for (int i=0; i<n; i++){
            scanf("%lf%lf%lf", &p,  &q, &d);
            increased_price = p + (p*(d/100));
            loss += (p - (increased_price - (increased_price * (d/100)))) * q;
        }
        
        printf("%.9lf\n", loss);
        
    }
    
	return 0;
}



