// DATE: 04/09/2022, 04:15:40
// PROBLEM NAME: Greater Average
// PROBLEM URL: https://www.codechef.com/problems/AVGPROBLEM
// PROBLEM DIFFICULTY RATTING: 500
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        if ((float)(a+b)/2 > c){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



