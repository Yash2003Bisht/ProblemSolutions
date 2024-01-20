// DATE: 19/01/2024, 08:49:50
// PROBLEM NAME: Weapon Choice
// PROBLEM URL: https://www.codechef.com/problems/WEPCH
// PROBLEM DIFFICULTY RATTING: 1225
// STATUS: accepted
// TIME: 0.04
// MEMORY: 1.8M

#include <stdio.h>
#include <math.h>
#define min(a,b)(a>b?b:a)
#define lld long long int

int main(void) {
	int t;
	lld h, x, y1, y2, k, x_hit, y_hit;
	scanf("%d", &t);
 
	while(t--){
	    scanf("%lld%lld%lld%lld%lld", &h, &x, &y1, &y2, &k);

	    // calculate x_hit & y_hit
        x_hit = ceil( (double) h/x), y_hit = ceil( (double) h/y1);

        // check if the y_hit exceeds k
        if (y_hit > k)
            // re-calculate value for y_hit
            y_hit = k + ceil( (double) (h - (y1*k)) / y2);

        printf("%lld\n", min(x_hit, y_hit));

	}
	
}



