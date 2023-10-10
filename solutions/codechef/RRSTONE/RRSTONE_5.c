// DATE: 09/10/2023, 09:42:33
// PROBLEM NAME: Stone
// PROBLEM URL: https://www.codechef.com/problems/RRSTONE
// PROBLEM DIFFICULTY RATTING: 1489
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.6M

/*
    BRUTE FORCE APPROACH
*/

#include <stdio.h>
#define max(a, b)(a>b?a:b)

int get_max(int a[], int size){
    int value = 0;

    for (int i=0; i<size; i++)
        value = max(value, a[i]);

    return value;

}

int main(void) {
    int n, k, max_value;
    scanf("%d%d", &n, &k);

    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for (int i=0; i<k; i++){
        max_value = get_max(a, n);;
        
        for (int i=0; i<n; i++)
            a[i] = max_value - a[i];

    }

    for (int i=0; i<n; i++)
        printf("%d ", a[i]);

	return 0;
}


