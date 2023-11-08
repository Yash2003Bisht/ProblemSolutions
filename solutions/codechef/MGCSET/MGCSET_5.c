// DATE: 08/11/2023, 08:56:29
// PROBLEM NAME: Magic Set
// PROBLEM URL: https://www.codechef.com/problems/MGCSET
// PROBLEM DIFFICULTY RATTING: 1472
// STATUS: partially accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int fact(int n){
    int value = 1;
    for (int i=1; i<=n; i++) value *= i;
    return value;
}

int comb(int n, int k){
    return fact(n) / (fact(k) * fact(n - k));
}

int main(void) {
    int t, n, m, count, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        int arr[n];
        count = 0;

        for (int i=0; i<n; i++)
            scanf("%d", &arr[i]);
        
        for (int i=0; i<n; i++){
            if (arr[i]%m == 0)
                count++;
        }
        
        total = 0;
        for (int i=0; i<count; i++)
            total += comb(count, i+1);

        printf("%d\n", total);

    }
    
	return 0;
}



