// DATE: 25/03/2023, 07:55:50
// PROBLEM NAME: Little Elephant and Bombs
// PROBLEM URL: https://www.codechef.com/problems/LEBOMBS
// PROBLEM DIFFICULTY RATTING: 1284
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;
        char s[n+1];
        scanf("%s", s);
        
        for (int i=0; i<n; i++){
            if (s[i] == '0' && (i == 0 || s[i-1] == '0') && (i == n-1 || s[i+1] == '0'))
                count++;
        }

        printf("%d\n", count);

    }
    
	return 0;
}



