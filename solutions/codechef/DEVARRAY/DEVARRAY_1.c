// DATE: 09/12/2023, 08:59:02
// PROBLEM NAME: Devu and an Array
// PROBLEM URL: https://www.codechef.com/problems/DEVARRAY
// PROBLEM DIFFICULTY RATTING: 1126
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.6M

#include <stdio.h>
#define min(a,b)(a>b?b:a)
#define max(a,b)(a>b?a:b)

int main(void) {
    int t, n, q, a, num, _min, _max;
    scanf("%d%d", &n, &q);

    scanf("%d", &a);
    _min = a, _max = a;

    for (int i=1; i<n; i++){
        scanf("%d", &a);
        _min = min(_min, a);
        _max = max(_max, a);
    }

    while(q--){
        scanf("%d", &num);

        if (num <= _max && num >= _min)
            printf("Yes\n");
        else
            printf("No\n");

    }

	return 0;
}



