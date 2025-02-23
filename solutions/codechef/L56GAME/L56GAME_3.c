// DATE: 10/10/2022, 07:30:59
// PROBLEM NAME: Chef and Game with Sequence
// PROBLEM URL: https://www.codechef.com/problems/L56GAME
// PROBLEM DIFFICULTY RATTING: 1051
// STATUS: accepted
// TIME: 0.00
// MEMORY: 5.4M

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



