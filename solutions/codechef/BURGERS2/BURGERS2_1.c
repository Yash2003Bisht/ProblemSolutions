// DATE: 14/11/2022, 06:27:46
// PROBLEM NAME: Hungry Chef
// PROBLEM URL: https://www.codechef.com/problems/BURGERS2
// PROBLEM DIFFICULTY RATTING: 1187
// STATUS: accepted
// TIME: 0.01
// MEMORY: 5.3M

#include <stdio.h>
#define MIN(x,y)(x<y?x:y)

int main(void) {
    int t, x, y, n, r, temp;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d%d%d", &x,&y,&n,&r);
        if (n*x > r)
            printf("-1\n");
        else{
            temp = MIN((r-n*x) / (y-x), n);
            printf("%d %d\n", n-temp, temp);
        }
    }
    
    
	return 0;
}



