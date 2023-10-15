// DATE: 14/10/2023, 09:16:00
// PROBLEM NAME: Finding Square Roots
// PROBLEM URL: https://www.codechef.com/problems/FSQRT
// PROBLEM DIFFICULTY RATTING: 668
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.8M

#include <stdio.h>
#include <math.h>

int main(void) {
	int t, n, r;
	scanf("%d",&t);

	while(t--){
    	scanf("%d",&n);
    	r=sqrt(n);
    	printf("%d\n",r);
	}
	return 0;
}




