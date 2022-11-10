// QUESTION URL: https://www.codechef.com/problems/CRICRANK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a1,a2,a3,b1,b2,b3;
	scanf("%d", &t);
	while(t--){
	    scanf("%d%d%d", &a1,&a2,&a3);
	    scanf("%d%d%d", &b1,&b2,&b3);
	    int a = 0;
	    int b = 0;
	    if (a1>b1){
	        a++;
	    } else {
	        b++;
	    }
	    if (a2>b2){
	        a++;
	    } else {
	        b++;
	    }
	    if (a3>b3){
	        a++;
	    } else {
	        b++;
	    }
	    
	    char best = a>b?'A':'B';
	    printf("%c\n", best);
	}
	return 0;
}



