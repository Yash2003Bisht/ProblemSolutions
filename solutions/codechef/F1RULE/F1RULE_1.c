// DATE: 12/09/2022, 08:05:06
// PROBLEM NAME: Miami GP
// PROBLEM URL: https://www.codechef.com/problems/F1RULE
// PROBLEM DIFFICULTY RATTING: 487
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,x,y;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &x,&y);
        if (y<=x+(x*7/100)){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



