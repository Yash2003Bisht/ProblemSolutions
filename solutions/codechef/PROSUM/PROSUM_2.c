// DATE: 07/10/2023, 09:02:44
// PROBLEM NAME: Little Chef and Numbers
// PROBLEM URL: https://www.codechef.com/problems/PROSUM
// PROBLEM DIFFICULTY RATTING: 1490
// STATUS: accepted
// TIME: 0.10
// MEMORY: 1.9M

#include <stdio.h>
#define lld long long int

int main(void) {
    int t, n;
    lld count, num, pairs;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int a[n];
        count = 0, num = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for (int i=0; i<n; i++){
            if (a[i] > 1)
                count++;
            if (a[i] == 2 && i < n-1)
                num++;
        }

        if (a[n-1] == 2)
            pairs = ((count-1)*count)/2 - (num*(num+1))/2;
        else
            pairs = ((count-1)*count)/2 - ((num-1)*num)/2;

        printf("%lld\n", pairs);

    }

	return 0;
}


