// DATE: 05/12/2023, 09:00:12
// PROBLEM NAME: Chef and Ridges
// PROBLEM URL: https://www.codechef.com/problems/PRDRG
// PROBLEM DIFFICULTY RATTING: 1505
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, num, denum;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        num = 0, denum = 1;

        for (int i=1; i<=n; i++){
            num *= 2;
            denum *= 2;

            if (i%2 == 1)
                num++;
            else
                num--;

        }

        printf("%d %d ", num, denum);

    }
    
	return 0;
}



