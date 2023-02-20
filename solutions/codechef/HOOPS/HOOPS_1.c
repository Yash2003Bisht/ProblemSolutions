// DATE: 26/09/2022, 08:02:00
// PROBLEM NAME: Hoop Jump
// PROBLEM URL: https://www.codechef.com/problems/HOOPS
// PROBLEM DIFFICULTY RATTING: 930
// STATUS: accepted
// TIME: 0.02
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,n;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &n);
        printf("%d\n", (n/2)+1);
    }
	return 0;
}



