// DATE: 11/02/2024, 02:35:01
// PROBLEM NAME: Chef on Vacation
// PROBLEM URL: https://www.codechef.com/problems/CHEFVACATION
// PROBLEM DIFFICULTY RATTING: 891
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
	int t, x, y, z;
	scanf("%d", &t);
	
	while(t--){
	    scanf("%d%d%d", &x, &y, &z);
	    if ((x+y) > z)
	        printf("NO\n");
	    else
	        printf("YES\n");

	}
	
}



