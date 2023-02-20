// DATE: 26/09/2022, 08:18:45
// PROBLEM NAME: Two Dishes
// PROBLEM URL: https://www.codechef.com/problems/TWODISH
// PROBLEM DIFFICULTY RATTING: 1140
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.2M

#include <stdio.h>

int main(void) {
    int t,n,a,b,c;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d%d", &n,&a,&b,&c);
        if (b>=n && a+c>=n){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



