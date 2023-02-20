// DATE: 18/01/2023, 07:15:57
// PROBLEM NAME: Sarthak and his Magic Grid
// PROBLEM URL: https://www.codechef.com/problems/GRIDXOR
// PROBLEM DIFFICULTY RATTING: 1227
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    
    int t, n;
    scanf("%d", &t);
    
    char grid[205];
    
    for(int i=0; i<=200; i+=2) {
        grid[i] = '1';
        grid[i+1] = ' ';
    }
    
    grid[200+1] = '\0';

    while(t--) {
        scanf("%d", &n);

        for(int i=0; i<n; i++)
            printf("%.*s\n", n * 2, grid);

    }
	return 0;
}

