// QUESTION URL: https://www.codechef.com/problems/COVID_19

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        printf("%d\n", (n-n/2)*(m%2 + m/2));
    }
    
	return 0;
}



