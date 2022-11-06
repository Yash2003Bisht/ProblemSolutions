// QUESTION URL: https://www.codechef.com/problems/L56GAME
// STATUS: accepted

#include <stdio.h>

int main(void) {
    int t, n;
    
    scanf("%d", &t);
    
    while (t--){
        scanf("%d", &n);
        int a[n], total=0;
        for (int i=0; i<n; i++){
            scanf("%d", &a[i]);
            total += a[i];
        }
        
        if (n == 1 || total % 2 == 0){
            printf("1\n");
        } else{
            printf("2\n");
        }
    }
    
	return 0;
}



