// QUESTION URL: https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem
// STATUS: Accepted

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,m,total=0;
    scanf("%d", &n);
    while (n>0){
        total += n % 10;
        n = n / 10;
    }
    printf("%d\n", total);
    return 0;
}
