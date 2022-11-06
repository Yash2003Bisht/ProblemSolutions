// QUESTION URL: https://www.codechef.com/problems/DOLL
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t, n, k, h, minimum_shot;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        minimum_shot = 0;
        for (int i=0; i<n; i++){
            scanf("%d", &h);
            if (h > k){
                minimum_shot++;
            }
        }
        printf("%d\n", minimum_shot);
    }
	return 0;
}



