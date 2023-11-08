// DATE: 08/11/2023, 09:06:58
// PROBLEM NAME: Expense List
// PROBLEM URL: https://www.codechef.com/problems/EXPENSES
// PROBLEM DIFFICULTY RATTING: 719
// STATUS: accepted
// TIME: 0.00
// MEMORY: 2M

#include <stdio.h>

int main(void) {
    int t, n, x, saving;
    scanf("%d", &t);

    while(t--){
        scanf("%d%d", &n, &x);
        saving = pow(2, x);

        for (int i=0; i<n; i++)
            saving /= 2;

        printf("%d\n", saving);

    }
    
	return 0;
}



