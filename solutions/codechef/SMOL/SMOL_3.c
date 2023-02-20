// DATE: 27/09/2022, 06:00:17
// PROBLEM NAME: Smallest Possible Whole Number
// PROBLEM URL: https://www.codechef.com/problems/SMOL
// PROBLEM DIFFICULTY RATTING: 1306
// STATUS: time limit exceeded
// TIME: -
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,n,k;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&k);
        if (n==k){
            printf("0\n");
        } else if(n<k){
            printf("%d\n",n);
        } else{
            int counter;
            while (1){
                counter = n-k;
                if (counter >= 0){
                    n = counter;
                } else{
                    break;
                }
            }
            printf("%d\n", n);
        }
    }
	return 0;
}



