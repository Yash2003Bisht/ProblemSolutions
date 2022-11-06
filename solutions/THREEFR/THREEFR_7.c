// QUESTION URL: https://www.codechef.com/problems/THREEFR
// STATUS: wrong answer

#include <stdio.h>

int main(void) {
    int t,x,y,z;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d", &x,&y,&z);
        if (y == x+z){
            printf("yes\n");
        } else{
            printf("no\n");
        }
    }
	return 0;
}



