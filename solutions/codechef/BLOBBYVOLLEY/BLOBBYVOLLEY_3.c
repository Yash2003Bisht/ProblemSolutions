// DATE: 17/02/2024, 06:21:05
// PROBLEM NAME: Blobby Volley Scores
// PROBLEM URL: https://www.codechef.com/problems/BLOBBYVOLLEY
// PROBLEM DIFFICULTY RATTING: 962
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n, count1, count2;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);
        count1 = 0, count2 = 0;

        char s[n+1], next = 'A';
        scanf("%s", s);

        for (int i=0; i<n; i++){
            if (s[i] == next){
                if (next == 'A')
                    count1++;
                else
                    count2++;
            } else {
                next = s[i];
            }
        }

        printf("%d %d\n", count1, count2);

    }

    return 0;
}


