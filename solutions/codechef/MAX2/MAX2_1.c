// DATE: 13/03/2023, 08:32:10
// PROBLEM NAME: Max power
// PROBLEM URL: https://www.codechef.com/problems/MAX2
// PROBLEM DIFFICULTY RATTING: 1282
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int n, count = 0;
    scanf("%d", &n);

    char s[n];
    scanf("%s", &s);

    for (int i=n-1; i>=0; i--){
        if (s[i] != '1')
            count++;
        else
            break;
    }
    
    printf("%d", count);

	return 0;
}


