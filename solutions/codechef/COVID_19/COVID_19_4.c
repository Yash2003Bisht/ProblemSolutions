// QUESTION URL: https://www.codechef.com/problems/COVID_19
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

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



