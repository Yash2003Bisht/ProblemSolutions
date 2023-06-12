// DATE: 12/06/2023, 04:13:01
// PROBLEM NAME: The Mango Truck
// PROBLEM URL: https://www.codechef.com/problems/MANGOES
// PROBLEM DIFFICULTY RATTING: 482
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    // ================= TESTING SUBMISSION =================
	int t;
	scanf("%d",&t);
	while(t--) {
	    int x,y,z,n;
	    scanf("%d %d %d",&x,&y,&z);
	   printf("%d\n",(z-y)/x);
	   
	}
	return 0;
}



