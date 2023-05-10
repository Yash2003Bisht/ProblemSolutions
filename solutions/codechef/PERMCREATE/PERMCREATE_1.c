// DATE: 10/05/2023, 07:38:26
// PROBLEM NAME: Permutation Creation
// PROBLEM URL: https://www.codechef.com/problems/PERMCREATE
// PROBLEM DIFFICULTY RATTING: 1323
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, temp;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        
        if (n <= 3)
            printf("-1\n");
        else {
            temp = n%2 != 0 ? (n/2) - 1: 0;
            for (int i=n/2; i>0; i--){
                printf("%d %d ", i, n-temp);
                temp = n%2 != 0 ? temp-1 : temp+1;
            }

            if (n%2 != 0)
                printf("%d\n", (n/2)+1);
            else
                printf("\n");
        }
     
    }
    
	return 0;
}



