// DATE: 18/05/2023, 08:02:49
// PROBLEM NAME: Careless Chef
// PROBLEM URL: https://www.codechef.com/problems/LOSTSEQ
// PROBLEM DIFFICULTY RATTING: 1345
// STATUS: accepted
// TIME: 0.05
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, b;
    long long int total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        total = 0;

        for (int i=0; i<n*2; i++){
            scanf("%d", &b);
            total += b;
        }
        
        if (total%2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
    
	return 0;
}



