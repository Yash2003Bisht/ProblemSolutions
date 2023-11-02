// DATE: 01/11/2023, 09:47:19
// PROBLEM NAME: Self Defence Training
// PROBLEM URL: https://www.codechef.com/problems/SELFDEF
// PROBLEM DIFFICULTY RATTING: 716
// STATUS: accepted
// TIME: 0.00
// MEMORY: 1.6M

#include <stdio.h>

int main(void) {
    int t, n, age, count;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d", &n);
        count = 0;

        for (int i=0; i<n; i++){
            scanf("%d", &age);

            if (age >= 10 && age <= 60)
                count++;

        }

        printf("%d\n", count);

    }
    
	return 0;
}



