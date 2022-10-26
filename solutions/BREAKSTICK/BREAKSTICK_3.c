// QUESTION URL: https://www.codechef.com/problems/BREAKSTICK

#include <stdio.h>

int main(void) {
    int t, x, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&x);
        if (n%2 == 0 || (x == 1 && x != n)){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



