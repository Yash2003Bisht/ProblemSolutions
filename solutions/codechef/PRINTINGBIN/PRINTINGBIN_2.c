// DATE: 29/05/2023, 07:18:47
// PROBLEM NAME: Printing Binary Array
// PROBLEM URL: https://www.codechef.com/problems/PRINTINGBIN
// PROBLEM DIFFICULTY RATTING: 1130
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        int a[n];

        for (int i=0; i<n; i++)
            scanf("%d", &a[i]);

        for (int i=0; i<n; i++){
            if (a[i] == 0)
                printf("1 ");
            else
                printf("0 ");
        }

        printf("\n");


    }
    
	return 0;
}



