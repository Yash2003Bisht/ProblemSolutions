// QUESTION URL: https://www.codechef.com/problems/CRICRANK
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a1,a2,a3,b1,b2,b3;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d%d", &a1,&a2,&a3);
	    scanf("%d%d%d", &b1,&b2,&b3);
	    float a = (a1+a2+a3)/2;
	    float b = (b1+b2+b3)/2;
	    char best = a>b?'A':'B';
	    printf("%c\n", best);
	}
	return 0;
}



