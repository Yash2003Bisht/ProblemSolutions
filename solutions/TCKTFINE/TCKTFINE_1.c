// QUESTION URL: https://www.codechef.com/problems/TCKTFINE

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



