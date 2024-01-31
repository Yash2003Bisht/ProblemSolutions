// DATE: 31/01/2024, 10:16:05
// PROBLEM NAME: Presents for Cheffina
// PROBLEM URL: https://www.codechef.com/problems/PRESENTS
// PROBLEM DIFFICULTY RATTING: 757
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
	int t, n;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d", &n);
	    printf("%d\n", n-(n/5));
	}
	
}



