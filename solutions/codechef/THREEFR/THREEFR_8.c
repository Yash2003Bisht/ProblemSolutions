// DATE: 17/10/2022, 05:48:16
// PROBLEM NAME: Three Friends
// PROBLEM URL: https://www.codechef.com/problems/THREEFR
// PROBLEM DIFFICULTY RATTING: 1074
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,x,y,z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x,&y,&z);
        if (x==z && x<y){
            printf("yes\n");
        } else{
            printf("no\n");
        }
    }
	return 0;
}



