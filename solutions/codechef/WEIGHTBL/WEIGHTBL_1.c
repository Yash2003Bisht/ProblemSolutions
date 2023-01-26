// QUESTION URL: https://www.codechef.com/problems/WEIGHTBL
// STATUS: accepted
// TIME: 0.03
// MEMORY: 5.3M

#include <stdio.h>

int main(void) {
    int t;
    scanf("%d", &t);
    int w1, w2, x1, x2, m;
    for (int i=0; i<t; i++){
        scanf("%d%d%d%d%d", &w1,&w2,&x1,&x2,&m);
        if (w2-w1 >= x1*m && w2-w1 <= x2*m){
            printf("1\n");
        }else{
            printf("0\n");
        }
    }
	return 0;
}



