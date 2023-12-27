// DATE: 26/12/2023, 09:07:44
// PROBLEM NAME: Is it a VOWEL or CONSONANT
// PROBLEM URL: https://www.codechef.com/problems/VOWELTB
// PROBLEM DIFFICULTY RATTING: 840
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    char c;
    scanf("%c", &c);

    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        printf("Vowel");
    else
        printf("Consonant");

}


