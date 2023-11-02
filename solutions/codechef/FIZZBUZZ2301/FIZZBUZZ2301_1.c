// DATE: 02/11/2023, 09:11:19
// PROBLEM NAME: Fan Poll
// PROBLEM URL: https://www.codechef.com/problems/FIZZBUZZ2301
// PROBLEM DIFFICULTY RATTING: 273
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if (a > b && a > c)
        printf("Yes");
    else
        printf("No");

	return 0;
}



