// QUESTION URL: https://www.codechef.com/problems/REPEAT
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, k, s;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &k, &s);
        int diff = s - (n*n);
        printf("%d\n", diff/(k-1));
    }
	return 0;
}



