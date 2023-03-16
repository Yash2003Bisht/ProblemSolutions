// DATE: 16/03/2023, 07:37:29
// PROBLEM NAME: Chef and Street Food
// PROBLEM URL: https://www.codechef.com/problems/STFOOD
// PROBLEM DIFFICULTY RATTING: 1268
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

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
    int t, n, s, p, v, max_profit, temp;
    scanf("%d", &t);

    while(t--){
        scanint(&n);
        max_profit = 0;

        for (int i=0; i<n; i++){
            scanint(&s);
            scanint(&p);
            scanint(&v);
            temp = (p/(s+1)) * v;

            if (temp > max_profit)
                max_profit = temp;

        }

        printf("%d\n", max_profit);

    }

	return 0;
}



