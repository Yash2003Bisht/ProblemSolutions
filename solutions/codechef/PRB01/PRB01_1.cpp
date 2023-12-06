// DATE: 06/12/2023, 09:16:58
// PROBLEM NAME: Primality Test
// PROBLEM URL: https://www.codechef.com/problems/PRB01
// PROBLEM DIFFICULTY RATTING: 794
// STATUS: accepted
// TIME: 0.00
// MEMORY: 3.6M

#include <iostream>
using namespace std;

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

int main() {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);

        if (isprime(n))
            printf("yes\n");
        else
            printf("no\n");

    }
    
	return 0;
}


