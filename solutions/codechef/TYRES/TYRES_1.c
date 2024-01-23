// DATE: 23/01/2024, 03:01:20
// PROBLEM NAME: Cars and Bikes
// PROBLEM URL: https://www.codechef.com/problems/TYRES
// PROBLEM DIFFICULTY RATTING: 809
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
	int t, n;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d", &n);
	    
	    if (n%4 < 2)
	        printf("NO\n");
	    else
	        printf("YES\n");
	    
	}
	
}



