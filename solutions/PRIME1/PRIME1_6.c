// QUESTION URL: https://www.codechef.com/problems/PRIME1
// STATUS: time limit exceeded

#include <stdio.h>
#include <math.h>

int isprime(long long int num){
    if (num > 1){
       int factorial = 1;

        for (int i = 1; i <= num - 1; i++) {
            factorial *= i;
        }
      
        if ((factorial + 1) % num == 0)
            return 1;
    }
    
    return 0;
    
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



