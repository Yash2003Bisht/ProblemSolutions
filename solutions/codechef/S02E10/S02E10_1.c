// DATE: 20/01/2023, 06:55:18
// PROBLEM NAME: The One with Russ
// PROBLEM URL: https://www.codechef.com/problems/S02E10
// PROBLEM DIFFICULTY RATTING: 1230
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t, n, x, k, b;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d%d", &n, &x, &k);
        int a[n], count = 0, temp;

        for (int i=0; i<n*2; i++){
            if (i<n) 
                scanf("%d", &a[i]);

            else{
                scanf("%d", &b);
                temp = abs(a[i-n] - b);

                if (temp <= k) count++;

            }

        }

        if (count >= x) printf("YES\n");
        else printf("NO\n");

    }

	return 0;
}


