// DATE: 14/09/2023, 08:42:28
// PROBLEM NAME: Chef and Pick Digit
// PROBLEM URL: https://www.codechef.com/problems/CHEFPDIG
// PROBLEM DIFFICULTY RATTING: 1460
// STATUS: accepted
// TIME: 0.88
// MEMORY: 1.6M

#include <stdio.h>
#include <string.h>

int main(void) {
    int t, start, end;
    char n[100010];
    scanf("%d", &t);

    while(t--){
        scanf("%s", n);
        int counter[10] = {0};

        for (int i=0; i<strlen(n); i++)
            counter[n[i] - '0']++;

        for (int i=65; i<=90; i++){
            start = i/10, end = i%10;
            // count = start != end ? 0 : 1;

            if (start== end){
                if (counter[start] >= 2)
                    printf("%c", i);
            } else {
                if (counter[start] > 0 && counter[end] > 0)
                    printf("%c", i);
            }

        }

        printf("\n");

    }

	return 0;
}



