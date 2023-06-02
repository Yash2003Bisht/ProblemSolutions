// DATE: 02/06/2023, 07:24:32
// PROBLEM NAME: Palindromes Not Allowed
// PROBLEM URL: https://www.codechef.com/problems/NOPAL
// PROBLEM DIFFICULTY RATTING: 1360
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        char alphabets = 'a';

        while(n--){
            printf("%c", alphabets++);
            if (alphabets > 122)
                alphabets = 'a';
   
        }

        printf("\n");

    }

	return 0;
}



