// DATE: 22/11/2023, 08:59:24
// PROBLEM NAME: Tennis Tournament
// PROBLEM URL: https://www.codechef.com/problems/EXUNB
// PROBLEM DIFFICULTY RATTING: 1503
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, total_matches;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        total_matches = ((n-1)*n) / 2;

        if (total_matches%n != 0)
            printf("NO\n");
        else {
            printf("YES\n");
            int count = n/2 + 1, wins = total_matches/n, start = 1;
            for (int i=0; i<count; i++){
                int counter = start, print_count = 0;
                for (int j=0; j<n; j++){
                    if (j == counter && print_count < wins){
                        printf("1");
                        counter++, print_count++;
                    } else {
                        printf("0");
                    }
                }
                start++;
                printf("\n");
            }

            start = 1;
            for (int i=count; i<n; i++){
                for (int j=0; j<n; j++){
                    if (j < start || n-j < wins)
                        printf("1");
                    else
                        printf("0");
                }
                start++, wins--;
                printf("\n");
            }

        }

    }

	return 0;
}


