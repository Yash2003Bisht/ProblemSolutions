// DATE: 03/08/2023, 08:57:47
// PROBLEM NAME: Fit to Play
// PROBLEM URL: https://www.codechef.com/problems/PLAYFIT
// PROBLEM DIFFICULTY RATTING: 1419
// STATUS: accepted
// TIME: 0.08
// MEMORY: 1.9M

#include <stdio.h>
#define max(a,b)(a>b?a:b)
#define min(a,b)(a>b?b:a)
#define in int

int main(void) {
    in t, n, diff, min_value;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        in scores[n];;

        for (in i=0; i<n; i++)
            scanf("%d", &scores[i]);

        diff = 0, min_value = scores[0];

        for (in i=1; i<n; i++){
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



