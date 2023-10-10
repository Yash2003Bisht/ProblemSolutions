// DATE: 09/10/2023, 09:43:17
// PROBLEM NAME: Stone
// PROBLEM URL: https://www.codechef.com/problems/RRSTONE
// PROBLEM DIFFICULTY RATTING: 1489
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 2.1M

/*
    BRUTE FORCE APPROACH - 
*/

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

    for (int i=0; i<k; i++){
        max_value = get_max(a, n);;
        
        for (int i=0; i<n; i++)
            a[i] = max_value - a[i];

    }

    for (int i=0; i<n; i++)
        printf("%lld ", a[i]);

	return 0;
}

