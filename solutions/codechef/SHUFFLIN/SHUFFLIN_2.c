// DATE: 23/05/2023, 07:15:02
// PROBLEM NAME: Shuffling Parities
// PROBLEM URL: https://www.codechef.com/problems/SHUFFLIN
// PROBLEM DIFFICULTY RATTING: 1347
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.1M

#include <stdio.h>
#define min(a, b)(a>b?b:a)

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int a, odd = 0, even = 0, ans;

        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (a%2 == 0)
                even++;
            else
                odd++;
        }

        ans = min(n/2, odd) + min(n/2 + n%2, even);
        printf("%d\n", ans);

    }
    
	return 0;
}



