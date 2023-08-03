// DATE: 03/08/2023, 08:58:12
// PROBLEM NAME: Fit to Play
// PROBLEM URL: https://www.codechef.com/problems/PLAYFIT
// PROBLEM DIFFICULTY RATTING: 1419
// STATUS: accepted
// TIME: 0.08
// MEMORY: 1.9M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)

int main(void) {
    int t, n, diff, min_value;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int scores[n];;

        for (int i=0; i<n; i++)
            scanf("%d", &scores[i]);

        diff = 0, min_value = scores[0];

        for (int i=1; i<n; i++){
            diff = max(diff, scores[i] - min_value);
            min_value = min(min_value, scores[i]);
        }

        if (!diff)
            printf("UNFIT\n");
        else
            printf("%d\n", diff);
        
    }
    
	return 0;
}



