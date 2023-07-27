// DATE: 27/07/2023, 08:30:50
// PROBLEM NAME: Guessing Game
// PROBLEM URL: https://www.codechef.com/problems/GUESS
// PROBLEM DIFFICULTY RATTING: 1410
// STATUS: accepted
// TIME: 0.02
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, m, total_outcomes, favourable_outcomes;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld%lld", &n, &m);

        total_outcomes = n*m;

        if (total_outcomes%2 != 0){
            favourable_outcomes = total_outcomes/2;
            printf("%lld/%lld\n", favourable_outcomes, total_outcomes);
        }
        else
            printf("1/2\n");
        
    }
    
	return 0;
}



