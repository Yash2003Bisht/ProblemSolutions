// QUESTION URL: https://www.codechef.com/problems/DIVIDING
// STATUS: wrong answer
// TIME: 0.01
// MEMORY: 5.4M

#include <stdio.h>

int main(void) {
    int n, c, total=0;
    scanf("%d", &n);
    
    for (int i=0; i<n; i++){
        total += scanf("%d", &c);
    }
    
    if (n*((n+1)/2) == total) printf("YES");
    else printf("NO");
    
	return 0;
}



