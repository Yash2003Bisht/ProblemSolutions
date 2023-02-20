// DATE: 19/09/2022, 06:10:00
// PROBLEM NAME: That Is My Score!
// PROBLEM URL: https://www.codechef.com/problems/WATSCORE
// PROBLEM DIFFICULTY RATTING: 1094
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,p,s,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        int total=0, max_scores[8] = {0,0,0,0,0,0,0,0};
        for (i=0; i<n; i++){
            scanf("%d%d", &p,&s);
            if (p>8){
                continue;
            }
            else if (s > max_scores[p-1]){
                max_scores[p-1] = s;
            }
        }
        
        for (i=0; i<8; i++){
            total += max_scores[i];
        }
        
        printf("%d\n", total);
        
    }
	return 0;
}



