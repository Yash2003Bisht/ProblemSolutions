// DATE: 14/10/2022, 06:34:51
// PROBLEM NAME: Palindrome Flipping
// PROBLEM URL: https://www.codechef.com/problems/FLIPPAL
// PROBLEM DIFFICULTY RATTING: 1173
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int t,n,one,zero;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        
        char s[n];
        one = zero = 0;
        
        scanf("%s", &s);
        
        for (int i=0; i<n; i++){
            if (s[i] == '0')
                zero++;
            else
                one++;
        }
        
        if (one%2 == 0 || zero%2 == 0)
            printf("YES\n");
        else
            printf("NO\n");
        
    }
	return 0;
}



