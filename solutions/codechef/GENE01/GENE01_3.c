// DATE: 04/02/2024, 03:55:30
// PROBLEM NAME: Genes
// PROBLEM URL: https://www.codechef.com/problems/GENE01
// PROBLEM DIFFICULTY RATTING: 826
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    char c1, c2;
    scanf("%c %c", &c1, &c2);

    if (c1 == c2)
        printf("%c", c1);
    else{
        if (c1 == 'R' || c2 == 'R')
            printf("R");
        else
            printf("B");
    }

}



