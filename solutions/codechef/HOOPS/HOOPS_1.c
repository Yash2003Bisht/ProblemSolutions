// QUESTION URL: https://www.codechef.com/problems/HOOPS
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", (n/2)+1);
    }
	return 0;
}



