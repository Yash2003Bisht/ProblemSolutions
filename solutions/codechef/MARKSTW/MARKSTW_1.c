// DATE: 25/09/2022, 11:53:46
// PROBLEM NAME: Alice and Marks
// PROBLEM URL: https://www.codechef.com/problems/MARKSTW
// PROBLEM DIFFICULTY RATTING: 362
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int x,y;
    scanf("%d%d", &x,&y);
    if (x>=2*y){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
	return 0;
}



