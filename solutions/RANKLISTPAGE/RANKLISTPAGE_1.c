// QUESTION URL: https://www.codechef.com/problems/RANKLISTPAGE

#include <stdio.h>

int main(void) {
    int t,x;
    scanf("%d", &t);
    while(t--){
        scanf("%d", &x);
        int page = x%25 == 0 ? x/25 : (x/25)+1;
        printf("%d\n", page);
    }
	return 0;
}



