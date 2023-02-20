// DATE: 11/01/2023, 07:54:38
// PROBLEM NAME: Chef and Coupon
// PROBLEM URL: https://www.codechef.com/problems/COUPON2
// PROBLEM DIFFICULTY RATTING: 1222
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

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
    int t, d, c, d1_cost, d2_cost, temp;
    scanint(&t);

    while(t--){
        scanint(&d);
        scanint(&c);
        d1_cost = 0, d2_cost = 0;

        for (int i=0; i<6; i++){
            scanint(&temp);
            if (i < 3) d1_cost += temp;
            else d2_cost += temp;
        }

        temp = d1_cost + d2_cost;

        if ((temp + c < temp + 2*d && d1_cost >= 150 && d2_cost >= 150) || \
           ((temp + c + d < temp + 2*d) && (d1_cost >= 150 || \
           d2_cost >= 150))) printf("YES\n");
        else printf("NO\n");

    }
	return 0;
}



