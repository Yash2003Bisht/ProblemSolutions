// QUESTION URL: https://www.codechef.com/problems/BREAKSTICK

#include <stdio.h>

int main(void) {
    long int t, x, n;
    scanf("%ld", &t);
    while(t--){
        scanf("%ld%ld", &n,&x);
        if (n%2 == 0 || (x == 1 && x != n)){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



