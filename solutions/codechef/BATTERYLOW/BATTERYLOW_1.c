// DATE: 10/09/2022, 01:17:30
// PROBLEM NAME: Battery Low
// PROBLEM URL: https://www.codechef.com/problems/BATTERYLOW
// PROBLEM DIFFICULTY RATTING: 479
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	// your code goes here
	int t, b;
	scanf("%d", &t);
	while (t--){
	    scanf("%d", &b);
	    if (b <= 15){
	        printf("YES\n");
	    } else{
	        printf("NO\n");
	    }
	}
	return 0;
}



