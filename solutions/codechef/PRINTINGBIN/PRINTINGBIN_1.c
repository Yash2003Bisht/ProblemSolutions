// DATE: 29/05/2023, 07:19:55
// PROBLEM NAME: Printing Binary Array
// PROBLEM URL: https://www.codechef.com/problems/PRINTINGBIN
// PROBLEM DIFFICULTY RATTING: 1130
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t, n, a;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);

        for (int i=0; i<n; i++){
            scanf("%d", &a);

            if (a == 0)
                printf("1 ");
            else
                printf("0 ");

        }

        printf("\n");


    }
    
	return 0;
}



