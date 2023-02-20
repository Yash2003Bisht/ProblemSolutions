// DATE: 12/09/2022, 06:00:03
// PROBLEM NAME: Chef and Pairing Slippers
// PROBLEM URL: https://www.codechef.com/problems/CHEFSLP
// PROBLEM DIFFICULTY RATTING: 930
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t,n,l,p,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d",&n,&l,&x);
        p = n-l>l?l:n-l;
        printf("%d\n", p*x);
    }
	return 0;
}



