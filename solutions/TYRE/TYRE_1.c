// QUESTION URL: https://www.codechef.com/problems/TYRE

#include <stdio.h>

int main(void) {
    int t,n,m;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&m);
        printf("%d\n", (n*2)+(m*4));
    }
	return 0;
}



