// QUESTION URL: https://www.codechef.com/problems/MARKSTW
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



