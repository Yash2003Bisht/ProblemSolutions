// DATE: 30/09/2023, 09:21:47
// PROBLEM NAME: Slow Start
// PROBLEM URL: https://www.codechef.com/problems/SLOWSTART
// PROBLEM DIFFICULTY RATTING: 1031
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, x, h, m, n;
	scanf("%d",&t);

	while (t--){
	    scanf("%d%d", &x, &h);

	    m = x/2;

	    if((5*m) >= h) {
	       if(h%m == 0)
	           printf("%d\n", h/m);
	       else
	           printf("%d\n", (h/m)+1);
	    } else {
	        n = h-(m*5);

	        if(n%x == 0)
    	        printf("%d\n", 5+(n/x));
	        else
    	        printf("%d\n", 6+(n/x));
	    }
	}
	return 0;
}

