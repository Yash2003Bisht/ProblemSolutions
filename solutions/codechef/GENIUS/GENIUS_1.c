// DATE: 30/03/2023, 07:48:11
// PROBLEM NAME: Exact Marks
// PROBLEM URL: https://www.codechef.com/problems/GENIUS
// PROBLEM DIFFICULTY RATTING: 1291
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int main(void) {
    int t; 
    long long int n, x, correct, incorrect, unattempted;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld %lld", &n, &x);

        correct = ceil((double) x/3);
        incorrect = correct*3 - x;
        unattempted = n-correct-incorrect;

        if (unattempted >= 0)
            printf("YES\n%lld %lld %lld\n", correct, incorrect, unattempted);
        else
            printf("NO\n");

    }

	return 0;
}



