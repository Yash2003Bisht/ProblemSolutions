// DATE: 06/02/2024, 04:07:13
// PROBLEM NAME: Which Mixture
// PROBLEM URL: https://www.codechef.com/problems/MIXTURE
// PROBLEM DIFFICULTY RATTING: 841
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, a, b;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d", &a, &b);
	    
	    if (a > 0 && b > 0)
	        printf("Solution\n");
	   else if (a > 0 && b == 0)
	        printf("Solid\n");
	   else
	        printf("Liquid\n");
	    
	}
	
}



