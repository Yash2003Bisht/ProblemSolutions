// DATE: 13/10/2023, 09:26:25
// PROBLEM NAME: Interesting XOR!
// PROBLEM URL: https://www.codechef.com/problems/IRSTXOR
// PROBLEM DIFFICULTY RATTING: 1487
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.7M

#include <stdio.h>
#define lld long long int
#define max(a,b)(a>b?a:b)

lld find(lld num, lld *arr){
    for (int i=0; i<30; i++){
        if (arr[i] > num)
            return arr[i];
    }
    return arr[29];
}

int main(void) {
    int t;
    lld c, d, ans, pre_caculated_values[30];
    pre_caculated_values[0] = 2;

    for (int i=1; i<=30; i++)
        pre_caculated_values[i] = pre_caculated_values[i-1]*2;

    scanf("%d", &t);

    while(t--){
        scanf("%lld", &c);
        d = find(c, pre_caculated_values) / 2;

        ans = 0;
        ans = max(ans, (d-1)*((d-1)^c));

        printf("%lld\n", ans);

    }

	return 0;
}


