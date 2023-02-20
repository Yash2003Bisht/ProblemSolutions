// DATE: 29/09/2022, 06:37:46
// PROBLEM NAME: Lucky Boundaries
// PROBLEM URL: https://www.codechef.com/problems/ICM0013
// PROBLEM DIFFICULTY RATTING: 1112
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,counter;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        counter = 0;
        for (int i=1; i<=n; i++){
            if (n%i<=n/2){
                counter++;
            }
        }
        printf("%d\n", counter);
    }
	return 0;
}



