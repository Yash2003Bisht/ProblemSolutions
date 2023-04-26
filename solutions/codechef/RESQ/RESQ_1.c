// DATE: 26/04/2023, 07:22:48
// PROBLEM NAME: Arranging Cup-cakes
// PROBLEM URL: https://www.codechef.com/problems/RESQ
// PROBLEM DIFFICULTY RATTING: 1322
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    int t, n, ans, count, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = sqrt(n);

        if (count*count == n){
            printf("0\n");
        } else if (isprime(n)){
            printf("%d\n", n-1);
        } else {
            for (int i=2; i<=count; i++){
                if (n%i == 0){
                    temp = i;
                }
            }
            ans = abs((n/temp)-temp);
            printf("%d\n", ans);
        }

    }
    
	return 0;
}

