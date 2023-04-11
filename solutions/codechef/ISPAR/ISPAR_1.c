// DATE: 11/04/2023, 08:43:39
// PROBLEM NAME: Is this priority or parity!
// PROBLEM URL: https://www.codechef.com/problems/ISPAR
// PROBLEM DIFFICULTY RATTING: 1305
// STATUS: accepted
// TIME: 0.04
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, k;
    scanf("%d", &t);

    while(t--){
        scanf("%lld%lld", &n, &k);

        if (k == 1){
            if (n%2 == 0)
                printf("EVEN\n");
            else
                printf("ODD\n");
        } else if (k == 2){
            printf("ODD\n");
        } else{
            printf("EVEN\n");
        }

    }
    
	return 0;
}


