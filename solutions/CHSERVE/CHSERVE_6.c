// QUESTION URL: https://www.codechef.com/problems/CHSERVE
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, p1, p2, k, flag, total;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &p1, &p2, &k);
        flag = 0, total = p1 + p2;

        while (total >= k){
            total -= k;
            if (flag) flag = 0;
            else flag = 1;
        }

        if (flag) printf("COOK\n");
        else printf("CHEF\n");

    }

	return 0;
}



