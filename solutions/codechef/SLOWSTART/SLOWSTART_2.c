// DATE: 30/09/2023, 09:27:59
// PROBLEM NAME: Slow Start
// PROBLEM URL: https://www.codechef.com/problems/SLOWSTART
// PROBLEM DIFFICULTY RATTING: 1031
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, x, h, halves, health, damage;
	scanf("%d",&t);

	while (t--){
	    scanf("%d%d", &x, &h);

	    halves = (x/2);
	    damage = halves * 5;

	    if (damage >= h){
	        if (h%halves == 0)
	            printf("%d\n", h/halves);
	        else
	            printf("%d\n", h/halves + 1);
	    } else {
	        health = h - damage;
	        
	        if (health%x == 0)
	            printf("%d\n", 5 + health/x);
	        else
	            printf("%d\n", 6 + health/x);

	    }
	    
	}
	return 0;
}

