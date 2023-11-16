// DATE: 16/11/2023, 08:40:13
// PROBLEM NAME: Important Pages on CodeChef
// PROBLEM URL: https://www.codechef.com/problems/CHEFPAGES
// PROBLEM DIFFICULTY RATTING: 719
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d%d", &a, &b);

    if (a == 1 && b == 1){
        printf("https://discuss.codechef.com");
    } else if (a == 1){
        printf("https://www.codechef.com/contests");
    } else {
        printf("https://www.codechef.com/practice");
    }

	return 0;
}



