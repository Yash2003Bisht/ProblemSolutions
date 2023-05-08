// DATE: 08/05/2023, 05:41:47
// PROBLEM NAME: Finding Shoes
// PROBLEM URL: https://www.codechef.com/problems/FINDSHOES
// PROBLEM DIFFICULTY RATTING: 646
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        int left_shoes = m%2 == 0 ? m/2 : m;
        printf("%d\n", n*2 - left_shoes);
    }
    
	return 0;
}



