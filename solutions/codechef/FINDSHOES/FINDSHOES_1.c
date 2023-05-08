// DATE: 08/05/2023, 05:47:10
// PROBLEM NAME: Finding Shoes
// PROBLEM URL: https://www.codechef.com/problems/FINDSHOES
// PROBLEM DIFFICULTY RATTING: 646
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);

        if (n <= m)
            printf("%d\n", n);
        else
            printf("%d\n", n*2 - m);

    }
    
	return 0;
}



