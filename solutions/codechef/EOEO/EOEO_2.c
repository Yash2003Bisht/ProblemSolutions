// DATE: 12/05/2023, 07:46:47
// PROBLEM NAME: The Tom and Jerry Game!
// PROBLEM URL: https://www.codechef.com/problems/EOEO
// PROBLEM DIFFICULTY RATTING: 1337
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    long long ts;
    
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &ts);
        
        if (ts <= 2)
            printf("0\n");
        else if (ts%2 != 0)
            printf("%lld\n", ts/2);
        else{
            while(ts%2 == 0)
                ts /= 2;
            printf("%lld\n", ts/2);
        }
        
    }
    
	return 0;
}



