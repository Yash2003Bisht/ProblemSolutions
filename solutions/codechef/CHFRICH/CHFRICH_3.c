// DATE: 26/09/2022, 05:53:57
// PROBLEM NAME: Richie Rich
// PROBLEM URL: https://www.codechef.com/problems/CHFRICH
// PROBLEM DIFFICULTY RATTING: 878
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,a,b,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &a,&b,&x);
        printf("%d\n", (b-a)/x);
    }
	return 0;
}



