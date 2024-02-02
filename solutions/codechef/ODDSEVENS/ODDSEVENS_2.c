// DATE: 02/02/2024, 02:19:05
// PROBLEM NAME: Odds and Evens
// PROBLEM URL: https://www.codechef.com/problems/ODDSEVENS
// PROBLEM DIFFICULTY RATTING: 872
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, a, b;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d", &a, &b);
	    
	    if ((a+b)%2 == 0)
	        printf("Bob\n");
	    else
	        printf("Alice\n");
	    
	}
	
}



