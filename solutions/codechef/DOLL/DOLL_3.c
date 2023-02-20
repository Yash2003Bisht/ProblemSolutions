// DATE: 08/10/2022, 07:31:00
// PROBLEM NAME: Red Light, Green Light
// PROBLEM URL: https://www.codechef.com/problems/DOLL
// PROBLEM DIFFICULTY RATTING: 984
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, k, n_, minimum_shot;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n, &k);
        minimum_shot = 0;
        for (int i=0; i<n; i++){
            scanf("%d", &n_);
            if (n_ > k){
                minimum_shot++;
            }
        }
        printf("%d\n", minimum_shot);
    }
	return 0;
}



