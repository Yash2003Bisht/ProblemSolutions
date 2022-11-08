// QUESTION URL: https://www.codechef.com/problems/CHFRICH
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,a,b,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &a,&b,&x);
        printf("%d\n", (b-a)/x);
    }
	return 0;
}



