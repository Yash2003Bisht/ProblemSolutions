// QUESTION URL: https://www.codechef.com/problems/AUDIBLE

#include <stdio.h>

int main(void) {
    int t, x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if (x >= 67 && x <= 45000){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



