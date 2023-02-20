// DATE: 17/10/2022, 06:15:28
// PROBLEM NAME: Three Friends
// PROBLEM URL: https://www.codechef.com/problems/THREEFR
// PROBLEM DIFFICULTY RATTING: 1074
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.1M

#include <stdio.h>

int main(void) {
    int t,x,y,z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x,&y,&z);
        if (x == y+z || y == x+z || z == x+y){
            printf("yes\n");
        } else{
            printf("no\n");
        }
    }
	return 0;
}



