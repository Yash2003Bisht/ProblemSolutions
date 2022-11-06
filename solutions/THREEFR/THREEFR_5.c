// QUESTION URL: https://www.codechef.com/problems/THREEFR
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t,x,y,z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x,&y,&z);
        if (x == y == x){
            printf("no\n");
        } else{
            printf("yes\n");
        }
    }
	return 0;
}



