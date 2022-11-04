// QUESTION URL: https://www.codechef.com/problems/PRIME1

#include <stdio.h>
#include <math.h>

int isprime(long long int num){
    int i, flag = 0;
    
    if (num == 1)
        return 0;
    else if (num == 2)
        return 1;

    for (i = 2; i <= (int)sqrt(num)+1; ++i) {
        if (num % i == 0) {
            flag = 1;
            break;
        }
    }


    if (flag == 0)
        return 1;

    else
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



