// QUESTION URL: https://www.codechef.com/problems/PODIUM
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a,&b);
        printf("%d\n", a+b);
    }
	return 0;
}



