// DATE: 27/07/2023, 08:29:58
// PROBLEM NAME: Guessing Game
// PROBLEM URL: https://www.codechef.com/problems/GUESS
// PROBLEM DIFFICULTY RATTING: 1410
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.9M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, m, total_outcomes, prob;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &m);
        
        total_outcomes = n*m;
    
        if (total_outcomes%2 != 0){
            prob = total_outcomes/2;
            printf("%lld/%lld\n", prob, total_outcomes);
        }
        else
            printf("1/2\n");
        
    }
    
	return 0;
}



