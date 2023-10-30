// DATE: 30/10/2023, 08:49:13
// PROBLEM NAME: Lucky Long
// PROBLEM URL: https://www.codechef.com/problems/LUCKY5
// PROBLEM DIFFICULTY RATTING: 1478
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.7M

#include <stdio.h>

int main(void) {
    int t, count;
    char n[100002];
    scanf("%d", &t);

    while(t--){
        scanf("%s", n);
        count = 0;

        for (int i=0; n[i] != '\0'; i++){
            if (n[i] != '4' && n[i] != '7')
                count++;
        }

        printf("%d\n", count);

    }

	return 0;
}



