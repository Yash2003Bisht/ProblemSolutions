// QUESTION URL: https://www.codechef.com/problems/BOBBANK
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t, w, x, y, z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &w, &x, &y, &z);
        printf("%d\n", w+((x-y)*z));
    }
	return 0;
}



