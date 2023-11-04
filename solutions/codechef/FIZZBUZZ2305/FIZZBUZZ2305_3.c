// DATE: 03/11/2023, 08:25:23
// PROBLEM NAME: Guess the winner!
// PROBLEM URL: https://www.codechef.com/problems/FIZZBUZZ2305
// PROBLEM DIFFICULTY RATTING: 1421
// STATUS: accepted
// TIME: 0.01
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        if (n == 1 || n%2 == 0)
            printf("Bob\n");
        else
            printf("Alice\n");

    }
    
	return 0;
}



