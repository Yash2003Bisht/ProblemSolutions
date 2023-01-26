// QUESTION URL: https://www.codechef.com/problems/SIGNMOVE
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t, n, position=0;
    scanf("%d", &t);

    while(t--){
        scanf("%d", &n);
        
        if (position >= 0){
            position -= n;
            printf("%d\n", position);
        } else {
            position += n;
            printf("%d\n", position);
        }
    }
	return 0;
}



