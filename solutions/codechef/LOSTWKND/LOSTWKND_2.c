// QUESTION URL: https://www.codechef.com/problems/LOSTWKND
// STATUS: wrong answer
// TIME: 0.00
// MEMORY: 0M

#include <stdio.h>

int main(void) {
    int t,i,r,p,a[5];
    scanf("%d", &t);
    while(t--){
        for(i=0; i<5; i++){
            scanf("%d", &a[i]);
        }
        scanf("%d", &p);
        for(i=0; i<5; i++){
           r += a[i]*p;
        }
        if (r>120){
            printf("YES\n");
        } else{
            printf("NO\n");
        }
    }
	return 0;
}



