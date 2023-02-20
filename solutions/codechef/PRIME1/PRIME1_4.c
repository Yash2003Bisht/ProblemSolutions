// DATE: 04/11/2022, 07:32:39
// PROBLEM NAME: Prime Generator
// PROBLEM URL: https://www.codechef.com/problems/PRIME1
// PROBLEM DIFFICULTY RATTING: 1069
// STATUS: accepted
// TIME: 0.98
// MEMORY: 5.3M

#include <stdio.h>
#include <math.h>

int isprime(long long int num){
    
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
    int t;
    long long int m, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &m);
        scanf("%lld", &n);
        
        for (long long int i=m; i<=n; i++){
            if (isprime(i)){
                printf("%lld\n", i);
            }
        }
        printf("\n");
    }
	return 0;
}



