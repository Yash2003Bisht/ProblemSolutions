// DATE: 09/10/2023, 09:45:10
// PROBLEM NAME: Stone
// PROBLEM URL: https://www.codechef.com/problems/RRSTONE
// PROBLEM DIFFICULTY RATTING: 1489
// STATUS: accepted
// TIME: 0.02
// MEMORY: 2.2M

#include <stdio.h>
#define max(a, b)(a>b?a:b)
#define lld long long int

lld get_max(lld a[], int size){
    lld value = 0;

    for (int i=0; i<size; i++)
        value = max(value, a[i]);

    return value;

}

int main(void) {
    int n;
    lld k, max_value;
    scanf("%d%lld", &n, &k);

    lld a[n];

    for (int i=0; i<n; i++)
        scanf("%lld", &a[i]);

    if (k){
        k = k%2 == 0 ? 2 : 1;
        for (int i=0; i<k; i++){
            max_value = get_max(a, n);;

            for (int i=0; i<n; i++)
                a[i] = max_value - a[i];

        }
    }

    for (int i=0; i<n; i++)
        printf("%lld ", a[i]);

	return 0;
}


