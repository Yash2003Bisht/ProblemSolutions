// QUESTION URL: https://www.codechef.com/problems/BOBBANK
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.3M

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



