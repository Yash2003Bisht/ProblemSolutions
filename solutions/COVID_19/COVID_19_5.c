// QUESTION URL: https://www.codechef.com/problems/COVID_19

#include <stdio.h>

int main(void) {
    int t, n, m;
    scanf("%d", &t);
    
    while(t--){
        scanf("%d%d", &n, &m);
        printf("%d\n", (n-n/2)*(m%2==0?m/2:(m/2)+1));
    }
    
	return 0;
}



