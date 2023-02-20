// DATE: 23/09/2022, 05:53:55
// PROBLEM NAME: Candy Love
// PROBLEM URL: https://www.codechef.com/problems/CNDLOVE
// PROBLEM DIFFICULTY RATTING: 1054
// STATUS: accepted
// TIME: 0.07
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int total=0;
        for(int i=0; i<n; i++){
            scanf("%d", &a);
            total += a;
        }
        if (total%2 == 0){
            printf("NO\n");
        } else{
            printf("YES\n");
        }
    }
	return 0;
}



