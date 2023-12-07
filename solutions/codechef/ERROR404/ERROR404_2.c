// DATE: 07/12/2023, 09:39:03
// PROBLEM NAME: 404 Not Found
// PROBLEM URL: https://www.codechef.com/problems/ERROR404
// PROBLEM DIFFICULTY RATTING: 267
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int status_code;
    scanf("%d", &status_code);

    if (status_code == 200)
        printf("FOUND");
    else
        printf("NOT FOUND");

	return 0;
}



