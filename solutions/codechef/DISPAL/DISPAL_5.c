// DATE: 29/04/2023, 02:36:43
// PROBLEM NAME: Distinct Palindrome
// PROBLEM URL: https://www.codechef.com/problems/DISPAL
// PROBLEM DIFFICULTY RATTING: 1304
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, x, count, middle;
    scanf("%d", &t);
    
    char alphabets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', \
                        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', \
                        'u', 'v', 'w', 'x', 'y', 'z'};
    
    while(t--){
        scanf("%d%d", &n, &x);
        
        if (x == 1){
            for (int i=0; i<n; i++)
                printf("a");
        } else if (x == n || n < x || n-x < x-1){
            printf("-1");
        } else {
            middle = n - (x*2);
            
            for (int i=0; i<x; i++)
                printf("%c", alphabets[i]);
            
            for (int i=0; i<middle; i++)
                printf("%c", alphabets[x-1]);
            
            for (int i=x-1; i>=0; i--)
                printf("%c", alphabets[i]);
            
        }
        
        printf("\n");

        
    }
    
	return 0;
}



