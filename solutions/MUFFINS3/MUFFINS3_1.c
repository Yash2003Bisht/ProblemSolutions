// QUESTION URL: https://www.codechef.com/problems/MUFFINS3
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,a;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &a);
        printf("%d\n", (a/2)+1);
    }
	return 0;
}



