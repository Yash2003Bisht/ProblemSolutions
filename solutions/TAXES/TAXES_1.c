// QUESTION URL: https://www.codechef.com/problems/TAXES
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        if (x>100){
            printf("%d\n", x-10);
        } else{
            printf("%d\n", x);
        }
    }
	return 0;
}



