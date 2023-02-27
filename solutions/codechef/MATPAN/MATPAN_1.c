// DATE: 27/02/2023, 08:51:36
// PROBLEM NAME: Mathison and pangrams
// PROBLEM URL: https://www.codechef.com/problems/MATPAN
// PROBLEM DIFFICULTY RATTING: 1127
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, s[26], sum;
    char n[50001];

    scanf("%d", &t);

    while(t--){
        int counter[26] = {0};
        sum = 0;

        for (int i=0; i<26; i++)
            scanf("%d", &s[i]);

        scanf("%s", &n);

        for (int i=0; n[i] != '\0'; i++)
            counter[n[i] - 97]++;

        for (int i=0; i<26; i++){
            if (counter[i] == 0){
                sum += s[i];
            }
        }

        printf("%d\n", sum);

    }

	return 0;
}


