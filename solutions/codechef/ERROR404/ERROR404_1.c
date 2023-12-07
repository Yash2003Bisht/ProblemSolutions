// DATE: 07/12/2023, 09:39:56
// PROBLEM NAME: 404 Not Found
// PROBLEM URL: https://www.codechef.com/problems/ERROR404
// PROBLEM DIFFICULTY RATTING: 267
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int status_code;
    scanf("%d", &status_code);

    if (status_code == 404)
        printf("NOT FOUND");
    else
        printf("FOUND");

	return 0;
}



