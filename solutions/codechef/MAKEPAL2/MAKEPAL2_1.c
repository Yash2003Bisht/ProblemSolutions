// DATE: 10/07/2023, 08:11:04
// PROBLEM NAME: Make Palindrome 2
// PROBLEM URL: https://www.codechef.com/problems/MAKEPAL2
// PROBLEM DIFFICULTY RATTING: 1393
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, count_0, count_1;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        char b[n+1];
        count_0 = 0, count_1 = 0;
        scanf("%s", b);

        for (int i=0; i<n; i++){
            if (b[i] == '1')
                count_1++;
            else
                count_0++;
        }

        if (count_1 < count_0){
            for (int i=0; i<count_0; i++)
                printf("0");
        } else{
            for (int i=0; i<count_1; i++)
                printf("1");
        }

        printf("\n");

    }

	return 0;
}


