// DATE: 08/05/2023, 05:35:08
// PROBLEM NAME: Hackerman
// PROBLEM URL: https://www.codechef.com/problems/PRIMEDICE
// PROBLEM DIFFICULTY RATTING: 643
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>
#include <math.h>

int is_prime(int num){
    for (int i=2; i<=sqrt(num); i++){
        if (num%i == 0)
            return 0;
    }
    return 1;
}

int main(void) {
    int t, a, b;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &a, &b);
        
        if (is_prime(a+b))
            printf("Alice\n");
        else
            printf("Bob\n");
        
    }
    
	return 0;
}



