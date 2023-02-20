// DATE: 28/09/2022, 05:38:35
// PROBLEM NAME: Magician versus Chef
// PROBLEM URL: https://www.codechef.com/problems/MAGICHF
// PROBLEM DIFFICULTY RATTING: 1088
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,n,x,s,a,b,i;
    scanf("%d", &t);
    while(t--){
        scanf("%d%d%d", &n,&x,&s);
        for(i=0; i<s; i++){
            scanf("%d%d", &a,&b);
            if (a!=x){
                x = a;
            } else if (b!=x){
                x = b;
            }
        }
        printf("%d\n", x);
    }
	return 0;
}



