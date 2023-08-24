// DATE: 24/08/2023, 08:04:18
// PROBLEM NAME: Akash and Dinner
// PROBLEM URL: https://www.codechef.com/problems/CHEFDINE
// PROBLEM DIFFICULTY RATTING: 1438
// STATUS: accepted
// TIME: 0.07
// MEMORY: 3.7M

#include <stdbool.h>
#include <stdio.h>
#define lld long long int
  
void swap(lld* xp, lld* yp){
    lld temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(void) {
    int t;
    lld n, k, temp, cooking_time;
    bool swapped;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &n, &k);
        lld a[n], b[n], counter[100000] = {0};
        cooking_time = 0;

        for (lld i=0; i<n*2; i++){
            if (i<n)
                scanf("%lld", &a[i]);
            else
                scanf("%lld", &b[i-n]);
        }

        for (lld i = 0; i < n - 1; i++) {
            swapped = false;

            for (lld j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    swap(&b[j], &b[j + 1]);
                    swap(&a[j], &a[j + 1]);
                    swapped = true;
                }
            }

            if (swapped == false)
                break;

        }

        for (lld i=0; i<n && k > 0; i++){
            if (!counter[a[i]-1]){
                cooking_time += b[i];
                counter[a[i]-1] = 1;
                k--;
            }
        }

        if (!k)
            printf("%lld\n", cooking_time);
        else
            printf("-1\n");
    }
    
	return 0;
}



