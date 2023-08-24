// DATE: 24/08/2023, 08:06:20
// PROBLEM NAME: Akash and Dinner
// PROBLEM URL: https://www.codechef.com/problems/CHEFDINE
// PROBLEM DIFFICULTY RATTING: 1438
// STATUS: accepted
// TIME: 0.07
// MEMORY: 2.7M

#include <stdbool.h>
#include <stdio.h>
#define lld long long int
  
void swap(int* xp, int* yp){
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

int main(void) {
    int t, n, k, temp;
    lld cooking_time;
    bool swapped;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &k);
        int a[n], b[n], counter[100000] = {0};
        cooking_time = 0;

        for (int i=0; i<n*2; i++){
            if (i<n)
                scanf("%d", &a[i]);
            else
                scanf("%d", &b[i-n]);
        }

        for (int i = 0; i < n - 1; i++) {
            swapped = false;

            for (int j = 0; j < n - i - 1; j++) {
                if (b[j] > b[j + 1]) {
                    swap(&b[j], &b[j + 1]);
                    swap(&a[j], &a[j + 1]);
                    swapped = true;
                }
            }

            if (swapped == false)
                break;

        }

        for (int i=0; i<n && k > 0; i++){
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



