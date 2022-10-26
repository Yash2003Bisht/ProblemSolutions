// QUESTION URL: https://www.codechef.com/problems/CWIREFRAME

#include <stdio.h>

int main(void) {
    int t, n, m, x;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &n, &m, &x);
        printf("%d\n", (2*n+2*m)*x);
    }
	return 0;
}



