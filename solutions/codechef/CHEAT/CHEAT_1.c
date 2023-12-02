// DATE: 02/12/2023, 09:32:20
// PROBLEM NAME: Dracula Eats
// PROBLEM URL: https://www.codechef.com/problems/CHEAT
// PROBLEM DIFFICULTY RATTING: 763
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int count = n/7;

        if (n%7 > 1)
            count++;

        printf("%d\n", count);

    }
    
	return 0;
}



