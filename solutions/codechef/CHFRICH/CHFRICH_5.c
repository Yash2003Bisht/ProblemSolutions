// DATE: 26/09/2022, 05:49:21
// PROBLEM NAME: Richie Rich
// PROBLEM URL: https://www.codechef.com/problems/CHFRICH
// PROBLEM DIFFICULTY RATTING: 878
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,a,b,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &a,&b,&x);
        if (a<b){
            printf("%d\n", (b-a)/10);
        } else{
            printf("0\n");
        }
    }
	return 0;
}



