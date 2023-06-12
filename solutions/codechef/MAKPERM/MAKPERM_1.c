// DATE: 10/06/2023, 08:25:40
// PROBLEM NAME: Make a Permutation
// PROBLEM URL: https://www.codechef.com/problems/MAKPERM
// PROBLEM DIFFICULTY RATTING: 1357
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        long long int a, counter[n];
        count = 0;

        for (int i=0; i<n; i++)
            counter[i] = 0;

        for (int i=0; i<n; i++){
            scanf("%lld", &a);
            if (a <= n)
                counter[a-1]++;
        }

        for (int i=0; i<n; i++){
            if (counter[i] == 0)
                count++;
        }

        printf("%d\n", count);

    }
    
	return 0;
}



