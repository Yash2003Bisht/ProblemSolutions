// DATE: 05/09/2023, 08:54:36
// PROBLEM NAME: Total Score
// PROBLEM URL: https://www.codechef.com/problems/TOTSCR
// PROBLEM DIFFICULTY RATTING: 1448
// STATUS: accepted
// TIME: 0.01
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t, n, k;
    long long int score;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int a[k];
        char s[k+1];
        
        for (int i=0; i<k; i++)
            scanf("%d", &a[i]);
        
        for (int i=0; i<n; i++){
            scanf("%s", s);
            score = 0;
            
            for (int i=0; i<k; i++){
                if (s[i] == '1')
                    score += a[i];
            }
            
            printf("%lld\n", score);
            
        }
        
    }
    
	return 0;
}



