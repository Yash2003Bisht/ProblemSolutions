// QUESTION URL: https://www.codechef.com/problems/TCKTFINE
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
	int t,x,p,q;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d%d", &x,&p,&q);
	    printf("%d\n",(p-q)*x);
	}
	return 0;
}



