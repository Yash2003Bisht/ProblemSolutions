// DATE: 05/05/2023, 07:38:30
// PROBLEM NAME: Count Substrings
// PROBLEM URL: https://www.codechef.com/problems/CSUB
// PROBLEM DIFFICULTY RATTING: 1330
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, count;
    long long int total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char s[n+1];
        count = 0;
        total = 0;
        
        scanf("%s", s);

        for(int i=0; i<n; i++){
            if (s[i] == '1')
                count++;
        }
        
        total = count*(count+1)/2;
        printf("%lld\n", total);
    }
    
	return 0;
}



