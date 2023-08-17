// DATE: 17/08/2023, 07:31:16
// PROBLEM NAME: Prefix Sums
// PROBLEM URL: https://www.codechef.com/problems/UNQEQ
// PROBLEM DIFFICULTY RATTING: 1431
// STATUS: accepted
// TIME: 0.04
// MEMORY: 1.5M

#include <stdio.h>

int main(void) {
    int t, n, range_sum, temp;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        range_sum = (n+1)*n/2;

        if (range_sum%2 == 0){
            printf("YES\n");
            temp = n/4;

            for (int i=1; i<=temp; i++)
                printf("%d ", i);

            for (int i=0; i<temp; i++)
                printf("%d ", n-i);

            printf("\n");
            temp++;

            for (int i=temp; i<temp+n/2; i++)
                printf("%d ", i);

        } else
            printf("NO\n");
        
    }
    
	return 0;
}



