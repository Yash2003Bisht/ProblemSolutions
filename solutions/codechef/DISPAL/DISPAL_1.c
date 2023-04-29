// DATE: 29/04/2023, 03:13:06
// PROBLEM NAME: Distinct Palindrome
// PROBLEM URL: https://www.codechef.com/problems/DISPAL
// PROBLEM DIFFICULTY RATTING: 1304
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x;
    scanf("%d", &t);
    
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        if ((n <= x && x != 1) || n-x < x-1){
            printf("-1");
        } else {
            char palindrome[n+1];
            
            for (int i=0; i<n; i++)
                palindrome[i] = 'a';
            
            for (int i=0; i<x; i++)
                palindrome[i] = palindrome[n-i-1] = 'a' + i;
            
            palindrome[n+1] = '\0';
            printf("%s", palindrome);
            
        }
        
        printf("\n");
        
    }
    
	return 0;
}



