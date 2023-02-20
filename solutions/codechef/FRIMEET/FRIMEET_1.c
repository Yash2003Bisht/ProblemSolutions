// DATE: 14/09/2022, 05:37:29
// PROBLEM NAME: Friends Meetup
// PROBLEM URL: https://www.codechef.com/problems/FRIMEET
// PROBLEM DIFFICULTY RATTING: 1098
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        printf(b>a?"NO\n":"YES\n");
    }
	return 0;
}



