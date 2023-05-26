// DATE: 26/05/2023, 08:02:29
// PROBLEM NAME: Appy and Contest
// PROBLEM URL: https://www.codechef.com/problems/HMAPPY2
// PROBLEM DIFFICULTY RATTING: 1358
// STATUS: partially accepted
// TIME: 0.02
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long n, a, b, k, i, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lli%lli%lli%lli", &n, &a, &b, &k);
        count = 0;

        for (i=1; i<=n; i++){
            if ((i%a == 0 && i%b != 0) || (i%b == 0 && i%a != 0))
                count++;
            if (count >= k)
                break;
        }
        
        if (count >= k)
            printf("Win\n");
        else
            printf("Lose\n");
            
        
    }
    
	return 0;
}



