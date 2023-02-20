// DATE: 28/01/2023, 07:05:49
// PROBLEM NAME: Saving Taxes
// PROBLEM URL: https://www.codechef.com/problems/TAXSAVING
// PROBLEM DIFFICULTY RATTING: 252
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, x, y;
    scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d", &x, &y);
	    printf("%d\n", x - y);
	}
	
	return 0;
}



