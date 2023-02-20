// DATE: 08/10/2022, 06:48:25
// PROBLEM NAME: Break the Stick
// PROBLEM URL: https://www.codechef.com/problems/BREAKSTICK
// PROBLEM DIFFICULTY RATTING: 1026
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t, x, n;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d", &n,&x);
        if (n%2 == 0 || (x == 1 && x != n)){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



