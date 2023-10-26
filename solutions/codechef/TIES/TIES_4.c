// DATE: 26/10/2023, 09:15:11
// PROBLEM NAME: Take it Easy
// PROBLEM URL: https://www.codechef.com/problems/TIES
// PROBLEM DIFFICULTY RATTING: 1289
// STATUS: accepted
// TIME: 0.02
// MEMORY: 1.8M

#include <stdio.h>

int main(void) {
    int t, n, total;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        int a[n];
        total = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            total += a[i];
        }

        if (total%n != 0)
            printf("No\n");
        else {
            int max = total / n, flag  = 1;

            for (int i=0; i<n; i++){
                if (abs(max - a[i])%2 != 0){
                    flag = 0;
                    break;
                }
            }

            if (flag)
                printf("Yes\n");
            else
                printf("No\n");

        }

    }
    
	return 0;
}



