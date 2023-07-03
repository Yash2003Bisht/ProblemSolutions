// DATE: 01/07/2023, 08:07:46
// PROBLEM NAME: Chef and Bored Games
// PROBLEM URL: https://www.codechef.com/problems/PCJ18B
// PROBLEM DIFFICULTY RATTING: 1402
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = 0;

        for (int i=1; i<n+1; i += 2)
            total += (n - i + 1)*(n - i + 1);
        
        printf("%d\n", total);

    }
    
	return 0;
}



