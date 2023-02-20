// DATE: 04/09/2022, 02:54:40
// PROBLEM NAME: Ticket Fine
// PROBLEM URL: https://www.codechef.com/problems/TCKTFINE
// PROBLEM DIFFICULTY RATTING: 373
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
	int t,x,p,q;
	scanf("%d", &t);
	for (int i=0; i<t; i++){
	    scanf("%d%d%d", &x,&p,&q);
	    printf("%d\n",(p-q)*x);
	}
	return 0;
}



