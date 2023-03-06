// DATE: 06/03/2023, 08:08:40
// PROBLEM NAME: Add smallest prime factor
// PROBLEM URL: https://www.codechef.com/problems/PRIMEFACT
// PROBLEM DIFFICULTY RATTING: 1272
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.2M

#include <stdio.h>

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

long long int smallest_prime_factor(long long int num){
    for (long long int i=2; i<num; i++){
        if (isprime(i) && num % i == 0){
            return i;
        }
    }
    
    return 2;
    
}

int main(void) {
    int t;
    long long int x, y, count;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &x, &y);
        count = 0;

        while(x < y){
            if (isprime(x)){
                x += x;
            } else {
                x += smallest_prime_factor(x);
            }

            count++;

        }
        
        printf("%lld\n", count);
        
    }
    
	return 0;
}



