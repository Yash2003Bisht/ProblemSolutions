// QUESTION URL: https://www.codechef.com/problems/BREAKSTICK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long int t, x, n;
    scanf("%ld", &t);
    while(t--){
        scanf("%ld%ld", &n,&x);
        if (n%2 == 0 || x%2 != 0){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



