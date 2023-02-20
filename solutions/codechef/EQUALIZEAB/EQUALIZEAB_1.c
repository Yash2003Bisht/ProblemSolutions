// DATE: 24/09/2022, 05:44:47
// PROBLEM NAME: Equalize AB
// PROBLEM URL: https://www.codechef.com/problems/EQUALIZEAB
// PROBLEM DIFFICULTY RATTING: 1069
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,a,b,x;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d", &a,&b,&x);
        if ((a-b)%(2*x) == 0){
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
	return 0;
}



