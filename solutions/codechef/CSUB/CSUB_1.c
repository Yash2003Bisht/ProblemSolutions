// DATE: 05/05/2023, 07:48:42
// PROBLEM NAME: Count Substrings
// PROBLEM URL: https://www.codechef.com/problems/CSUB
// PROBLEM DIFFICULTY RATTING: 1330
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t;
    long long int n, count, i;
    scanf("%d", &t);
    
    while(t--){
        scanf("%lld", &n);
        char s[n+1];
        count = 0;
        
        scanf("%s", s);

        for(i=0; i<n; i++){
            if (s[i] == '1')
                count++;
        }

        printf("%lld\n", count*(count+1)/2);
    }
    
	return 0;
}



