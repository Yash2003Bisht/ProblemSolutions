// QUESTION URL: https://www.codechef.com/problems/S01E01

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        if (n>=21){  // 1 + 2 + 3 + 4 + 5 + 6 = 21 --> smallest possible number
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



