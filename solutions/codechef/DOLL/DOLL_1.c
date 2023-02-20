// DATE: 08/10/2022, 07:38:45
// PROBLEM NAME: Red Light, Green Light
// PROBLEM URL: https://www.codechef.com/problems/DOLL
// PROBLEM DIFFICULTY RATTING: 984
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.2M

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



