// DATE: 16/10/2022, 02:19:37
// PROBLEM NAME: Tax in Chefland
// PROBLEM URL: https://www.codechef.com/problems/TAXES
// PROBLEM DIFFICULTY RATTING: 276
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if (x>100){
            printf("%d\n", x-10);
        } else{
            printf("%d\n", x);
        }
    }
	return 0;
}



