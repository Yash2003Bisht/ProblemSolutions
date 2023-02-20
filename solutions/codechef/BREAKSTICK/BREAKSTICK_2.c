// DATE: 08/10/2022, 06:52:40
// PROBLEM NAME: Break the Stick
// PROBLEM URL: https://www.codechef.com/problems/BREAKSTICK
// PROBLEM DIFFICULTY RATTING: 1026
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    long int t, x, n;
    scanf("%ld", &t);
    while(t--){
        scanf("%ld%ld", &n,&x);
        if (n%2 == 0 || (x == 1 && x != n)){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



