// DATE: 26/04/2023, 07:21:12
// PROBLEM NAME: Arranging Cup-cakes
// PROBLEM URL: https://www.codechef.com/problems/RESQ
// PROBLEM DIFFICULTY RATTING: 1322
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define min(a,b)(a>b?b:a)

int isprime(int num){
    
    if (num == 1)
        return 0;
    else if (num <= 3)
        return 1;
    else if (num%2 == 0 || num%3 == 0)
        return 0;

    for (int i = 5; i*i <= num; i += 6) {
        if (num % i == 0 || num%(i+2) == 0)
            return 0;
    }

    return 1;
    
}


int main(void) {
    int t, n, ans, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        temp = sqrt(n);

        if (temp*temp == n){
            printf("0\n");
        } else if (isprime(n)){
            printf("%d\n", n-1);
        } else {
            ans = n - 1;
    
            for (int i=2; i<n; i++){
                if (n%i == 0){
                    temp = abs((n/i)-i);
                    ans = min(ans, temp);
                }
            }
            
            printf("%d\n", ans);
        }

    }
    
	return 0;
}

